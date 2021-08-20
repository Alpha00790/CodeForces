#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,a[1000],b[1000],ans,k,maxx=0;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a[i]>>b[i];
    }
    k=a[0];
    for(int i=0; i<n; i++)
    {
        ans=b[i]-a[i]+k;
       // cout<<b[i] - a[i]<<" "<<"K = "<<k<<endl;
        k=ans;
        //cout<<"Ans:"<<ans<<endl;
        if(ans>maxx)
            maxx=ans;
    }
    cout<<maxx;
    return 0;
}
