#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<char,int>m;
    string c;
    for(int i = 0; i < 5; i++){
        cin >> c;
        m[c[0]]++;
       //cout << c[0] <<" "<< m[c[0]]<< endl;
    }/*for(auto u:m){
        cout << u.first;
    }*/
    int maxi = 0;
    for(auto x: m){
         maxi = max(maxi,x.second);
    } cout << maxi<<endl;
    return 0;
}
