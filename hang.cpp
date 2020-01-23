#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l, d,e = 0,le = 0;
    cin >> l >> d;
    string cmd;
    int n, sum = 0, c = 0;
    for (int i = 0; i < d; i++){
        cin >> cmd >> n;
        if (cmd == "enter"){
            if(sum < l){
                sum+=n;
                e++;
            }
            else
                e++;
        }else{
            e--;
        }
    }
    cout << e;
    return 0;
}
