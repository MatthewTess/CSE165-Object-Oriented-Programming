#include <iostream>
#include <string>
using namespace std;

class Pet {
    string pname;
public:
    Pet(const string& petName);
    virtual string name() = 0;
    virtual string speak() = 0;
    virtual ~Pet();
};

Pet::Pet(const string& petName) : pname(petName) {}

string Pet::name() { return pname; }

Pet::~Pet() {}

class Dog : public Pet {
public:
    Dog(const string& petName);
    virtual string sit();
    string speak();
    string name();
    ~Dog();
};

Dog::Dog(const string& petName) : Pet(petName) {}

string Dog::sit() { return Pet::name() + " sits"; }

string Dog::speak() { return Pet::name() + " says 'Bark!'"; }

string Dog::name() { return Pet::name(); }

Dog::~Dog() {}

int main() {
    Pet* p = new Dog("Carl");
    cout << p->speak();
    delete p;

    return 0;
}
