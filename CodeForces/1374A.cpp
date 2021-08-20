#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
            long long int a,b,c;
    cin>>a>>b>>c;
    long long int x = (c-b)/a;
    long long int y =  x*a+b;
    cout<<y<<endl;
    }
}
