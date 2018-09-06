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
#include <dirent.h>

/*
 * 
 */
int main(int argc, char** argv) {
    datafilecreator dfc; //creates datafiles for running later
    for(int i=0;i<4;i++){
        if(i==0){
            dfc.partrand(10,"C:\Users\fpaz9\Documents\Comp Sci Programs\Algorithms\PazLab1\Datafiles");
            dfc.rand(10,"C:\Users\fpaz9\Documents\Comp Sci Programs\Algorithms\PazLab1\Datafiles");
            dfc.revsort(10,"C:\Users\fpaz9\Documents\Comp Sci Programs\Algorithms\PazLab1\Datafiles");
            dfc.unique(10,"C:\Users\fpaz9\Documents\Comp Sci Programs\Algorithms\PazLab1\Datafiles");
        }
        else if(i==1){
            dfc.partrand(1000,"C:\Users\fpaz9\Documents\Comp Sci Programs\Algorithms\PazLab1\Datafiles");
            dfc.rand(1000,"C:\Users\fpaz9\Documents\Comp Sci Programs\Algorithms\PazLab1\Datafiles");
            dfc.revsort(1000,"C:\Users\fpaz9\Documents\Comp Sci Programs\Algorithms\PazLab1\Datafiles");
            dfc.unique(1000,"C:\Users\fpaz9\Documents\Comp Sci Programs\Algorithms\PazLab1\Datafiles");
        }
        else if(i==2){
            dfc.partrand(10000,"C:\Users\fpaz9\Documents\Comp Sci Programs\Algorithms\PazLab1\Datafiles");
            dfc.rand(10000,"C:\Users\fpaz9\Documents\Comp Sci Programs\Algorithms\PazLab1\Datafiles");
            dfc.revsort(10000,"C:\Users\fpaz9\Documents\Comp Sci Programs\Algorithms\PazLab1\Datafiles");
            dfc.unique(10000,"C:\Users\fpaz9\Documents\Comp Sci Programs\Algorithms\PazLab1\Datafiles");
        }
        else{
            dfc.partrand(100000,"C:\Users\fpaz9\Documents\Comp Sci Programs\Algorithms\PazLab1\Datafiles");
            dfc.rand(100000,"C:\Users\fpaz9\Documents\Comp Sci Programs\Algorithms\PazLab1\Datafiles");
            dfc.revsort(100000,"C:\Users\fpaz9\Documents\Comp Sci Programs\Algorithms\PazLab1\Datafiles");
            dfc.unique(100000,"C:\Users\fpaz9\Documents\Comp Sci Programs\Algorithms\PazLab1\Datafiles");
        }
    }
    Algorithm Search;
    int datasize;
    for(int i=0;i<3;i++){
        for(int j=0;j<16;j++){
            if(j==0){
                Search.Load("filename",10);
                Search.Execute(Search.Select(i));
                Search.Stats();
            }
            else if(j==1){
                Search.Load("filename",10);
                Search.Execute(Search.Select(i));
                Search.Stats();
            }
            else if(j==2){
                Search.Load("filename",10);
                Search.Execute(Search.Select(i));
                Search.Stats();
            }
            else if(j==3){
                Search.Load("filename",10);
                Search.Execute(Search.Select(i));
                Search.Stats();
            }
            else if(j==4){
                Search.Load("filename",1000);
                Search.Execute(Search.Select(i));
                Search.Stats();
            }
            else if(j==5){
                Search.Load("filename",1000);
                Search.Execute(Search.Select(i));
                Search.Stats();
            }
            else if(j==6){
                Search.Load("filename",1000);
                Search.Execute(Search.Select(i));
                Search.Stats();
            }
            else if(j==7){
                Search.Load("filename",1000);
                Search.Execute(Search.Select(i));
                Search.Stats();
            }
            else if(j==8){
                Search.Load("filename",10000);
                Search.Execute(Search.Select(i));
                Search.Stats();
            }
            else if(j==9){
                Search.Load("filename",10000);
                Search.Execute(Search.Select(i));
                Search.Stats();
            }
            else if(j==10){
                Search.Load("filename",10000);
                Search.Execute(Search.Select(i));
                Search.Stats();
            }
            else if(j==11){
                Search.Load("filename",10000);
                Search.Execute(Search.Select(i));
                Search.Stats();
            }
            else if(j==12){
                Search.Load("filename",100000);
                Search.Execute(Search.Select(i));
                Search.Stats();
            }
            else if(j==13){
                Search.Load("filename",100000);
                Search.Execute(Search.Select(i));
                Search.Stats();
            }
            else if(j==14){
                Search.Load("filename",100000);
                Search.Execute(Search.Select(i));
                Search.Stats();
            }
            else{
                Search.Load("filename",100000);
                Search.Execute(Search.Select(i));
                Search.Stats();
            }
        }
    }
    return 0;
}

