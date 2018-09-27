#ifndef ADJACENCYMATRIX_H
#define ADJACENCYMATRIX_H
#include <iostream>

template <typename T>
class adjacencymatrix {
private:
	bool** adjMatrix;
	int passSize;
public:
	adjacencymatrix(int size);
	void addnext(int, int);
	void print();
	~adjacencymatrix();
};
template<typename T>
adjacencymatrix<T>::adjacencymatrix(int size) {
	passSize = size;
	adjMatrix = new bool*[size];
	for (int i = 0; i < size; i++) {
		adjMatrix[i] = new bool[size];
		for (int j = 0; j < size; j++) {
			adjMatrix[i][j] = false;
		}
	}
}
template<typename T>
void adjacencymatrix<T>::addnext(int x, int y) {
	adjMatrix[i][j] = true;
	adjMatrix[j][i] = true;
}
template<typename T>
void adjacencymatrix<T>::print() {
	for (int i = 0; i < size; i++) {
		cout << i << " : ";
		for (int j = 0; j < size; j++)
			cout << adjMatrix[i][j] << " ";
		cout << "\n";
	}
}
template<typename T>
adjacencymatrix<T>::~adjacencymatrix() {
	for (int i = 0; i < size; i++)
		delete[] adjMatrix[i];
	delete[] adjMatrix;
}
#endif