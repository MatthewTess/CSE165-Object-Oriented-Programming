
#include <iostream>

using namespace std;
template <class T>
T fibonacci(T n){
    // from textbook fibonacci.cpp
    const int sz = 100;
    static T f[sz]; // initizaling the to 0
    f[0] = f[1] = 1;
    // Scan for unfilled array elements:
    int i;
    for(i = 0; i < sz; i++)
        if(f[i] == 0) break;
    while(i <= n){
        f[i] = f[i-1] + f[i-2];
        i++;
    }
    return f[n];
}

int main(){
    cout << fibonacci(90) << endl;
    return 0;
}