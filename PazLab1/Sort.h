/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

 /*
  * File:   Sort.h
  * Author: fpaz9
  *
  * Created on August 28, 2018, 7:54 PM
  */

#ifndef SORT_H
#define SORT_H
#include "Algorithm.h"
#include "searchAlgo.h"
#include "Bubble.h"
#include "Insertion.h"
#include "Merge.h"
#include <stdio.h>
class Sort : public Algorithm{
public:
	Sort();
	Sort(const Sort& orig);
	virtual ~Sort();
	void load(std::string);
	void execute();
	void display();
	void stats();
	void select(algoType);
	void save(std::string);
	void configure();
private:
	static searchAlgo<int>* algorithm;
};

#endif /* SORT_H */

