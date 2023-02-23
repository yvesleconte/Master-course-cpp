#include "include/TP5_utils.hpp"
#include <iostream>
#include <vector>

Ensemble::Ensemble(int taille) {
    nmax = taille;
    tab = new int[taille];
    nelts = 0;
}

Ensemble::~Ensemble(){
    delete[] tab;
}

int Ensemble::taille_max() const{
    return (nmax);
}

int Ensemble::cardinal() const{
    return (nelts);
}

void Ensemble::afficher() const {
    std::cout << "{ ";
    for (int i = 0; i < nelts; i++) {
        std::cout << tab[i] << " ";
    }
    std::cout << "}" << std::endl;
}

bool Ensemble::ajouter(int elem) {
    if (nelts < nmax) {
        tab[nelts] = elem;
        nelts++;
        return true;
    }
    else {
        return false;
    }
}

