#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, x = 0;
    cin>>a;
    int arr[a];
    for(int i = 0; i < a; i++)
    {
        cin>>arr[i];
    }
    int m = arr[0], n = arr[0];
    for(int i = 1; i < a; i++){
        if(arr[i]>m){
            //cout<<arr[i]<<"fuck"<<endl;
            m = arr[i];
            x++;
        }
        if(arr[i]<n){
           // cout<<arr[i]<<"suck"<<endl;
            n = arr[i];
            x++;
        }
    }

    cout<<x;
}
