#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,p,cnt;
    while(cin >> n)
    {
        if(n==1)
            cout <<"Stan Wins.\n";
        else if(n%2==0)
        {
            for(int i = 2; i <= 9; i++)
            {
                p = 1;
                cnt = 0;
                while(p>=n)
                {
                    cnt++;
                    p*=i;
                }
            }
            if(cnt%3==0)
                cout << "Stan Wins.\n";
            else
                cout << "Ollie Wins.\n";
        }
        else if(n&1)
        {
            for(int i = 2; i <= 9; i++)
            {
                p = 1;
                cnt = 0;
                while(p>=n)
                {
                    cnt++;
                    p*=i;
                }
            }
            if(cnt%2==0)
                cout << "Ollie Wins.\n";
            else
                cout << "Stan Wins.\n";
        }
    }
    return 0;
}
