#include <iostream>
using namespace std;

class Example {
public:
    static int count;
    Example() {
        count++;
    }
    static void showCount() {
        cout << "Count: " << count << endl;
    }
};

int Example::count = 0;

int main() {
    Example obj1, obj2, obj3;
    Example::showCount(); // Output: Count: 3
    return 0;
}