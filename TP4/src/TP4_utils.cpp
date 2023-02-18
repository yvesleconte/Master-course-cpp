# include <iostream>
# include "include/TP4_utils.hpp"


Morpion::Morpion() {
    std::cout << "Morpion initialise.\n";
}

void Morpion::jouer(int a, int b) {
    int size = sizeof arr / sizeof arr[0];
    if (0 <= a && a < size && 0 <= b && b < size && arr[a][b] == 0) {
        if (tour % 2 == 0) {
            arr[a][b] = 2;
        } else {
            arr[a][b] = 1;
        }
        typecase winner = gagnant();
        if (tour == 9 && winner == vide){
            std::cout<<"Draw";
        }
        else if(winner == joueur1 || winner ==joueur2){
            std::cout<<"The winner is: "<<winner;
        }
        tour = tour + 1;
    } else {
        std::cout << "\nError" << std::endl;
    }
}

typecase Morpion::gagnant() {
    if ((arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2]) || (arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0])) {
        if (arr[1][1] == 1){
            return joueur1;
        }
        else if (arr[1][1] == 2){
            return joueur2;
        }
        else{
            return vide;
        }
    }
    else if (arr[0][0] == arr[0][1] && arr[0][1] == arr[0][2]){
        if (arr[0][0] == 1){
            return joueur1;
        }
        else if (arr[0][0] == 2){
            return joueur2;
        }
        else{
            return vide;
        }
    }
    else if (arr[1][0] == arr[1][1] && arr[1][1] == arr[1][2]){
        if (arr[1][0] == 1){
            return joueur1;
        }
        else if (arr[1][0] == 2){
            return joueur2;
        }
        else{
            return vide;
        }
    }
    else if (arr[2][0] == arr[2][1] && arr[2][1] == arr[2][2]){
        if (arr[2][0] == 1){
            return joueur1;
        }
        else if (arr[2][0] == 2){
            return joueur2;
        }
        else{
            return vide;
        }
    }
    else if (arr[0][0] == arr[1][0] && arr[1][0] == arr[2][0]){
        if (arr[0][0] == 1){
            return joueur1;
        }
        else if (arr[0][0] == 2){
            return joueur2;
        }
        else{
            return vide;
        }
    }
    else if (arr[0][1] == arr[1][1] && arr[1][1] == arr[2][1]){
        if (arr[0][1] == 1){
            return joueur1;
        }
        else if (arr[0][1] == 2){
            return joueur2;
        }
        else{
            return vide;
        }
    }
    else if (arr[0][2] == arr[1][2] && arr[1][2] == arr[2][2]){
        if (arr[0][2] == 1){
            return joueur1;
        }
        else if (arr[0][2] == 2){
            return joueur2;
        }
        else{
            return vide;
        }

    }
    return vide;
}