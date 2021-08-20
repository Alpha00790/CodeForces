#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n%2 == 0 && n%4 == 0){
            cout<<"Yes"<<endl;
        }
        else if(n%2 == 0){
            cout<<"NO"<<endl;
        }
    }
}