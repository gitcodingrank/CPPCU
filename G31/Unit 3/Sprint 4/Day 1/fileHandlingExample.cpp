#include <iostream>
using namespace std;

class A {
public:
    int value;

    A(int v) : value(v) {}

    // Pre-increment
    A operator++() {
        value++;
        return *this;
    }

    // Post-increment
    A operator++(int) {
        A temp = *this;
        value++;
        return temp;
    }
    
};

// Overload << operator for printing
ostream& operator<<(ostream& os, const A& a) {
    os << a.value;
    return os;
}

A operator +(A& a1, A& a2){
    return A(a1.value + a2.value);
}

int main() {
    A a1(50);
    cout << a1++ << endl;  // Should print 50
   // cout << a1 << endl;    // Should print 51 after post-increment
    cout << ++a1 << endl;  // Should print 52 after pre-increment

    cout << (a1 + a1) <<endl;
}
