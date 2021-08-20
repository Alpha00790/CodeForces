#include<bits/stdc++.h>
using namespace std;
int main()
{
    string f,s;
    cin>>f>>s;
    reverse(s.begin(),s.end());
    if(f == s){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}
