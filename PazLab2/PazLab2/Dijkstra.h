/*
  * File:   Dijkstra.h
  * Author: fpaz9
  *
  * Created on September 26, 2018, 7:55 PM
  */
#ifndef DIJKSTRA_H
#define DIJKSTRA_H
#include <list>
template<typename T>
class Dijkstra : public sortAlgos<T> {
	int size;
	std::list *adjLists;
	bool *visited;
public:
	Dijkstra(int);
	virtual void addEdge(int, int);
	virtual void search(int);
};
#endif // !DIJKSTRA_H
