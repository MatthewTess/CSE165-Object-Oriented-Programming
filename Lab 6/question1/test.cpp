
#include <iostream>
using namespace std;

class MyClass {
    const float f1;
    float f2;
public:
    MyClass() : f1(0.0), f2(0.0) {}
    MyClass(float f1, float f2) : f1(f1), f2(f2) {}
};

int main(){
    MyClass mc(1.5, 2.3);
    
    return 0;
}


