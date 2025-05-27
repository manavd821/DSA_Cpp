#include <iostream>
using namespace std;

class Parent {
public:
    void show() { // No virtual
        cout << "This is the Parent class" << endl;
    }
};

class Child : public Parent {
public:
    void show() { // Overriding
        cout << "This is the Child class" << endl;
    }
};

int main() {
    Parent* p;  // Parent class pointer
    Child c;
    p = &c;  // Pointing to Child object

    p->show();  // Calls Parent's function (Wrong output)
    return 0;
}
