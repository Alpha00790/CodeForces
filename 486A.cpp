#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int a;
    cin>>a;
    if(a%2 != 0){
        a = a*(-1);
        cout<<(-1+a)/2;
    }
    else{
        cout<<(1+a)/2;
    }
}
