#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
    int a,ans = 0;
    cin>>a;
    vector<int>arr1;
    vector<int>arr2;
    for(int i = 1; i < a; i++){
        if(i<a/2){
            arr1.push_back(pow(2,i));
        }
        else{
            arr2.push_back(pow(2,i));
        }
    }
    arr1.push_back(pow(2,a));
    cout<<accumulate(arr1.begin(),arr1.end(),0)-accumulate(arr2.begin(),arr2.end(),0)<<endl;
    }
}
