#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l;
    cin>>l;
    string s;
    cin>>s;
    int a = 0, d = 0;
    for(int i = 0; i < l; i++)
    {
        if(s[i] == 'A')
        {
            a++;
        }
        else if(s[i] == 'D')
        {
            d++;
        }
    }
    if(a>d){
        cout<<"Anton";
    }
    else if(d>a){
        cout<<"Danik";
    }
    else{
        cout<<"Friendship";
    }
}

