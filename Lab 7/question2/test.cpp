#include <iostream>
using namespace std;

class mySimpleClass {
public:
    mySimpleClass(int x = 0) : x(x) {}

    mySimpleClass operator+(const mySimpleClass& rhs);
    mySimpleClass operator*(const mySimpleClass& rhs);
    void print(ostream& out);
private:
    int x;
};

mySimpleClass mySimpleClass::operator+(const mySimpleClass& rhs) {
    return mySimpleClass(x + rhs.x);
}

mySimpleClass mySimpleClass::operator*(const mySimpleClass& rhs) {
    return mySimpleClass(x * rhs.x);
}

void mySimpleClass::print(ostream& out) {
    out << x << endl;
}

int main(){
    mySimpleClass a(1), b(2), c;
    c = a * a + b * b;
    c.print(cout);
    
    return 0;
}
