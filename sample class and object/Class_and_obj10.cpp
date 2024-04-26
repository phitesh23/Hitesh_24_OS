#include <iostream>
using namespace std;

class Outer {
private:
    int outer_value;
public:
    class Inner {
    private:
        int inner_value;
    public:
        void setInnerValue(int value) {
            inner_value = value;
        }
        int getInnerValue() {
            return inner_value;
        }
    };
    void setOuterValue(int value) {
        outer_value = value;
    }
    int getOuterValue() {
        return outer_value;
    }
};

int main() {
    Outer obj;
    Outer::Inner innerObj;
    obj.setOuterValue(10);
    innerObj.setInnerValue(20);
    cout << "Outer Value: " << obj.getOuterValue() << endl;
    cout << "Inner Value: " << innerObj.getInnerValue() << endl;
    return 0;
}