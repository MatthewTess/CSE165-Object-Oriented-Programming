

#include <iostream>
using namespace std;

class mySimpleClass {
public:
    mySimpleClass(int x = 0) : x(x) {}

    mySimpleClass operator+(const mySimpleClass& rhs) {
        return mySimpleClass(x + rhs.x);
    }

    mySimpleClass operator*(const mySimpleClass& rhs) {
        return mySimpleClass(x * rhs.x);
    }

    void print(ostream& out) {
        out << x << endl;
    }
private:
    int x;
};

int main(){
    mySimpleClass a(1), b(2), c;
    c = a * a + b * b;
    c.print(cout);
    
    return 0;
}