#ifndef ADJACENCYLIST_H
#define ADJACENCYLIST_H
#include <iostream>
#include <list>
#include "doublylinkedlist.h"
template<typename T>
class adjacencylist
{
	int passSize;
	list *adjList;
public:
	adjacencylist(int s);
	~adjacencylist();
	void addnext(int src, int dst);
	int location(int);
	friend class doublylinkedlist<T>;
};
template <typename T>
adjacencylist<T>::adjacencylist(int size) {
	passSize = size;
	adjList = new list[size];
}
template <typename T>
void adjacencylist<T>::addnext(int src, int dst) {
	adjList[src].push_front(dst);
}
#endif // ADJACENCYLIST_H