#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int t = 0;
    cin>>s;
    // if(s.length()==7)
    // {
    //     for(int i=0; i<s.length()-1;i++){
    //         if(s[i]=='7')
    //             t = 1;
    //     }
    //     if(t>0){
    //         cout<<"YES";
    //     }
    //     else{
    //         cout<<"NO";
    //     }
    // }
    // else if(s.length()==4)
    // {
    //             for(int i=0; i<s.length()-1;i++){
    //         if(s[i]=='4')
    //             t = 1;
    //     }
    //     if(t>0){
    //         cout<<"YES";
    //     }
    //     else{
    //         cout<<"NO";
    //     }
    // }
    // else{
    //     cout<<"NO";
    // }
    for(int i = 0; i<s.length(); i++)
    {
        if(s[i] == '4' || s[i] == '7'){
            t++;
        }
    }
    if(t == 4||t ==7){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}
