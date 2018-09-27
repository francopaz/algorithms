/*
  * File:   bfsi.h
  * Author: fpaz9
  *
  * Created on August 28, 2018, 7:55 PM
  */
#ifndef BFSI_H
#define BFSI_H
#include <list>
template<typename T>
class bfsi : public sortAlgo<T> {
	int size;
	std::list *adjLists;
	bool *visited;
public:
	bfsi(int);
	virtual void addEdge(int, int);
	virtual void search(int);
};
#endif // !BFSI_H
