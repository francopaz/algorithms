/*
  * File:   A.h
  * Author: fpaz9
  *
  * Created on September 26, 2018, 7:55 PM
  */
#ifndef A_H
#define A_H
#include <list>
template<typename T>
class A : public sortAlgo<T> {
	int size;
	std::list *adjLists;
	bool *visited;
public:
	A(int);
	virtual void addEdge(int, int);
	virtual void search(int);
};
#endif // !A_H
