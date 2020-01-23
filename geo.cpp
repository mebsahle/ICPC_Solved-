#include<bits/stdc++.h>
using namespace std;
typedef double T;
struct pt{
    T x,y;
    friend ostream & operator << (ostream & os, const pt p)
	{   os << p.x << "," << p.y;
	    return os;
	}

    };

pt oper(const pt& a, const pt& b){
    pt vec;
    vec.x = a.x + b.x;
    vec.y = a.y + b.y;
    return vec;
}

int main()
{
    pt p1,p2;
    pt vec;

    cin >> p1.x >> p1.y;
    cin >> p2.x >> p2.y;
    vec = oper(p1, p2);
    cout << vec;

    return 0;
}
