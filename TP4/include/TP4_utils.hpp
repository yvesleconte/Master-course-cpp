#ifndef EXERCISES_TP4_UTILS_HPP
#define EXERCISES_TP4_UTILS_HPP

#include <string>
#include <array>

enum typecase
{
    vide,
    joueur1,
    joueur2
};


class Morpion{
    int arr[3][3] = {0};
    int tour = 1;
public:
    Morpion();

    void jouer(int a, int b);

    typecase gagnant(int round, int size);
};


#endif //EXERCISES_TP4_UTILS_HPP
