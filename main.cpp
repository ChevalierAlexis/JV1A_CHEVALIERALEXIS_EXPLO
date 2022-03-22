#ifndef MAIN_CPP
#define MAIN_CPP

#include "main.h"
#include <iostream>
#include <string>

std::string choix;

int main(){
std::cout<<"Souhaitez-vous allez dans la FORET ou dans les MARAIS ?"<<std::endl;
std::cin >> choix;
if (choix=="FORET"){
    std::cout<<"Vous êtes dans la forêt"<<std::endl;
}
if (choix=="MARAIS"){
    std::cout<<"Vous êtes dans les marais"<<std::endl;
}
}

#endif