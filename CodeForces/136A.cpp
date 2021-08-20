#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int friends[n];
    int gifts[n];
    for(int i = 1; i <= n; i++)
    {
        cin>>friends[i];
        gifts[friends[i]]=i;
    }
    for(int i = 1; i <= n; i++)
    {
        cout<<gifts[i]<<" "; 
    }
}