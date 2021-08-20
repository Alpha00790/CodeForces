#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s[4];
    int c = 0,d = 0, e = 0,f = 0;
    for(int i = 0; i<4; i++){
        cin>>s[i];
    }
    if(s[0] == s[1] || s[0] == s[2]){
        c++;
    }
     if(s[1] == s[2] || s[1] == s[3]){
        d++;
    }
     if(s[2] == s[3]){
        e++;
    }
     if(s[3] == s[0]){
        f++;
    }
    int x = c+d+e+f;
    if(x == 4){
        cout<<x-1;
    }
    else{
        cout<<x;
    }
}
