#include<bits/stdc++.h>
using namespace std;
int main()
{
    string word1,word2;
    cin>>word1>>word2;
    transform(word1.begin(),word1.end(),word1.begin(),::toupper);

    transform(word2.begin(),word2.end(),word2.begin(),::toupper);

    if(word1==word2){
        cout<<0;
    }
    else{
        for(int i=0;i<word1.length();i++){
            if(word1[i]<word2[i]){
                cout<<-1;
                return 0;
            }
            if(word1[i]>word2[i]){
                cout<<1;
                return 0;
            }
        }
    }
}
