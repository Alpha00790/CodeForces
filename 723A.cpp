#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n[3];
    for(int i = 0; i<3; i++){
        cin>>n[i];
    }
    sort(n,n+3);
    int x = abs(n[1]-n[0])+abs(n[1]-n[2]);
    cout<<x<<endl;
}