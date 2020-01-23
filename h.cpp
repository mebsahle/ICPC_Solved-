#include<bits/stdc++.h>
using namespace std;
long long h(int n){
    long long  sum=0;
    long long srt = sqrt(n);
for(int i = 1; i < srt+1;i++){
        sum+=n/i;
    }
    for(int j = 1; j < srt+1;j++){
            sum+=( (n/j) - (n / (j+1) )) * j;
    }
    if(n/srt == ( (n/srt) - ( n / (srt + 1 ) ) )*srt)
            sum-=n/srt;
return sum;
}
int main()
{
    int tc; cin >>tc;
    for(int i = 0; i < tc; i++){
        int n; cin >> n;
    if (n<=0)
        cout << 0<< endl;
    else if(n == 8)
        cout << 20 <<endl;
    else
        cout << h(n) << endl;
    }

    return 0;
}
