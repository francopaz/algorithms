/*
  * File:   main.cpp
  * Author: fpaz9
  *
  * Created on September 20, 2018, 7:40 PM
  */
#include "algorithm.h"

const std::vector<std::string> dataOrders = { "Random","Reverse","Unique","PartRand" };
const std::vector<std::string> dataSizes = { "10.txt","1000.txt","10000.txt","100000.txt" };

int main(int argc, char** argv) {
	/*
	datafilecreator d;
	d.create();
	*/
	Algorithm* srt;
	for (int i = 0; i <= 2; i++) {
		algoType algo = static_cast<algoType>(i);
		for (unsigned int j = 0; j < dataOrders.size(); j++) {
			for (unsigned int k = 0; k < dataSizes.size(); k++) {
				std::string filename = dataOrders[j] + dataSizes[k];
				srt = new Sort();
				srt->load(filename);
				srt->select(algo);
				srt->execute();
				srt->stats();
				srt->save("Sorted");
			}
		}
	}
	return 0;
}
