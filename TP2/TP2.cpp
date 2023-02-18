#include <iostream>

void ajouter(int, int *);
void ex2();
void ex3(const float *, int, float *);
int ex4(const char *str, char c);
void ex5();

int main() {
    std::cout << "Do you want to execute exercise 1 ? (Yes/No)\n";
    std::string execute;
    std::cin >> execute;
    if (execute == "Yes") {
        int value_1;
        int value_2;
        int *p = &value_2;
        std::cout << "Enter an integers:";
        std::cin >> value_1;
        std::cout << "Enter an integers:";
        std::cin >> value_2;
        ajouter(value_1, p);
    }
    std::cout << "\nDo you want to execute exercise 2 ? (Yes/No)\n";
    std::cin >> execute;
    if (execute == "Yes") {
        ex2();
    }
    std::cout << "\nDo you want to execute exercise 3 ? (Yes/No)\n";
    std::cin >> execute;
    if (execute == "Yes") {
        float t[10];
        for (int i = 0; i < 10; i++) {
            t[i] = i * 0.5;
        }
        float sum;
        ex3(t, 10, &sum);
        std::cout << "The sum of the elements in the array is: " << sum << std::endl;
    }
    std::cout << "\nDo you want to execute exercise 4 ? (Yes/No)\n";
    std::cin >> execute;
    if (execute == "Yes") {
        char argument_string[100];
        char argument_character;
        int number_character;
        std::cout<<"Give a string:";
        std::cin>>argument_string;
        std::cout<<"\nGive a character:";
        std::cin>>argument_character;
        number_character = ex4(argument_string, argument_character);
        std::cout<<"There are "<<number_character<<" "<<argument_character<<" in the word "<<argument_string;
    }
    std::cout << "\nDo you want to execute exercise 5 ? (Yes/No)\n";
    std::cin >> execute;
    if (execute == "Yes") {
        ex5();
    }
    return 0;
}


// Exercise 1

void ajouter(int a, int * b) {
    *b = *b + a;
    std::cout << "The new value affected to the second integer is now " << *b << std::endl;
}


// Exercise 2

void ex2() {
    float t1[10], t2[10];
    // Initialize t1 and t2
    for (int i = 0; i < 10; i++) {
        t1[i] = i * 0.1;
        t2[i] = i * 0.2;
    }
    // Find minimum and maximum value in t1
    float min_t1 = t1[0], max_t1 = t1[0];
    for (int i = 1; i < 10; i++) {
        if (t1[i] < min_t1) {
            min_t1 = t1[i];
        }
        if (t1[i] > max_t1) {
            max_t1 = t1[i];
        }
    }
    // Copy positive elements from t2 to t1
    int count = 0;
    for (float i : t2) {
        if (i > 0) {
            t1[count++] = i;
        }
    }
    // Fill t1 with zeros if necessary
    for (int i = count; i < 10; i++) {
        t1[i] = 0;
    }
    std::cout << "Minimum value in t1: " << min_t1 << std::endl;
    std::cout << "Maximum value of t1: " << max_t1 << std::endl;
    std::cout << "The updated t1 array: " << std::endl;
    for (float i : t1) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}


// Exercise 3

void ex3(const float *t, int size, float *sum) {
    *sum = 0;
    for (int i = 0; i < size; i++) {
        *sum += t[i];
    }
}


// Exercise 4

int ex4(const char *str, char c){
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == c) {
            count++;
        }
    }
    return count;
}

// Exercise 5

void ex5(){
    int size;
    std::cout << "Give the size of the array : ";
    std::cin >> size;

    int *arr = new int[size]; // Allocation dynamique de la mémoire pour un tableau d'entiers
    for (int i = 0; i < size; i++) {
        std::cout << "Give the value of the index " << i << " :";
        std::cin >> arr[i];
    }
    int *squaredArr = new int[size]; // Création d'un nouveau tableau pour les carrés des valeurs
    for (int i = 0; i < size; i++) {
        squaredArr[i] = arr[i] * arr[i]; // Calcul des valeurs du nouveau tableau
    }
    delete [] arr; // Suppression du premier tableau
    std::cout << "The values of the second array are : ";
    for (int i = 0; i < size; i++) {
        std::cout << squaredArr[i] << " ";
    }
    std::cout << std::endl;
    delete [] squaredArr; // Suppression du second tableau
}