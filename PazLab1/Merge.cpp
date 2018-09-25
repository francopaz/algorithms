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
template<typename T>
Merge<T>::Merge() {
}
template<typename T>
Merge<T>::Merge(const Merge& orig) {
}
template<typename T>
Merge<T>::~Merge() {
}
template <typename T>
std::vector<T> Merge<T>::merge(std::vector<T> right, std::vector<T> left) {
	std::vector<T> answ;
	while (left.size() || right.size()) {
		if (left.size() && right.size()) {
			if (left[0] <= right[0]) {
				answ.push_back(left[0]);
				left.erase(left.begin());
			}
			else {
				answ.push_back(right[0]);
				right.erase(right.begin());
			}
		}
		else if (left.size()) {
			answ.insert(answ.end(), left.begin(), left.end());
			break;
		}
		else if (right.size()) {
			answ.insert(answ.end(), right.begin(), right.end());
			break;
		}
	}
	return answ;
}
template<typename T>
void Merge<T>::sort(std::vector<T>& data) {
	if (data.size() <= 1)
		return;
	std::vector<T> left, right;
	int middle = ((int)data.size() + 1) / 2;
	left = std::vector<T>(data.begin(), data.begin() + middle);
	right = std::vector<T>(data.begin() + middle, data.end());
	sort(left);
	sort(right);
	data = merge(left, right);
}
template <typename T>
void Merge<T>::print(std::vector<T>& data) {
	for (int i = 0; i < data.size(); i++)
		std::cout << data[i] << std::endl;
}
template <typename T>
void Merge<T>::swap(T* a, T* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}