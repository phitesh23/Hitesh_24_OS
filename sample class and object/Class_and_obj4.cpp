#include <iostream>
using namespace std;

class Animal {
public:
    void speak() {
        cout << "Animal speaks!" << endl;
    }
};

class Dog : public Animal {
public:
    void speak() {
        cout << "Dog barks!" << endl;
    }
};

int main() {
    Dog dog;
    dog.speak(); // Output: Dog barks!
    return 0;
}