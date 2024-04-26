#include <iostream>
using namespace std;

class EncapsulationExample {
private:
    int secret_value;
public:
    void setSecretValue(int value) {
        secret_value = value;
    }
    int getSecretValue() {
        return secret_value;
    }
};

int main() {
    EncapsulationExample obj;
    obj.setSecretValue(42);
    cout << "Secret Value: " << obj.getSecretValue() << endl;
    return 0;
}