#ifndef MAIN_CPP
#define MAIN_CPP

#include "main.h"
#include <iostream>
#include <string>

int choix;

int main(){
std::cout<<"Pour aller dans la forêt, tapez 1"<<std::endl;
std::cout<<"Pour aller dans les marais, tapez 2"<<std::endl;
std::cin >> choix;
if (choix==1){
    std::cout<<"Vous êtes dans la forêt"<<std::endl;
}
if (choix==2){
    std::cout<<"Vous êtes dans les marais"<<std::endl;
}
}

#endif