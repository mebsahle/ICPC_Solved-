#include<bits/stdc++.h>
using namespace std;
int main()
{
    //char numi[]={'A','K','Q','J','T','9','8','7'};
    int d[]={11,4,3,20,10,14,0,0};
    int nd[]={11,4,3,2,10,0,0,0};
    int n; char b, s, num;
    cin >> n >> b;
    int sum = 0;
    for(int i = 0; i < 4*n; i++){
        cin >> num >> s;
        if(s==b){
            if(num == 'A') sum+=d[0];  if(num == 'K') sum+=d[1];
            if(num == 'Q') sum+=d[2];  if(num == 'J') sum+=d[3];
            if(num == 'T') sum+=d[4];  if(num == '9') sum+=d[5];
            if(num == '8') sum+=d[6];  if(num == '7') sum+=d[7];
        }else{
            if(num == 'A') sum+=nd[0];  if(num == 'K') sum+=nd[1];
            if(num == 'Q') sum+=nd[2];  if(num == 'J') sum+=nd[3];
            if(num == 'T') sum+=nd[4];  if(num == '9') sum+=nd[5];
            if(num == '8') sum+=nd[6];  if(num == '7') sum+=nd[7];
        }

    }cout << sum << endl;
    return 0;
}
