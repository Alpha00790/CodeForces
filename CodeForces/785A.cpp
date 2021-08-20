#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x=0;
    string s;
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>s;
        if(s[0] == 'T' ){
            x = x+4;
        }
        if(s[0] == 'C'){
            x = x+6;
        }
        if(s[0] == 'O'){
            x = x+8;
        }
        if(s[0] == 'D'){
            x = x+12;
        }
        if(s[0] == 'I'){
            x = x+20;
        }
    }
    cout<<x;
}
