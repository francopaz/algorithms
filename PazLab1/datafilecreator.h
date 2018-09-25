/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

 /*
  * File:   datafilecreator.h
  * Author: fpaz9
  *
  * Created on September 6, 2018, 2:00 AM
  */

#ifndef DATAFILECREATOR_H
#define DATAFILECREATOR_H
#include <fstream>
#include <string>
#include <ctime>
#include <unordered_set>
#include <random>
#include <algorithm>
#include <stdio.h>
class datafilecreator {
public:
	void create();
private:
	const std::vector<std::string> dataOrders = { "Random","Reverse","Unique","PartRand" };
	const std::vector<std::string> dataSizes = { "10","1000","10000","100000" };
};
void datafilecreator::create() {
	std::string dataOrder = dataOrders[0];
	for (unsigned int i = 0; i < dataSizes.size(); i++) {
		srand(time(0));
		std::vector<int> data;
		int size = std::stoi(dataSizes[i]);
		std::ofstream file;
		for (int j = 1; j <= size; j++) {
			data.push_back(rand() % size);
		}
		file.open("Data/" + dataOrder + dataSizes[i] + ".txt");
		for (int x : data)
			file << x << std::endl;
		file.close();
	}
	dataOrder = dataOrders[1];
	for (unsigned int i = 0; i < dataSizes.size(); i++) {
		std::vector<int> data;
		int size = std::stoi(dataSizes[i]);
		std::ofstream file;
		for (int j = size; j >= 1; j--)
			data.push_back(j);
		file.open("Data/" + dataOrder + dataSizes[i] + ".txt");
		for (int x : data)
			file << x << std::endl;
		file.close();
	}
	dataOrder = dataOrders[2];
	auto rng = std::default_random_engine{};
	for (unsigned int i = 0; i < dataSizes.size(); i++) {
		srand(time(0));
		std::vector<int> data;
		int size = std::stoi(dataSizes[i]);
		std::ofstream file;
		for (int i = 1; i <= size * .2; i++)
			data.push_back(i);
		std::unordered_set<int> unique(data.begin(), data.end());
		for (int i = size * .2 + 1; i <= size / 2 + size * .1; i++) {
			int randNum = rand()%size+1;
			while (unique.find(randNum) != unique.end()) {
				randNum = rand() % size + 1;
			}
			data.push_back(randNum);
			data.push_back(randNum);
		}
		file.open("Data/" + dataOrder + dataSizes[i] + ".txt");
		std::shuffle(std::begin(data), std::end(data), rng);
		for (int x : data)
			file << x << std::endl;
		file.close();
	}
	dataOrder = dataOrders[3];
	for (unsigned int i = 0; i < dataSizes.size(); i++) {
		srand(time(0));
		std::vector<int> data;
		int size = std::stoi(dataSizes[i]);
		std::ofstream file;
		for (int i = 1; i <= size; i++)
			data.push_back(i);
		for (int i = 1; i <= data.size()*.3; i++)
			data[rand() % data.size()] = rand() % data.size();
		file.open("Data/" + dataOrder + dataSizes[i] + ".txt");
		for (int x : data)
			file << x << std::endl;
		file.close();
	}
}
#endif /* DATAFILECREATOR_H */

