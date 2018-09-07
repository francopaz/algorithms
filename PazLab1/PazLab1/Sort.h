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
#include "Bubble.h"
#include "Insertion.h"
#include "Merge.h"
class Sort {
public:
	Sort();
	Sort(const Sort& orig);
	virtual ~Sort();
	Bubble b;
	Insertion i;
	Merge m;
private:

};

#endif /* SORT_H */

