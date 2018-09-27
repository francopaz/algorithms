/*
  * File:   Sort.h
  * Author: fpaz9
  *
  * Created on September 20, 2018, 7:54 PM
  */

#ifndef SORT_H
#define SORT_H
#include "algorithm.h"
#include <stdio.h>
class Sort : public algorithm {
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
	
};

#endif /* SORT_H */
