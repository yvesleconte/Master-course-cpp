#include <iostream>
#include <cmath>

using namespace std;

void square_root();
float harmonique(int);


int main() {
    cout<<"Execute exercise 1";
    square_root();
    cout<<"Execute exercise 2";
    cout<<harmonique(10);
    return 0;
}

// Exercise 1

void square_root(){
    int number=1;
    while (number !=0){
        cout << "Entrez une valeur positive (0 pour terminer) :";
        cin >> number;
        if (number>0){
            cout <<"La racine de "<<number<<" est : " ;
            cout << sqrt(number)<<endl;
        }
        else if (number == 0){
            cout<< "Fin du programme.";
        }
        else {
            cout<< "Erreur, valeur négative";
        }
    }
}

// Exercise 2

float harmonique(int n){
    float somme = 0;
    for (int i=1; i<n+1; i++){
        somme = somme + 1/float(i);
    }
    return somme;
}

// Exercise 3

