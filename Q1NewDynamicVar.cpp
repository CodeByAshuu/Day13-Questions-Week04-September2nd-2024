#include <iostream>
using namespace std;

int main() {
    int *ptr = new int;

    *ptr = 42;

    cout << "Value stored at dynamically allocated memory: " << *ptr << endl;
    cout << "Address of dynamically allocated memory: " << ptr << endl;

    delete ptr;

    return 0;
}
