/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Algorithm.h
 * Author: fpaz9
 *
 * Created on August 28, 2018, 7:56 PM
 */

#ifndef ALGORITHM_H
#define ALGORITHM_H
#include "Sort.h"
#include <vector>
#include <chrono>
class Algorithm{
public:
    template<typename T>
    static void Bubble(vector<T> &data);
    template<typename T>
    static void Merge(vector<T> &data);
    template<typename T>
    static void Insertion(vector<T> &data);
    template<typename T>
    static void Sort(vector<T> &data);
    void Load(std::string);
    void Execute(std::string);
    void Display();
    void Stats();
    std::string Select(int);
    void Save(std::string);
    void Configure();
    Sort s;
private:
    std::ifstream inFile;
    vector<int> data;
    int datasetsize;
    std::string sorttype;
    int time;
};
void Algorithm::Load(std::string filename, int datasize){
    datasetsize=datasize;
    inFile.open(filename);
    int number;
    if(!inFile.is_open()){
        std::cout<<"Problem opening File"<<std::endl;
        return;
    }
    else{
        while(!inFile.eof()){
            number=atoi(inFile);
            data.insert(number);
        }
    }
}
void Algorithm::Execute(std::string searchalgo){
    using timer=std::chrono::high_resolution_clock;
    timer::time_point start_time=timer::now();
    sorttype=searchalgo;
    if(searchalgo=="Bubble"){
        s.b.BubbleSort(data,datasetsize);
    }
    else if(searchalgo=="Merge"){
        s.m.MergeSort(data,0,datasetsize);
    }
    else if(searchalgo=="Insertion"){
        s.i.InsertionSort(data,datasetsize);
    }
    else{
        std::cout<<"Invalid choice, Pick Insertion, Merge or Bubble"<<std::endl;
    }
    timer::time_point end_time=timer::now();
    time=std::chrono::duration_cast<std::chrono::milliseconds>(end_time - start_time).count();
}
void Algorithm::Display(){
    for(int i=0;i<3;i++){
        if(Select(i)=="Bubble"){
            std::cout<<"Bubble Sort"<<std::endl;
            s.b.print(data,datasetsize);
        }
        else if(Select(i)=="Merge"){
            std::cout<<"Merge Sort"<<std::endl;
            s.m.print(data,datasetsize);
        }
        else if(Select(i)=="Insertion"){
            std::cout<<"Insertion Sort"<<std::endl;
            s.i.print(data,datasetsize);
        }
        else{
            std::cout<<"No valid display options"<<std::endl;
        }    
    }
}
void Algorithm::Stats(){
    std::cout<<sorttype<<"\t"<<time<<"\t"<<datasetsize<<std::endl;
}
std::string Algorithm::Select(int id){
    if(id==0){
        return "Bubble";
    }
    else if(id==1){
        return "Merge";
    }
    else if(id==2){
        return "Insertion";
    }
}
void Algorithm::Save(std::string filepath){
    std::ofstream file(filepath);
    file<<s.b.getsorted();
    file<<s.i.getsorted();
    file<<s.m.getsorted();
    file.close();
}
void Algorithm::Configure(){
    
}
#endif /* ALGORITHM_H */

