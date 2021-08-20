#include<bits/stdc++.h>
using namespace std;
int main()
{
    string b1,b2;
    cin>>b1>>b2;
    int l = b1.length();
    for(int i = 0; i < l; i++){
        if(b1[i] == '1' && b2[i] == '1')
        {
            cout<<"0";
        }
        else if(b1[i] == '1' && b2[i] == '0')
        {
            cout<<"1";
        }
        else if(b1[i] == '0' && b2[i] =='1')
        {
            cout<<"1";
        }
        else if(b1[i] == '0' && b2[i] == '0')
        {
            cout<<"0";
        }
    }
}
