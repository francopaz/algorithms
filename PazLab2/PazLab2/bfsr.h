/*
  * File:   bfsr.h
  * Author: fpaz9
  *
  * Created on September 26, 2018, 7:55 PM
  */
#ifndef BFSR_H
#define BFSR_H
#include <list>
template<typename T>
class bfsr : public sortAlgo<T> {
	int size;
	std::list *adjLists;
	bool *visited;
public:
	bfsr(int);
	virtual void addEdge(int, int);
	virtual void search(int);
};
#endif // !BFSR_H
