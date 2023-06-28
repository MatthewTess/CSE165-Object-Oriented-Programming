
#include <iostream>
#include <cstring>
using namespace std;

class MyClass {
public:
    MyClass(char c = ' ') {
        memset(myArray, c, 100);
    }

    void print(char c) {
        for (int i = 0; i < 100; i++) {
            myArray[i] = c;
        }
        cout << myArray << endl;
    }
private:
    char myArray[100];
};

int main(){
    MyClass myObj;
    myObj.print('a');
    
    return 0;
}
