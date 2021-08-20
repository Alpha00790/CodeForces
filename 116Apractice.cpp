#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,a[1000],b[1000],ans,i,k,maxx=0;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d%d",&a[i],&b[i]);
    }
    k=a[0];
    for(i=0; i<n; i++)
    {
        ans=b[i]-a[i]+k;
        cout<<b[i] - a[i]<<" "<<"K = "<<k<<endl;
        k=ans;
        cout<<"Ans:"<<ans<<endl;
        if(ans>maxx)
            maxx=ans;
    }
    printf("%d\n",maxx);
    return 0;
}

