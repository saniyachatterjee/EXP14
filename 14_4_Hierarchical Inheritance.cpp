//Name: Saniya Chatterjee
//Prn: 23070123113
//Class: EnTC B-2
#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void eat() {
        cout << "Eating " << endl;
    }
};

// Derived class 1
class Dog : public Animal {
public:
    void bark() {
        cout << "Barking " << endl;
    }
};

// Derived class 2
class Cat : public Animal {
public:
    void meow() {
        cout << "Meowing " << endl;
    }
};

int main() {
    // Creating an object of Dog
    Dog dog;
    dog.eat();   // Calling the base class function
    dog.bark();  // Calling the derived class function

    // Creating an object of Cat
    Cat cat;
    cat.eat();   // Calling the base class function
    cat.meow();  // Calling the derived class function

    return 0;
}
