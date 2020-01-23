#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c; while(cin >> a >> b >>c){
    if(a + b == c){
        cout << a << "+" << b << "=" << c << endl;
    }
    if(a - b == c){
        cout << a << "-" << b << "=" << c << endl;
    }
    if(a * b == c){
        cout << a << "*" << b << "=" << c << endl;
    }
    if(a / b == c && a%c == 0){
        cout << a << "/" << b << "=" << c << endl;
    }
    if(a == b + c){
        cout << a << "=" << b << "+" << c << endl;
    }
    if(a == b - c){
        cout << a << "=" << b << "-" << c << endl;
    }
    if(a == b * c){
        cout << a << "=" << b << "*" << c << endl;
    }
    if(a == b / c || b%c == 0){
        cout << a << "=" << b << "/" << c << endl;
    }
    }
    return 0;
}
