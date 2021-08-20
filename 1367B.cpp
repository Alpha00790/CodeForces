#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    int arr[n];
    int e = 0, o = 0, f = 0;
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    for(int i = 0; i < n; i++){
        if(i%2 == 0){
            if(arr[i] %2==0){
                f++;
            }
            else{
                e++;
            }
        }
        else{
            if(arr[i]%2==1){
                f++;
            }
            else{
                o++;
            }
        }
    }
        if(f == n){
        cout<<0<<endl;
    }
    else if(e == o){
        cout<<o<<endl;
    }
    else{
        cout<<-1<<endl;
    }
    }



}

