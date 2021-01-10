#include <iostream>

using namespace std;
string inv(string ss)
{
int k=ss.length();
string sss;
for (int i=0;i<k/2;i++)
{
    sss=ss[k-i-1];
    ss[k-i-1]=ss[i];
      ss[i]=sss[0];

}
return ss;
}
int main()
{
    string s;
    cin>>s;
string y,x;
y=inv(s);
if(y==s)
{
    cout<<s.length();
}
else if(y!=s)
{
    int l=s.length();
    for (int j=0;j<l;j++)
    {
        s[l]=s[j];
        y=inv(s);
        x=s;
        if(s==y)
        {
           cout<<s.length();
           break;
        }
        else if(y!=s)
        {
            for (int j=x.length();j>l;j++)
            {
                s[j]=s[j-l-1];
                cout<<s;
            }
        }
    }
}


  return 0;
}
