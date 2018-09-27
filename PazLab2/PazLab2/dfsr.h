/*
  * File:   dfsr.h
  * Author: fpaz9
  *
  * Created on September 26, 2018, 7:55 PM
  */
#ifndef DFSR_H
#define DFSR_H
#include <list>
template<typename T>
class dfsr : public sortAlgo<T> {
	int size;
	std::list *adjLists;
	bool *visited;
public:
	dfsr(int);
	virtual void addEdge(int, int);
	virtual void search(int);
};
#endif // !DFSR_H
