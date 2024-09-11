//Name: Srihari Nair
//Prn: 23070123131
//Class: EnTC B-2
#include <iostream>
using namespace std;

// Parent class (Level 1)
class Animal {
public:
    void eat() {
        cout << "Animal is eating." << endl;
    }
};

// Derived class 1  inheriting from Animal
class Mammal : public Animal {
public:
    void walk() {
        cout << "Mammal is walking." << endl;
    }
};

//  derived class 2 inheriting from Mammal
class Dog : public Mammal {
public:
    void bark() {
        cout << "Dog is barking." << endl;
    }
};

int main() {
    Dog f1;
    
    // Dog class can access functions of Animal and Mammal classes
    f1.eat();   // Inherited from Animal
    f1.walk();  // Inherited from Mammal
    f1.bark();  // Function of Dog class
    
    return 0;
}