#include<bits/stdc++.h>
using namespace std;
int main()
// {
//     string n1,n2,n3;
//     cin>>n1>>n2>>n3;
//     int l1,l2,l3;
//     l1 = n1.length();
//     l2 = n2.length();
//     l3 = n3.length();
//     if(l1+l2 == l3){
//         cout<<"YES";
//     }
//     else{
//         cout<<"NO";
//     }
// }
{
    string s1,s2,s3,a;
    cin>>s1>>s2>>s3;
    a = s1+s2;
 
    if(s1.length()+s2.length()>s3.length()){
        cout<<"NO";
        return 0;
    }
    if(s1.length()+s2.length()<s3.length()){
        cout<<"NO";
        return 0;
    }
    sort(a.begin(),a.end());
    sort(s3.begin(),s3.end());
    for(int i = 0; i<s3.length()-1; i++){
        if(s3[i] != a[i]){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
}