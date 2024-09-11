# EXPERIMENT 14
# Aim 
To study and implement Inheritance
# Software
Visual Studio Code

# Theory
Inheritance describes a class's ability to derive properties and characteristics from another class. Inheritance is a key feature of C++'s Object Oriented Programming. In this article, we will learn about inheritance in C++, its modes and types, and how they affect various class properties.

Types of Inheritance:

1. Single Inheritance: In single inheritance, a class can only inherit from one class. In other words, only one derived class inherits from a single base class.
2. Multilevel Inheritance: In this type of inheritance, a derived class is created from another derived class, which can then be derived from a base class or any other derived class. There could be any number of levels.
3. Multiple Inheritance: Multiple Inheritance is a feature of C++ that allows a class to inherit from multiple classes. i.e. one subclass is derived from multiple base classes.
4. Hierarchical Inheritance: In this type of inheritance, multiple subclasses are derived from a single base class. i.e. multiple derived classes are created from a single base class.

Types of Modes:
1. Public Mode:If we create a subclass from a public base class,the public member of the base class will become public in the derived class, while the protected members of the base class will become protected in the derived class.
2. Private Mode: If we create a subclass from a private base class,the public and protected members of the base class will then become private in the derived class. They are only accessible to the member functions of the derived class.
3. Protected Mode: If we create a subclass from the Protected base class, then both public and protected members of the base class will be protected in the derived class.

CODES:

1. Single Inheritance
```
#include <iostream>
#include <string>
using namespace std;
class uni
{
    public:
    string uni="Symbiosis:";
    void discipline(){
        cout<<"Engineering"<<endl;

    }
};
class Dep: public uni{
    public:
    string dept="Electronics and telecommunication";
};
int main(){
    Dep u1;
    u1.discipline();
    cout<<u1.uni+" "+u1.dept;
}
```
O/P:

![image](https://github.com/user-attachments/assets/1012522d-67de-47ac-92ff-1ae47f9b49fc)


2. Multilevel Inheritance
```
#include<iostream>
#include<string>
using namespace std;

class Forest {
public:
    string type = "evergreen";
    void trunk() {
        cout << "brown" << endl;
    }
};
class Tree : public Forest {
public:
    void type() {  
        cout << "conifer" << endl;
    }
};
class Trunk : public Tree {  
public:
    void part() {
        cout << "thick" << endl;
    }
};

int main() {
    Trunk t;  
    t.trunk();  
    t.type();
    t.part();    
    return 0;
}
```

O/P:

![image](https://github.com/user-attachments/assets/b74d7f00-7d5d-4f02-9a7f-9ff4c6e96a2c)

3. Multiple Inheritance
```
#include <iostream>
using namespace std;
class Vehicle {
public:
    string company = "Ford";
    void type() {
        cout << "911 Mustang" << endl;
    }
};
class Specs {
public:
    string mileage = "8 kmpl";
    void colour() {
        cout << "Grey" << endl;
    }
};

class Car : public Vehicle, public Specs {
public:
    string seater = "4 seater";
};
int main() {
    Car f2;
    f2.type();      
    f2.colour();      
    cout << "Company: " << f2.company << endl;
    cout << "Mileage: " << f2.mileage << endl;
    cout << "Seater: " << f2.seater << endl;
    return 0;
}
```

O/P:

![image](https://github.com/user-attachments/assets/310c5787-bd7d-4ac8-bdd2-bf4247b44f32)

4. Hierarchical Inheritance
```
#include <iostream>
#include <string>
using namespace std;

class Forest {
public:
    string type = "evergreen";

    void trunk() {
        cout << "Trunk color: brown" << endl;
    }
};
class Tree : public Forest {
public:
    void type() {  
        cout << "Tree type: conifer" << endl;
    }
};
class Trunk : public Forest {
public:
    void part() {
        cout << "Trunk part: thick" << endl;
    }
};
int main() {
    Trunk t;
    t.trunk(); 
    cout << "Forest type: " << t.type << endl;  
    t.part();  
    Tree t1;
    Trunk t2;
    t1.trunk();  
    t1.type();   
    t2.trunk(); 
    t2.part();  
    return 0;
}
```

O/P:

![image](https://github.com/user-attachments/assets/ac506065-b9d9-4374-950e-e4dc93323cd5)

 
# Conclusion
The code snippets illustrate key object-oriented programming (OOP) concepts in C++, including inheritance (single, multilevel, multiple) and method overriding.

They show how classes inherit properties and behaviors from parent classes to reuse and extend functionality. Single inheritance involves a class inheriting from one parent, multilevel inheritance involves a chain of inheritance, and multiple inheritance allows a class to inherit from multiple parents. Method overriding provides specific implementations for inherited methods, demonstrating polymorphism.

Overall, these examples highlight how inheritance and method overriding in C++ enhance code reuse, flexibility, and modular design—core principles of OOP.
