/*
  * File:   main.cpp
  * Author: fpaz9
  *
  * Created on September 20, 2018, 7:40 PM
  */
#include "algorithm.h"
#include "adjacencylist.h"
#include "adjacencymatrix.h"

int main(int argc, char** argv) {
	int num = 16;
	adjacencylist alist(num);
	adjacencymatrix aMatrix(num);
	
	alist.loadNodes("graph.txt");
	aMatrix.loadNodes("graph.txt");
	alist.print();
	aMatrix.print();

	return 0;
}
