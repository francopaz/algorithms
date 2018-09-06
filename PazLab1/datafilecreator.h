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
class datafilecreator{
public:
    void rand(int,std::string);
    void revsort(int,std::string);
    void unique(int,std::string);
    void partrand(int,std::string);
private:
};
void datafilecreator::rand(int size, std::string pathname){
    std::ofstream outfile(pathname);
    int num;
    for(int i=0;i<size;i++){
        num=rand()%size;
        outfile<<num;
    }
    outfile.close();
}
void datafilecreator::partrand(int size, std::string pathname){
    std::ofstream outfile(pathname);
    for(int i=0;i<size;i++){
        if(i<size/3){
            outfile<<rand()%size;
        }
        else{
            outfile<<i;
        }
    }
    outfile.close();
}
void datafilecreator::revsort(int size, std::string pathname){
    std::ofstream outfile(pathname);
    for(int i=0;i<size;i++){
        outfile<<size-i;
    }
    outfile.close();
}
void datafilecreator::unique(int size, std::string pathname){
    int num;
    std::ofstream outfile(pathname);
    for(int i=0;i<size;i++){
        num=rand()%5;
        outfile<<num;
    }
    outfile.close();
}
#endif /* DATAFILECREATOR_H */

