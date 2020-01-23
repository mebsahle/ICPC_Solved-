#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>matrix;

vector<string>split(string st, char ch){
    vector<string>word_list;
    string word = "";
    for(int i = 0; i < st.length(); i++){
        if(st[i] == ch){
            if(!word.empty()){
                word_list.push_back(word);
            }
            word = "";
        }else{
            word+=st[i];
        }
    }
    word_list.push_back(word);
    return word_list;
}

int main()
{
   /* string s; getline(cin, s);
    vector<string>ls = split(s,' ');
    for(auto u : ls) cout << u << " " <<endl;
  /*  for(int i = 0; i < 3; i++){
        vector<int>ln;
        int x;
    for(int j = 0; j < 3; j++){
      cin >> x;
      ln.push_back(x);
    }
    matrix.push_back(ln);
}
for(auto u:matrix){
    for(auto v: u){
        cout << v << " ";
    }
    cout << "\n";
}
*/
    return 0;
}
