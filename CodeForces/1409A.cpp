#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int a,b;
        cin>>a>>b;
        long long x = abs(a-b);
        cout<<x/10+(x%10!=0)<<endl;
    }
}
