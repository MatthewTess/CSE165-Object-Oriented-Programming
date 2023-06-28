
#include <iostream>
#include "myHeader2.h"
using namespace std;

namespace Test = MyNamespace;

void test1(){
    Test::fun1();
    Test::fun2();
}

void test2(){
    using namespace Test;
    fun3();
    fun4();
}

int main(){
    test1();
    test2();
    return 0;
}

