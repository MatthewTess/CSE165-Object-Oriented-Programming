#include <iostream>
#include <vector>
using namespace std;

class Counted {
    int id;
    static int count;
public:
    Counted();
    ~Counted();
    friend ostream& operator<<(ostream& out, const Counted& obj);
};

int Counted::count = 0;

Counted::Counted() : id(count++) {
    cout << "An object is being created, id: " << id << endl;
}

Counted::~Counted() {
    cout << "The created object is being destroyed, id: " << id << endl;
}

ostream& operator<<(ostream& out, const Counted& obj) {
    out << obj.id;
    return out;
}

int main() {
    vector<Counted*> v;

    for (int i = 0; i < 10; i++)
        v.push_back(new Counted);

    cout << "Vector contains: ";
    for (int i = 0; i < v.size(); i++)
        cout << *v[i] << ' ';
    cout << endl;

    while (v.size() > 0) {
        Counted* temp = v.back();
        v.pop_back();
        delete temp;
    }
    return 0;
}
