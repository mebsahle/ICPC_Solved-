#include<bits/stdc++.h>
using namespace std;
vector<int>v;
int main()
{
    int tc; cin >> tc;
    int n;
    bool flag = 1;
    for(int i = 0; i < tc; i++)
    {
        while(cin >> n && n!=0)
        {
            v.push_back(n);
        }
        int s = 0;
        //for(auto u : v) cout << u <<" ";
        for(int j = 0; j < v.size() - 1; j++)
        {
            if(v[j+1] > 2*v[j])
            {
                s+=v[j+1] - 2*v[j];
                /*flag = 1; cout <<"sum " << s << endl;
                if(s == 0 && v[j+1] <= 2*v[j])
                    flag = 0;*/
            }
        }
        cout << s << endl;
        v.clear();
    }
    return 0;
}
