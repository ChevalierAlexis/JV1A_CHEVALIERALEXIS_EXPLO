#ifndef LIEU_CPP
#define LIEU_CPP

#include "Lieu.h"
#include <iostream>
#include <vector>

Lieu::Lieu(): _nom("Lieu anonyme"), _diff(0), _des("rien à voir ici"){}

Lieu::Lieu(std::string name, int difficulte,std::string description) : _nom(name), _diff(difficulte), _des(description){};

std::string Lieu::getNom(){
    return _nom;
}

std::vector<int> Lieu::getlieux(){
    return _lieux;
}

int Lieu::getdiff(){
    return _diff;
}

std::string Lieu::getdes(){
    return _des;
}

void Lieu:: setdiff(int nouvellevaleur){
    _diff=nouvellevaleur;
}

void Lieu:: setlieux(int taille, int donnees){
    //_lieux= (2,1,2); Laisser tomber vectors
}

void Lieu::afficher(){
    std::cout<<"Vous vous trouvez dans "<<_nom<<", "<<_des<<" la difficulté est égale à "<< _diff<<std::endl;
}

void Lieu::deplacement(){
    //std::cout<<"Vous pouvez aller dans "<<_listelieux[1]._nom<<" ou dans "<<_listelieux[2].nom<<std.endl
    //std::cin >> choix;
    //if (choix==listelieux[1].nom){
        //endurance=endurance-listelieux[1]._diff
        //listelieux[1].afficher
    //if (choix==listelieux[2].nom){
        //endurance=endurance-listelieux[2]._diff
        //listelieux[2].afficher
}
void Lieu::setcampement(){}


#endif