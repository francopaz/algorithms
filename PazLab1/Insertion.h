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
class Insertion {
public:
    Insertion();
    Insertion(const Insertion& orig);
    virtual ~Insertion();
    void InsertionSort(vector<int>, int);
    void print(vector<int>, int);
    vector<int> getsorted();
private:
    vector<int> sorted;
};

#endif /* INSERTION_H */

