/*
  * File:   Sort.cpp
  * Author: fpaz9
  *
  * Created on September 20, 2018, 7:54 PM
  */

/*#include "Sort.h"
#include <fstream>
#include <iostream>
#include "Algorithm.h"
Sort::Sort() {
}

Sort::Sort(const Sort& orig) {
}

Sort::~Sort() {
}

void Sort::load(std::string filename) {
	searchType = filename.substr(0, filename.find("1"));
	std::ifstream file;
	file.open("Data/" + filename);
	if (!file) {
		std::cerr << "unable to open file";
		exit(1);
	}
	int num;
	while (file >> num) {
		data.push_back(num);
	}
	file.close();
}
void Sort::execute() {
	auto start = std::chrono::high_resolution_clock::now();
	selectedAlgo->sort(data);
	auto finish = std::chrono::high_resolution_clock::now();
	std::chrono::duration<double> elapsed = finish - start;
	time = elapsed.count();
}
void Sort::display() {
	for (int x : data) {
		std::cout << x << std::endl;
	}
}
void Sort::stats() {
	std::cout << "Algorithm: " << name << std::endl;
	std::cout << "Execution Time: " << time << std::endl;
	std::cout << "Data Type: " << sorttype << std::endl;
	std::cout << "Number of Records Analyzed: " << data.size() << std::endl;
}
void Sort::select(algoType algo) {
	if (algo == 0) {
		selectedAlgo = new Bubble<int>();
		name = "bubble";
	}
	else if (algo == 1) {
		selectedAlgo = new Insertion<int>();
		name = "insertion";
	}
	else if (algo == 2) {
		selectedAlgo = new Merge<int>();
		name = "merge";
	}
}
void Sort::save(std::string filename) {
	std::ofstream outfile;
	std::string filepath = "Save/" + filename + sorttype + std::to_string(data.size()) + name + ".txt";
	outfile.open(filepath);
	if (!outfile) {
		std::cerr << "unable to open file";
		exit(1);
	}
	for (unsigned int i = 0; i < data.size(); i++)
		outfile << data[i] << std::endl;
	outfile.close();
}
void Sort::configure() {

}*/