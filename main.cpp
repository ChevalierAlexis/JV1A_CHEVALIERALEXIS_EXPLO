#ifndef MAIN_CPP
#define MAIN_CPP

#include "Lieu.cpp"
#include <iostream>
#include <string>
#include <vector>

std::string choix;

int main(){
    std::cout<<"Souhaitez-vous allez dans la FORET ou dans les MARAIS ?"<<std::endl;
std::cin >> choix;
if (choix=="FORET"){
    std::cout<<"Vous êtes dans la forêt"<<std::endl;
}
if (choix=="MARAIS"){
    std::cout<<"Vous êtes dans les marais"<<std::endl;
Lieu lieu1=Lieu("la forêt",6,"il y a beaucoup d'arbres");
lieu1.setdiff(7);
lieu1.afficher();
Lieu lieu2=Lieu("les marais",15,"un vrai bourbier");
Lieu lieu3=Lieu("le village",1,"c'est accueillant");

}

#endif