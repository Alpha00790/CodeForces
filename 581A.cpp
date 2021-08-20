#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    if(a == b){
        cout<<a<<" "<<0;
    }
    else if(a<b){
        cout<<a<<" "<<((a+b)/2)-a;
    }
    else{
        cout<<b<<" "<<((a+b)/2)-b;
    }
}
