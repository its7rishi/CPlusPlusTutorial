//POLYMORPHISM

//Occurs when we have many classes related to each other by inheritance
//Inheritance inherits attributes and methods from base class
// Polymorphism uses those methods to perform a single action in different ways

#include <iostream>
using namespace std;

class Animal {
    public:
        void animalSound() {
            cout << "The animal makes a sound\n";
        }
};

class Pig: public Animal {
    public:
        void animalSound() {
            cout << "Pig says: Oink Oink!!\n";
        }
};

class Horse: public Animal {
    public:
        void animalSound() {
            cout << "Horse says: Neigh Neigh!!\n";
        }
};

class Dog: public Animal {
    public:
        void animalSound() {
            cout << "Dog says: Woof Woof!\n";
        }
};

int main() {
    Animal myAnimal;
    Pig myPig;
    Horse myHorse;
    Dog myDog;

    myAnimal.animalSound();
    myPig.animalSound();
    myHorse.animalSound();
    myDog.animalSound();

    return 0;
}
