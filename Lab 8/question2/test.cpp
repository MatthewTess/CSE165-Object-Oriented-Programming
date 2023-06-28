
#include <iostream>

class MyClass {
public:
    class MyException {
        const char* myString;
    public:
        MyException(const char* str) {myString = str;}
        void printException() {
            std::cout << myString << std::endl;
        }
    };
    
    void myFun() throw(MyException) {
        throw MyException("My Exception");
    }
};

int main(){
    MyClass myObj; // object creation
    try {
        myObj.myFun(); // calls myFun()
    }
    catch (MyClass::MyException& e){ // catch clause to call printException()
        e.printException();
    }
    return 0;
}
