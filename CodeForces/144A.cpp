#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s[100];
    int a;
    cin>>a;
    int m,n;
    for(int i = 0; i < a; i++){
        cin>>s[i];
    }
    int b=101,v=0;
    for(int i = 0; i < a; i++){
        if(s[i] > v){
            v = s[i];
            m = i;
        }
    }

    for(int i = 0; i < a; i++){
        if(s[i]<=b){
            b = s[i];
            n = i;
        }
    }
    if(m>n){
        n++;
    }
    cout<<m+(a-1)-n;

}
