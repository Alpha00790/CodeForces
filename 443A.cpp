#include<bits/stdc++.h>
using namespace std;
int main()
{
    int alphabets = 0;
    string s;
    getline(cin,s);

    sort(s.begin(),s.end());

    // cout<<s.length();
    for(int i = 0; i < s.length()-1; i++){
        if (s[i] == ' ' || s[i] == ',' || s[i] == '{' || s[i] == '}'){
            continue;
        }
        else{
            if(s[i] != s[i+1]){
                alphabets++;
            }
        }
    }
    cout<<alphabets;
}
