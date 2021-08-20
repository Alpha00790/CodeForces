#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
            string s;
    cin>>s;
    int l = s.length();
    cout<<s[0];
    for(int i = 1; i<l; i+=2){
          cout<<s[i];
    }
    cout<<endl;
    }
}
