#include <iostream>
# include "include/TP4_utils.hpp"



int main(){
    Morpion unepartie;
    unepartie.jouer(0,0);
    unepartie.jouer(1,1);
    unepartie.jouer(0,1);
    unepartie.jouer(2,2);
    unepartie.jouer(0,2);
    return 0;
}
