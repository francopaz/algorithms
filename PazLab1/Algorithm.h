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
#include <stdio.h>
#include <vector>
#include <chrono>
#include <string>
#include "Bubble.h"
#include "Insertion.h"
#include "Merge.h"
#include "searchAlgo.h"
enum algoType {
	BUBBLE = 0,
	INSERTION = 1,
	MERGE = 2
};
class Algorithm {
public:
	virtual void load(std::string)=0;
	virtual void execute()=0;
	virtual void display()=0;
	virtual void stats()=0;
	virtual void select(algoType)=0;
	virtual void save(std::string)=0;
	virtual void configure()=0;
protected:
	std::vector<int> data;
	searchAlgo<int>* selectedAlgo;
	std::string name;
	std::string sorttype;
	double time;
};
/*void Algorithm::Load(std::string filename, int datasize) {
	datasetsize = datasize;
	inFile.open(filename);
	std::string num;
	int number;
	if (!inFile.is_open()) {
		std::cout << "Problem opening File" << std::endl;
		return;
	}
	else {
		while (!inFile.eof()) {
			std::getline(inFile,num);
			number = std::atoi(num.c_str());
			data.push_back(number);
		}
	}
}
void Algorithm::Execute(std::string searchalgo) {
	using timer = std::chrono::high_resolution_clock;
	timer::time_point start_time = timer::now();
	sorttype = searchalgo;
	if (searchalgo == "Bubble") {
		s.b.BubbleSort(data, datasetsize);
	}
	else if (searchalgo == "Merge") {
		s.m.MergeSort(data, 0, datasetsize);
	}
	else if (searchalgo == "Insertion") {
		s.i.InsertionSort(data, datasetsize);
	}
	else {
		std::cout << "Invalid choice, Pick Insertion, Merge or Bubble" << std::endl;
	}
	timer::time_point end_time = timer::now();
	time = std::chrono::duration_cast<std::chrono::milliseconds>(end_time - start_time).count();
}
void Algorithm::Display() {
	for (int i = 0; i < 3; i++) {
		if (Select(i) == "Bubble") {
			std::cout << "Bubble Sort" << std::endl;
			s.b.print(data, datasetsize);
		}
		else if (Select(i) == "Merge") {
			std::cout << "Merge Sort" << std::endl;
			s.m.print(data, datasetsize);
		}
		else if (Select(i) == "Insertion") {
			std::cout << "Insertion Sort" << std::endl;
			s.i.print(data, datasetsize);
		}
		else {
			std::cout << "No valid display options" << std::endl;
		}
	}
}
void Algorithm::Stats() {
	std::cout << sorttype.c_str() << "\t" << time << "\t" << datasetsize << std::endl;
}
std::string Algorithm::Select(int id) {
	if (id == 0) {
		return "Bubble";
	}
	else if (id == 1) {
		return "Merge";
	}
	else if (id == 2) {
		return "Insertion";
	}
}
void Algorithm::Save(std::string filepath) {
	std::ofstream file(filepath);
	std::vector<int> temp;
	char* buffer = new char[7];
	temp=s.b.getsorted();
	for (int i = 0; i < temp.size(); i++) {
		file<<temp[i];
	}
	temp=s.i.getsorted();
	for (int i = 0; i < temp.size(); i++) {
		file<<temp[i];
	}
	temp=s.m.getsorted();
	for (int i = 0; i < temp.size(); i++) {
		file<<temp[i];
	}
	file.close();
}
void Algorithm::Configure() {

}*/
#endif /* ALGORITHM_H */

