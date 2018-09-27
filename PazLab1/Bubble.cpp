/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

 /*
  * File:   Bubble.cpp
  * Author: fpaz9
  *
  * Created on August 28, 2018, 7:55 PM
  */

#include "Bubble.h"
template <typename T>
Bubble<T>::Bubble() {
}
template <typename T>
Bubble<T>::Bubble(const Bubble& orig) {
}
template <typename T>
Bubble<T>::~Bubble() {
}
template <typename T>
void Bubble<T>::sort(std::vector<T>& data) {
	for (int i = 0; i < data.size() - 1; i++)
		for (int j = 0; j < data.size() - i - 1; j++)
			if (data[j] > data[j + 1])
				swap(&data[j], &data[j + 1]);
}
template <typename T>
void Bubble<T>::swap(T* a, T* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}
template <typename T>
void Bubble<T>::print(std::vector<T>& data) {
	for (int i = 0; i < data.size(); i++)
		std::cout << data[i] << std::endl;
}