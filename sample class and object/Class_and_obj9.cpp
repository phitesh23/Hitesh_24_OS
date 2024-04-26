#include <iostream>
using namespace std;

class MyClass {
private:
    int secret_value;
public:
    MyClass(int value) : secret_value(value) {}
    friend void displaySecretValue(MyClass obj);
};

void displaySecretValue(MyClass obj) {
    cout << "Secret Value: " << obj.secret_value << endl;
}

int main() {
    MyClass obj(42);
    displaySecretValue(obj); // Output: Secret Value: 42
    return 0;
}