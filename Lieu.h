#ifndef LIEU_H
#define LIEU_H

#include <iostream>
#include <vector>

class Lieu{
    protected : 
        std::string _nom;
        std::vector<int> _lieux;
        std::string _des;
        int _diff;

    public :
        Lieu();
        Lieu(std::string name,int difficulte,std::string description);
        std::string getNom();
        std::vector<int> getlieux();
        int getdiff();
        void setdiff(int nouvellevaleur);
        std::string getdes();
        void setlieux(int taille, int donnees);
        void afficher();
        void deplacement();
        void setcampement();

        
        
};

#endif