/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

 /*
  * File:   Insertion.h
  * Author: fpaz9
  *
  * Created on August 28, 2018, 7:56 PM
  */

#ifndef INSERTION_H
#define INSERTION_H
#include <vector>
#include <stdio.h>
#include "searchAlgo.h"
template <typename T>
class Insertion : public searchAlgo<T>{
public:
	Insertion();
	Insertion(const Insertion& orig);
	virtual ~Insertion();
	virtual void sort(std::vector<T>&);
	virtual void swap(T*, T*);
	virtual void print(std::vector<T>&);
private:
};

#endif /* INSERTION_H */

