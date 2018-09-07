/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

 /*
  * File:   main.cpp
  * Author: fpaz9
  *
  * Created on August 28, 2018, 7:40 PM
  */

#include <cstdlib>
#include "Algorithm.h"
#include "datafilecreator.h"

  /*
   *
   */
int main(int argc, char** argv) {
	/*datafilecreator dfc;
	for (int i = 0; i < 4; i++) {
		if (i == 0) {
			dfc.partrand(10, "partrand10.txt");
			dfc.rand(10, "rand10.txt");
			dfc.revsort(10, "revsort10.txt");
			dfc.unique(10, "unique10.txt");
		}
		else if (i == 1) {
			dfc.partrand(1000, "partrand1000.txt");
			dfc.rand(1000, "rand1000.txt");
			dfc.revsort(1000, "revsort1000.txt");
			dfc.unique(1000, "unique1000.txt");
		}
		else if (i == 2) {
			dfc.partrand(10000, "partrand10000.txt");
			dfc.rand(10000, "rand10000.txt");
			dfc.revsort(10000, "revsort10000.txt");
			dfc.unique(10000, "unique10000.txt");
		}
		else {
			dfc.partrand(100000, "partrand100000.txt");
			dfc.rand(100000, "rand100000.txt");
			dfc.revsort(100000, "revsort100000.txt");
			dfc.unique(100000, "unique100000.txt");
		}
	}*/
	Algorithm Search;
	int datasize;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 16; j++) {
			if (j == 0) {
				Search.Load("partrand10.txt", 10);
				Search.Execute(Search.Select(i));
				Search.Stats();
			}
			else if (j == 1) {
				Search.Load("rand10.txt", 10);
				Search.Execute(Search.Select(i));
				Search.Stats();
			}
			else if (j == 2) {
				Search.Load("revsort10.txt", 10);
				Search.Execute(Search.Select(i));
				Search.Stats();
			}
			else if (j == 3) {
				Search.Load("unique10.txt", 10);
				Search.Execute(Search.Select(i));
				Search.Stats();
			}
			else if (j == 4) {
				Search.Load("partrand1000.txt", 1000);
				Search.Execute(Search.Select(i));
				Search.Stats();
			}
			else if (j == 5) {
				Search.Load("rand1000.txt", 1000);
				Search.Execute(Search.Select(i));
				Search.Stats();
			}
			else if (j == 6) {
				Search.Load("revsort1000.txt", 1000);
				Search.Execute(Search.Select(i));
				Search.Stats();
			}
			else if (j == 7) {
				Search.Load("unique1000.txt", 1000);
				Search.Execute(Search.Select(i));
				Search.Stats();
			}
			else if (j == 8) {
				Search.Load("partrand10000.txt", 10000);
				Search.Execute(Search.Select(i));
				Search.Stats();
			}
			else if (j == 9) {
				Search.Load("rand10000.txt", 10000);
				Search.Execute(Search.Select(i));
				Search.Stats();
			}
			else if (j == 10) {
				Search.Load("revsort10000.txt", 10000);
				Search.Execute(Search.Select(i));
				Search.Stats();
			}
			else if (j == 11) {
				Search.Load("unique10000.txt", 10000);
				Search.Execute(Search.Select(i));
				Search.Stats();
			}
			else if (j == 12) {
				Search.Load("partrand100000.txt", 100000);
				Search.Execute(Search.Select(i));
				Search.Stats();
			}
			else if (j == 13) {
				Search.Load("rand100000.txt", 100000);
				Search.Execute(Search.Select(i));
				Search.Stats();
			}
			else if (j == 14) {
				Search.Load("revsort100000.txt", 100000);
				Search.Execute(Search.Select(i));
				Search.Stats();
			}
			else {
				Search.Load("unique100000.txt", 100000);
				Search.Execute(Search.Select(i));
				Search.Stats();
			}
		}
	}
	return 0;
}

