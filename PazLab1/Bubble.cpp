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

Bubble::Bubble() {
}

Bubble::Bubble(const Bubble& orig) {
}

Bubble::~Bubble() {
}
Bubble::BubbleSort(vector<int> data, int n){
    int i, j;
    bool swapped;
    for(i=0;i<n-1;i++){
        swapped=false;
        for(j=0;j<n-i-1;j++)
        {
            if(data[j]>data[j+1]){
                swap(data[j], data[j+1]); //might need ampersands in front of both values
                swapped=true;
            }
        }
        if(swapped==false)
            break;
    }
    sorted=data;
}
Bubble::swap(int* a, int* b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
Bubble::print(vector<int> data,int s){
    for(int i=0;i<s;i++)
        std::cout<<data[i]<<std::endl;
}
vector<int> Bubble::getsorted(){
    return sorted;
}