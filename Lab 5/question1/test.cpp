#include <iostream>
using namespace std;

class Counted {
    int id;
    static int count;
public:
    Counted();
    ~Counted();
};

int Counted::count = 0;

Counted::Counted() : id(count++) { 
    cout << "An object is being created, id: " << id << endl; 
}

Counted::~Counted() { 
    cout << "The created object is being destroyed, id: " << id << endl; 
}

int main() {
    Counted obj1, obj2;
    return 0;
}
