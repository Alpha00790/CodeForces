#include<bits/stdc++.h>
using namespace std;
int main()
{
        int n;
        cin>>n;
        vector<int>e,o,A;
        A.push_back(2);
                for(int i = ; i<=n;i++){
                    if(i%2 == 0){
                        e.push_back(i);
                    }
                }
                                for(int i = 1; i<=n;i++){
                    if(i%2 != 0){
                        o.push_back(i);
                    }
                }
       merge(e.begin(), e.end(), o.begin(), o.end(), A.begin());
       for(int i = 0; i< A.size(); i++){
        cout<<A[i]<<" ";
       }


}

