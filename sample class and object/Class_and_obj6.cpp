#include <iostream>
using namespace std;

class MathOperations {
public:
    int add(int a, int b) {
        return a + b;
    }
    double add(double a, double b) {
        return a + b;
    }
};

int main() {
    MathOperations obj;
    cout << "Integer Addition: " << obj.add(5, 3) << endl;
    cout << "Double Addition: " << obj.add(5.5, 3.3) << endl;
    return 0;
}
