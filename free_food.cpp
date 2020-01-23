#include<bits/stdc++.h>
using namespace std;
set<int>s;
int main()
{
    int no; cin >> no;
    int si, sf;
    for(int i = 0; i < no; i++){
        cin >> si >> sf;
        for(int d = si; d <= sf; d++){
            s.insert(d);
        }
    }
        cout << s.size() <<" ";
    return 0;
}
