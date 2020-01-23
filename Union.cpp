#include<bits/stdc++.h>
using namespace std;
set<int>s;
int parent[1005], _size[1005];
void make_set(int v)
{
    for(int i = 1; i < v+1; i ++){
            parent[i] = i; _size[i] = 1;
            //cout << i << " " << parent[i] <<endl;
    }
}

int find_set(int i)
{
 while(i != parent[i]) i = parent[i];
 return i;
}

void union_set(int i, int j)
{
 int a = find_set(i); int b = find_set(j);
 if(_size[a] < _size[b]) swap(a, b);
 if(a == 1 ){
    parent[b] = a;
 } else if (b == 1) {
    parent[a] = b;
 } else {
    // cout << a << b << " ";
     parent[a] = b;
     //cout << parent[a] <<" " <<parent[b]<<endl;
     _size[a] += _size[b];
 }
}

int main()
{
    int house, num_conn;
    cin >> house >> num_conn;
    make_set(house);
    int a,b;
    for(int i = 0; i < num_conn; i++){
        cin >> a >> b;
        union_set(a,b);
         //cout << i << " ";
    }

    for(int i = 1; i < house+1; i++){
        cout << parent[i] << " ";
        s.insert(parent[i]);
    }
    cout << endl;
    if(s.size() == 1){
        cout << "connected" <<endl;
    }else{
        for(int i = 1; i < house + 1; i++){
            if(parent[i] != 1){
            cout << i << endl;
            }
        }
    }
    return 0;
}
