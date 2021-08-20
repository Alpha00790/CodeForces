#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,x=0;
    cin>>a;
    string s;
    cin>>s;
    for(int i = 0; i<a; i++){
        s[i] = tolower(s[i]);
    }
    sort(s.begin(),s.end());
    for(int i = 0; i<a; i++){
        if(s[i] != s[i+1]){
            x++;
        }
    }
    if(x == 26){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}

