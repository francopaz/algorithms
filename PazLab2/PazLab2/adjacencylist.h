#ifndef ADJACENCYLIST_H
#define ADJACENCYLIST_H
#include <iostream>
#include <list>
#include <string>
#include <fstream>
#include <tuple>
class adjacencylist
{
	int passSize;
	std::vector<std::tuple<int, std::vector<int>>> adjlist;
public:
	adjacencylist(int size);
	adjacencylist();
	~adjacencylist();
	void loadNodes(std::string);
	void addnext(int src, int dst);
	//int location(int);
	void print();
};
adjacencylist::adjacencylist() {

}
adjacencylist::~adjacencylist() {

}
adjacencylist::adjacencylist(int size) {
	passSize = size;
}
void adjacencylist::addnext(int src, int dst) {
	//adjList[src].push_front(dst);
}
void adjacencylist::loadNodes(std::string file) {
	std::ifstream f;
	f.open(file);
	std::string c = ",";
	std::vector<int> graph;
	std::string incoming;
	std::string temp;
	int head;
	if (f.is_open()) {
		//while (!f.eof()) {
			int pos = 0;
			std::getline(f, incoming);
			pos = incoming.find(c);
			head = std::stoi(incoming.substr(0, pos));
			incoming.erase(0, pos + c.length());
			while ((pos = incoming.find(c)) != std::string::npos) {
				temp = incoming.substr(0, pos);
				incoming.erase(0, pos + c.length());
				graph.push_back(std::stoi(temp));
			}
			graph.push_back(std::stoi(incoming));
			auto row = std::make_tuple(head, graph);
			adjlist.push_back(row);
			graph.clear();
		//}
	}
	else
		std::cout << "File failed to open" << std::endl;
}
void adjacencylist::print() {
	int temp;
	std::vector<int> tvec;
	for (unsigned int i = 0; i < adjlist.size(); i++) {
		temp = std::get<0>(adjlist[i]);
		tvec = std::get<1>(adjlist[i]);
		std::cout << temp << "->";
		for (unsigned int j = 0; j < tvec.size(); j++) {
			std::cout << tvec[j] << "->";
		}
		std::cout << std::endl;
	}
}
#endif // ADJACENCYLIST_H