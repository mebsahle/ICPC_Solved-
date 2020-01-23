#include<bits/stdc++.h>
using namespace std;
int dig(int n){
    int sum = 0;
    while(n>0){
        int d = n%10;
        sum+=d;
        n/=10;
    }
    return sum;
}
int main()
{
    int n;
    while(cin >> n && n!=0){
        int sum; sum = dig(n);//cout <<sum <<" ";
        int i = 11;
        int n_s = dig(n*i);
        while(sum!=n_s){
            i++;
            n_s = dig(n*i);
            //cout << n_s;
            //continue;
        }cout << i <<endl;
    }
    return 0;
}
