#include <iostream>
using namespace std;

class Complex {
private:
    int real, imag;
public:
    Complex(int r = 0, int i = 0) : real(r), imag(i) {}
    Complex operator + (const Complex &obj) {
        Complex res;
        res.real = real + obj.real;
        res.imag = imag + obj.imag;
        return res;
    }
    void display() {
        cout << real << " + i" << imag << endl;
    }
};

int main() {
    Complex c1(3, 5), c2(2, 7);
    Complex sum = c1 + c2;
    sum.display();
    return 0;
}