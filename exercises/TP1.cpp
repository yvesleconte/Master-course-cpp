#include <iostream>
#include <cmath>

void square_root();
void christmas_tree(int );
float harmonic(int);


int main() {
    std::cout<<"Do you want to execute exercise 1 ? (Yes/No)\n";
    std::string execute;
    std::cin>> execute;
    int value;
    if (execute=="Yes"){
        square_root();
    }
    std::cout<<"Do you want to execute exercise 2 ? (Yes/No)\n";
    std::cin>> execute;
    if (execute=="Yes"){
        std::cout<<"Enter a non-negative integer: ";
        std::cin>>value;
        std::cout<<harmonic(value);
    }
    std::cout<<"Do you want to execute exercise 3 ? (Yes/No)\n";
    std::cin>>execute;
    if (execute == "Yes") {
        std::cout<<"Enter the height of the tree:";
        std::cin>>value;
        christmas_tree(value);
    }
    return 0;
}

// Exercise 1

void square_root(){
    int number=1;
    while (number !=0){
        std::cout << "Entrez une valeur positive (0 pour terminer) :";
        std::cin >> number;
        if (number>0){
            std::cout <<"La racine de "<<number<<" est : " ;
            std::cout << sqrt(number)<<std::endl;
        }
        else if (number == 0){
            std::cout<< "Fin du programme.\n";
        }
        else {
            std::cout<< "Erreur, valeur négative";
        }
    }
}

// Exercise 2

float harmonic(int n){
    float sum = 0;
    for (int i=1; i<n+1; i++){
        sum = sum + 1/float(i);
    }
    return sum;
}

// Exercise 3

void christmas_tree(int height){
    for (int i=0; i<height;i++ ){
        std::string left_equals(height-i-1, '=');
        std::string left_stars(i, '*');
        std::string right_equals(height-i-1, '=');
        std::string right_stars(i, '*');
        std::cout<<left_equals<<left_stars<<"*"<<right_stars<<right_equals<<std::endl;
    }
}

// Exercise 4


