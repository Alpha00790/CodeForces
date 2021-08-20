#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    string result;
    cin>>s;
    int hash[123] = {0};
    for(int i = 0; i <s.length(); i++)
    {
        if(hash[s[i]]==0)
        {
            hash[s[i]] = 1;
            result = result + s[i];
        }
    }
    if(result.length()%2!=0){
        cout<<"IGNORE HIM!";
    }
    else{
        cout<<"CHAT WITH HER!";
    }
}
