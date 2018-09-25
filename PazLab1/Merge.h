/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

 /*
  * File:   Merge.h
  * Author: fpaz9
  *
  * Created on August 28, 2018, 7:55 PM
  */

#ifndef MERGE_H
#define MERGE_H
#include <vector>
#include <stdio.h>
#include "searchAlgo.h"
template <typename T>
class Merge : public searchAlgo<T>{
public:
	Merge();
	Merge(const Merge& orig);
	virtual ~Merge();
	virtual void sort(std::vector<T>&);
	virtual void print(std::vector<T>&);
	virtual void swap(T*, T*);
private:
	std::vector<T> merge(std::vector<T>, std::vector<T>);
};

#endif /* MERGE_H */

