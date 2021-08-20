#include<bits/stdc++.h>
using namespace std;
int main()
{
    int f,a = 0;
    cin>>f;
    int x,y;
    cin>>x;
    int arr[200];
    for(int i = 0; i< x; i++)
    {
        cin>>arr[i];
    }
    cin>>y;
    for(int i = x; i<x+y; i++)
    {
        cin>>arr[i];
    }
    sort(arr, arr+(x+y));
    for(int i = 0; i < x+y; i++){
        if(arr[i] != arr[i+1])
        {
            a++;
        }
    }
    if (a == f){
        cout<<"I become the guy.";
    }
    else{
        cout<<"Oh, my keyboard!";
    }

}
