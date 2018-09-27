/*
  * File:   dfsi.h
  * Author: fpaz9
  *
  * Created on September 26, 2018, 7:55 PM
  */
#ifndef DFSI_H
#define DFSI_H
#include <list>
#include "adjacencylist.h"
#include "adjacencymatrix.h"
template<typename T>
class dfsi : public sortAlgos<T> {
	int size;
	std::list *adjLists;
	bool *visited;
public:
	dfsi(int);
	virtual void addEdge(int, int);
	virtual void searchList(int);
	virtual void searchMatrix(int);
};
template<typename T>
dfsi<T>::dfsi(int V) {
	size = V;
	adjLists = new list[vertices];
	visited = new bool[vertices];
}
template<typename T>
void dfsi<T>::addEdge(int src, int dst) {

}
template<typename T>
void dfsi<T>::searchList(int index) {

}
template<typename T>
void dfsi<T>::searchMatrix(int index) {

}
#endif // !DFSI_H
