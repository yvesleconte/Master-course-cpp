#include <iostream>
#include <cmath>

void square_root();
void christmas_tree(int);
float harmonic(int);
int tribonacci(int);
float calculator(float, float, std::string);
void count_function();
int counter = 0;

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
    std::cout<<"Do you want to execute exercise 4 ? (Yes/No)\n";
    std::cin>>execute;
    if (execute == "Yes") {
        std::cout<<"Enter a non-negative integer:";
        std::cin>>value;
        std::cout<< tribonacci(value);
    }
    std::cout<<"Do you want to execute exercise 5 ? (Yes/No)\n";
    std::cin>>execute;
    if (execute == "Yes"){
        float x;
        float y;
        std::string operation;
        std::cout<<"Enter a float number:";
        std::cin>>x;
        std::cout<<"Enter a float number different from 0:";
        std::cin>>y;
        std::cout<<"Enter a common operator (+,-,*,-):";
        std::cin>>operation;
        std::cout<<calculator(x,y,operation)<<std::endl;
    }
    count_function();
    count_function();
    count_function();
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

int tribonacci(int n){
    if(n == 0) return 0;
    if(n == 1 || n == 2) return 1;
    int value_1=0;
    int value_2=1;
    int value_3=1;
    int value_4;
    for (int i=3;i<=n;i++){
        value_4 = value_1 + value_2 + value_3;
        value_1 = value_2;
        value_2 = value_3;
        value_3 = value_4;
    }
    return value_3;
}


// Exercise 5

float calculator(float x, float y, const std::string operation){
    if (operation == "/" && y==0){
        std::cout<<"Error: Cannot divide by 0."<<std::endl;
        return 0;
    }
    if (operation == "*"){
        return x*y;
    }
    else if (operation == "+") {
        return x + y;
    }
    else if (operation == "-"){
        return x-y;
    }
    else if (operation == "/"){
        return x/y;
    }
    else{
        std::cout<<"Error: Unknown operator given";
        return 0;
    }
}

// Exercise 6

void count_function(){
    std::cout<<"Appel de fonction numero " <<++counter<<std::endl;
}

// Exercise 7

