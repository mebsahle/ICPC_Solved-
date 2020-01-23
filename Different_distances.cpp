#include<bits/stdc++.h>
using namespace std;
int main()
{
    double xi,xf,yi,yf,p;
    while(cin >> xi&& xi != 0)
    {
        cin >> yi >> xf >> yf >> p;
        double f = pow(abs(xi-xf),p) + pow(abs(yi-yf),p);
        //cout << f <<" ";
        double d = pow(f,(1/p));
        cout << fixed;
        cout <<setprecision(10)<< d <<endl;
    }
    return 0;
}
