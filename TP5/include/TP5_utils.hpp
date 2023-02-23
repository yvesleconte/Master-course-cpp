#ifndef TP5_TP5_UTILS_HPP
#define TP5_TP5_UTILS_HPP
#include <vector>
#include <iostream>

class Ensemble {
public:
    // Constructeur et destructeur
    Ensemble(int taille);
    ~Ensemble();

    // Fonctions membres
    int taille_max() const;
    int cardinal() const;
    void afficher() const;
    bool ajouter(int x);

private:
    // Attributs
    int *tab;
    int nmax;
    int nelts;
};

#endif //TP5_TP5_UTILS_HPP



