#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b;
    int c;
    cin>>c;
    for(int i = 0; i<c; i++){
        cin>>a>>b;
        if(a<b){
            cout<<b-a<<endl;
        }
        else if(a%b == 0){
            cout<<0<<endl;
        }
       else if(a%b != 0){
            cout<<b-a%b<<endl;
        }
    }
}