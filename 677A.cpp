#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, h,one=0, two = 0;
    cin>>n>>h;
    int p[n];
    for(int i = 0; i < n; i++)
    {
        cin>>p[i];
    }
    for(int i=0; i<n; i++){
        if(p[i]>h){
            two +=2;
        }
        else if(p[i]<h){
            one+=1;
        }
        else{
            one+=1;
        }
    }
    cout<<one+two;
}
