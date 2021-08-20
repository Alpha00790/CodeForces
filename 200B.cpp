#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    double n = 0;
    cin>>a;
    for(int i = 0; i<a; i++){
        double x;
        cin>>x;
        n = n+x;
    }
    cout<<setprecision(14)<<n/a;

}
