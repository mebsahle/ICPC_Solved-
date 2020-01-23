#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    int s;
    for(int i = 0; i < tc; i++)
    {
        cin >> s;
        double sum = 0, m[1005];
        double av2;
        for(int j = 0; j < s; j++)
        {
            cin >> m[j];
            sum+=m[j];
        }
        //cout << sum <<" ";
        double av = sum/s;
        //cout << av <<" ";
        double sum2;
        sum2 = 0;
        for(int k = 0; k < s; k++)
        {
            if(m[k]>av)
            {
                sum2++;
            }
        }
        cout <<fixed;
        cout <<setprecision(3)<<100*sum2/s<<"%\n";
    }
    return 0;
}
