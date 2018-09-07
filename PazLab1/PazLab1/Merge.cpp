/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

 /*
  * File:   Merge.cpp
  * Author: fpaz9
  *
  * Created on August 28, 2018, 7:55 PM
  */

#include "Merge.h"
#include <vector>
#include <iostream>
Merge::Merge() {
}

Merge::Merge(const Merge& orig) {
}

Merge::~Merge() {
}
void Merge::merge(std::vector<int> data, int l, int m, int r) {
	int i, j, k;
	int n1 = m - l + 1;
	int n2 = r - m;
	std::vector<int> L;
	std::vector<int> R;
	for (i = 0; i < n1; i++)
		L[i] = data[l + i];
	for (j = 0; j < n2; j++)
		R[j] = data[m + 1 + j];
	i = 0;
	j = 0;
	k = l;
	while (i < n1 && j < n2) {
		if (L[i] <= R[j]) {
			data[k] = L[i];
			i++;
		}
		else {
			data[k] = R[j];
			j++;
		}
		k++;
	}
	while (i < n1) {
		data[k] = L[i];
		i++;
		k++;
	}
	while (j < n2) {
		data[k] = R[j];
		j++;
		k++;
	}
}
void Merge::MergeSort(std::vector<int> data, int l, int r) {
	if (l < r) {
		int m = l + (r - 1) / 2;
		MergeSort(data, l, m);
		MergeSort(data, m + 1, r);
		merge(data, l, m, r);
	}
	sorted = data;
}
void Merge::print(std::vector<int> data, int s) {
	for (int i = 0; i < s; i++)
		std::cout << data[i] << std::endl;
}
std::vector<int> Merge::getsorted() {
	return sorted;
}