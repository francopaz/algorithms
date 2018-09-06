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
class Bubble {
public:
    Bubble();
    Bubble(const Bubble& orig);
    virtual ~Bubble();
    void swap(int *, int *);
    void BubbleSort(vector<int>,int);
    void print(vector<int>,int);
    vector<int> getsorted();
private:
    vector<int> sorted;
};

#endif /* BUBBLE_H */

