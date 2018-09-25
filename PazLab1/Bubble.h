/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

 /*
  * File:   Bubble.h
  * Author: fpaz9
  *
  * Created on August 28, 2018, 7:55 PM
  */

#ifndef BUBBLE_H
#define BUBBLE_H
#include <vector>
#include <stdio.h>
#include "searchAlgo.h"
template <typename T>
class Bubble : public searchAlgo<T>{
public:
	Bubble();
	Bubble(const Bubble& orig);
	virtual ~Bubble();
	virtual void swap(T*, T*);
	virtual void sort(std::vector<T>&);
	virtual void print(std::vector<T>&);
private:
	std::vector<int> sorted;
};

#endif /* BUBBLE_H */

