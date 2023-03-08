# include <iostream>
# include "include/TP4_utils.hpp"


Morpion::Morpion() {
    std::cout<<"Morpion initialise.\n";
}

void Morpion::jouer(int a, int b) {
    int size = sizeof arr /sizeof arr[0];
    if (0<=a && a<size && 0<=b && b<size && arr[a][b] ==0){
        if (tour%2==0){
            arr[a][b] = 2;
        }
        else{
            arr[a][b] = 1;
        }
        typecase winner = gagnant(tour, size);
        if (winner != 0){
            std::cout<<"\nThe winner is : "<<winner<<std::endl;
        }
        tour = tour + 1;
    }
    else{
        std::cout<<"\nError"<<std::endl;
    }
}

typecase Morpion::gagnant(int round, int size) {
    int value_diag_1 = 1;
    int value_diag_2 = 1;

    // Check diagonals
    for (int i{0};i<size-1;i++){
        if (arr[i][i] == arr[i+1][i+1]) {
            if (arr[i][i] != 0) {
                value_diag_1 = value_diag_1 + 1;
            }
        }
        if (arr[i][size-i-1] == arr[i+1][size-i-2]){
            if (arr[i][size-i-1]!=0){
                value_diag_2 = value_diag_2 + 1;
            }
        }
    }

    // Check columns and rows
    for (int i{0};i<size;++i){
        int value_1 = 1;
        int value_2 = 1;
        for (int j{0};j<size-1;++j){
            // Check column i
            if (arr[j][i] == arr[j+1][i]){
                if (arr[j][i]!=0){
                    value_1 = value_1 + 1;
                }
            }
            // Check row i
            if (arr[i][j] == arr[i][j+1]){
                if (arr[i][j]!=0){
                    value_2 = value_2 + 1;
                }
            }
        }
        // Check if the player wins
        if (value_1 == size || value_2 == size || value_diag_1 == size || value_diag_2 == size){
            if (round%2==0){
                return joueur2;
            }
            else{
                return joueur1;
            }
        }
    }
    return vide;
}