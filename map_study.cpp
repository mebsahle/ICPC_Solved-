#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int, int>n_map;
    for(int i = 1; i <= 10; i++){
        n_map[i] = 2*i;
    }
    n_map.insert({11,110});
    n_map.insert(make_pair(12,144));

    for(auto u: n_map){
        cout << u.first << " " << u.second << endl;
    }
    auto it = n_map.find(12);
    n_map.insert(it,{13,169});

    for(auto it = n_map.begin(); it != n_map.end(); ++it){
        cout << it->first <<" " << it->second << " ==> ";
    }cout << endl;
    n_map.erase(13);

    auto it1 = n_map.find(12);
    n_map.erase(it1);

    for(auto rit = n_map.rbegin(); rit!=n_map.rend(); ++rit){
        cout << rit-> first << " " << rit->second <<endl;
    }
//    if(n_map.contains(11))cout << "Found";
//    else{cout <<"Not Found";}
        cout << n_map.count(12);
    return 0;
}
