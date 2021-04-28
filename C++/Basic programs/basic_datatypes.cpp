#include <iostream>
#include <cstdio>
#include<iomanip>
using namespace std;

int main() {
    // Complete the code.
    
    int a;
    long l;
    char ch;
    float f;
    double d;
    cin >> a;
    cin >> l;
    cin >> ch;
    cin >> f;
    cin >> d;
    
    cout << a << endl;
    cout << l << endl;
    cout << ch << endl;
    cout << fixed << setprecision(3) << f << endl;
    cout << fixed << setprecision(9) << d << endl;    
    
    return 0;
}
