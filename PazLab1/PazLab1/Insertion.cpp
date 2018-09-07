/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

 /*
  * File:   Insertion.cpp
  * Author: fpaz9
  *
  * Created on August 28, 2018, 7:56 PM
  */

#include "Insertion.h"
#include <iostream>

Insertion::Insertion() {
}

Insertion::Insertion(const Insertion& orig) {
}

Insertion::~Insertion() {
}
void Insertion::InsertionSort(std::vector<int> data, int n) {
	int key, j;
	for (int i = 1; i < n; i++) {
		key = data[i];
		j = i - 1;
		while (j >= 0 && data[j] > key) {
			data[j + 1] = data[j];
			j = j - 1;
		}
		data[j + 1] = key;
	}
	sorted = data;
}
void Insertion::print(std::vector<int> data, int n) {
	for (int i = 0; i < n; i++) {
		std::cout << data[i] << std::endl;
	}
}
std::vector<int> Insertion::getsorted() {
	return sorted;
}