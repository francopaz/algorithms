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
template<typename T>
Insertion<T>::Insertion() {
}
template <typename T>
Insertion<T>::Insertion(const Insertion& orig) {
}
template <typename T>
Insertion<T>::~Insertion() {
}
template <typename T>
void Insertion<T>::sort(std::vector<T>& data) {
	for (int i = 0; i < data.size(); i++) {
		for (int j = i; j >0 && data[j-1]>data[j]; j--)
			swap(&data[j], &data[j - 1]);
	}
}
template <typename T>
void Insertion<T>::print(std::vector<T>& data) {
	for (int i = 0; i < data.size(); i++) {
		std::cout << data[i] << std::endl;
	}
}
template <typename T>
void Insertion<T>::swap(T* a, T* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}