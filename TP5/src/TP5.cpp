#include <iostream>
#include "TP5_utils.hpp"

int main() {
    Ensemble ens(5);
    std::cout << "Taille maximale de l'ensemble : " << ens.taille_max() << std::endl;

    ens.ajouter(2);
    ens.ajouter(4);
    ens.ajouter(6);
    std::cout << "Nombre d'elements dans l'ensemble : " << ens.cardinal() << std::endl;
    ens.afficher();

    if (ens.ajouter(8)) {
        std::cout << "Ajout de l'element 8 effectue avec succes." << std::endl;
    } else {
        std::cout << "Echec de l'ajout de l'element 8." << std::endl;
    }
    ens.afficher();

    if (ens.ajouter(10)) {
        std::cout << "Ajout de l'element 10 effectue avec succes." << std::endl;
    } else {
        std::cout << "Echec de l'ajout de l'element 10." << std::endl;
    }
    ens.afficher();;
    return 0;
}
