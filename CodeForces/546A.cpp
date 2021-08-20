#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,n,w,sum = 0;
    cin>>k>>n>>w;
    for(int i = 1; i<=w; i++){
        sum = sum+i;
    }
    int A =(k*sum)-n;
    if(A<0){
        cout<<0;
    }
    else{
        cout<<A;
    }
}
