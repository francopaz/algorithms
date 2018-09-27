#ifndef ADJACENCYMATRIX_H
#define ADJACENCYMATRIX_H
#include <iostream>
#include <fstream>
#include <string>

class adjacencymatrix {
private:
	bool** adjMatrix;
	int passSize;
public:
	adjacencymatrix() {};
	adjacencymatrix(const adjacencymatrix & aMatrix);
	adjacencymatrix(int size);
	void loadNodes(std::string);
	void addnext(int, int);
	void print();
	~adjacencymatrix();
};
adjacencymatrix::adjacencymatrix(int size) {
	passSize = size;
	adjMatrix = new bool*[size];
	for (int i = 0; i < size; i++) {
		adjMatrix[i] = new bool[size];
		for (int j = 0; j < size; j++) {
			adjMatrix[i][j] = false;
		}
	}
}
void adjacencymatrix::addnext(int x, int y) {
	adjMatrix[x][y] = true;
	adjMatrix[y][x] = true;
}
void adjacencymatrix::print() {
	for (int i = 0; i < passSize; i++) {
		std::cout << i+1 << " : ";
		for (int j = 0; j < passSize; j++)
			std::cout << adjMatrix[i][j] << " ";
		std::cout << "\n";
	}
}
adjacencymatrix::~adjacencymatrix() {
	for (int i = 0; i < passSize; i++)
		delete[] adjMatrix[i];
	delete[] adjMatrix;
}
void adjacencymatrix::loadNodes(std::string file) {
	std::ifstream f;
	f.open(file);
	std::string incoming;
	std::string c = ",";
	if (f.is_open()) {
		//while (!f.eof()) {
			std::string node;
			int head;
			std::string temp;
			std::getline(f, incoming);
			int pos = 0;
			pos = incoming.find(c);
			head = std::stoi(incoming.substr(0, pos));
			incoming.erase(0, pos + c.length());
			while ((pos = incoming.find(c)) != std::string::npos) {
				temp = incoming.substr(0, pos);
				incoming.erase(0, pos + c.length());
				adjMatrix[head - 1][std::stoi(temp) - 1] = true;
			}
		//}
	}
}
#endif