#ifndef TP5_TP5_UTILS_HPP
#define TP5_TP5_UTILS_HPP
#include <vector>
#include <iostream>

class Ensemble {
public:
    // Constructeur et destructeur
    explicit Ensemble(int taille);
    ~Ensemble();

    // Fonctions membres
    int taille_max() const;
    int cardinal() const;
    void afficher() const;
    bool ajouter(int x);
    friend int somme(const Ensemble& e);
private:
    // Attributs
    int *tab;
    int nmax;
    int nelts;
};

int somme(const Ensemble& e){
    int sum = 0;
    for (int i{0};i<e.nelts;++i){
        sum+=e.tab[i];
    }
    return sum;
}

#endif //TP5_TP5_UTILS_HPP



