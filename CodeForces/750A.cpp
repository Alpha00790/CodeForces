#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,i;
    cin>>a>>b;
    int n ,sum = 0,maxx;
    for( i = 0; i <= a; i++){
        sum = sum+(i*5);
        if(sum+b<=240){
            maxx = i;
        }
    }
    cout<<maxx;
}
