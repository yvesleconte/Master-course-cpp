#include <iostream>

struct Complexe {
    float re_part = 0., im_part = 0.;
};

const int NMOIS = 12;

struct enreg{
    int stock;
    [[maybe_unused]] float prix;
    int ventes [NMOIS];
};

const int LMAX_NOM = 30;

struct date{
    int jour;
    int mois;
    int annee;
};

struct personne{
    char *nom[LMAX_NOM];
    date date_inscr;
};


Complexe exercise_1_a(Complexe, Complexe);
Complexe exercise_1_b(float, Complexe*);
Complexe exercise_2(Complexe*, int);
void exercise_3(enreg*);
void inscr_personne(personne);


int main() {
    std::string execute;
    std::cout << "Do you want to execute exercise 1 ? (Yes/No)";
    std::cin >> execute;
    if (execute == "Yes") {
        Complexe value;
        Complexe value_1;
        std::cout << "\nGive the real part of the first Complexe number";
        std::cin >> value_1.re_part;
        std::cout << "\nGive the imaginary part of the first Complexe number";
        std::cin >> value_1.im_part;
        Complexe value_2;
        std::cout << "\nGive the real part of the second Complexe number";
        std::cin >> value_2.re_part;
        std::cout << "\nGive the imaginary part of the second Complexe number";
        std::cin >> value_2.im_part;
        value = exercise_1_a(value_1, value_2);
        std::cout << "\nThe sum of the given Complexe numbers has a real part of " << value.re_part << " and an imaginary part of " << value.im_part;
        std::cout << "\nGive a real float number ";
        float float_number;
        std::cin >> float_number;
        Complexe value_b;
        std::cout << "\nGive the real part of the Complexe number";
        std::cin >> value_b.re_part;
        std::cout << "\nGive the imaginary part of the Complexe number";
        std::cin >> value_b.im_part;
        value = exercise_1_b(float_number, &value_b);
        std::cout << "\nThe real part after the operation is " << value.re_part << " and the imaginary part is "
                  << value.im_part;
    }
    std::cout << "\nDo you want to execute exercise 2 ? (Yes/No)";
    std::cin >> execute;
    if (execute == "Yes") {
        int size;
        std::cout << "\nGive the size of the array";
        std::cin >> size;
        Complexe array[size];
        std::cout << "\nGive an array";
        for (int i=0;i<size;i++){
            std::cout<<"\nGive the real part of the complex number " << i+1;
            std::cin >> array[i].re_part;
            std::cout<<"Give the imaginary part of the complex number " << i+1;
            std::cin >> array[i].im_part;
        }
        Complexe result = exercise_2(array,size);
        std::cout << "\nThe sum of the elements of the array has a real part of " << result.re_part
                  << " and an imaginary part of " << result.im_part;
    }
    std::cout<<"\nDo you want to execute exercise 3 ? (Yes/No)";
    std::cin >> execute;
    if (execute == "Yes"){
        enreg value{};
        value.prix = 16.0;
        value.stock = 4;
        value.ventes[0] = 5;
        std::cout << "\nBefore executing the function exercise_3 we have that the stock is "<<value.stock<<" and the 'ventes' is "<<value.ventes[0]<<std::endl;
        exercise_3(&value);
        std::cout << "\nAfter executing the function exercise_3 we have that the stock is "<<value.stock<<" and the 'ventes' is "<<value.ventes[0]<<std::endl;
    }
    std::cout<<"\nDo you want to execute exercise 4 ? (Yes/No)";
    std::cin >> execute;
    if (execute == "Yes"){
        personne individu{};
        inscr_personne(individu);
    }
    return 0;
}

// Exercise 1

Complexe exercise_1_a(Complexe a, Complexe b) {
    struct Complexe valeur{a.re_part + b.re_part, a.im_part + b.im_part};
    return valeur;
}

Complexe exercise_1_b(float a, Complexe* b){
    b->re_part*=a;
    b->im_part*=a;
    return *b;
}

// Exercise 2

Complexe exercise_2(Complexe* array, int size){
    struct Complexe result{0, 0};
    for(int i = 0; i < size; i++){
        result.re_part += array[i].re_part;
        result.im_part += array[i].im_part;
    }
    return result;
}

// Exercise 3

void exercise_3(enreg *value){
    value->stock = 0;
    value->ventes[0] = 0;
}

// Exercise 4

void inscr_personne(personne individual){
    std::cout << "\nGive separately the day, then the month, then the year of date_inscr ";
    std::cin >> individual.date_inscr.jour;
    std::cin >> individual.date_inscr.mois;
    std::cin >> individual.date_inscr.annee;
    std::cout <<"\nGive the name of the individual\n ";
    std::cin >> individual.nom[0];
}
