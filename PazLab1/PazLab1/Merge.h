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
class Merge {
public:
	Merge();
	Merge(const Merge& orig);
	virtual ~Merge();
	void merge(std::vector<int>, int, int, int);
	void MergeSort(std::vector<int>, int, int);
	void print(std::vector<int>, int);
	std::vector<int> getsorted();
private:
	std::vector<int> sorted;
};

#endif /* MERGE_H */

