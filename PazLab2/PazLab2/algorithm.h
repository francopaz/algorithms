/*
 * File:   Algorithm.h
 * Author: fpaz9
 *
 * Created on September 20, 2018, 7:56 PM
 */

#ifndef ALGORITHM_H
#define ALGORITHM_H
#include "Sort.h"
#include <stdio.h>
#include <vector>
#include <chrono>
#include <string>
enum algoType{
	DFSi = 0,
	DFSr = 1,
	BFSi = 2,
	BFSr = 3,
	Dijkstra = 4,
	A = 5
};
enum searchType {
	adjList = 0,
	adjMatrix=1
};
class algorithm {
public:
	virtual void load(std::string)=0;
	virtual void display() = 0;
	virtual void stats() = 0;
	virtual void save() = 0;
	virtual void select(algoType) = 0;
	virtual void execute() = 0;
	virtual void configure() = 0;
	algorithm(const algorithm & alg);
	algorithm() {};
protected:
	double time;
	std::string searchType;
	std::string searchName;
};
#endif