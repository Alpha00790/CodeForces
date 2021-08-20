#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--){
            int n,c = 0;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    sort(arr, arr + n);
        for(int j = 0; j<n-1; j++){
            {
               if(arr[j]-arr[j+1] == 0 || arr[j]-arr[j+1] == -1){
                c++;
               }
               else{
                c--;
               }
            }
        }

        if(c == n-1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }


}
