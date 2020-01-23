#include<bits/stdc++.h>
using namespace std;
set<int>s;
int main()
{
    int tc = 10;
    int n,c = 0;
    while(tc--){
        cin >> n;
        s.insert(n%42);
    }//for(auto u:s){cout << u << "\n";}
    cout << s.size() <<endl;
    return 0;
}
