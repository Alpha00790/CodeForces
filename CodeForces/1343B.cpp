#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int sumE = 0, sumO = 0;
        vector<int>A;
        A.push_back(2);
        if(n%2 == 0 && n%4 == 0){
            cout<<"Yes"<<endl;
                for(int i = 1; i<=n;i++){
                    if(i%2 == 0){
                        A.push_back(i);
                        sumE = sumE+i;
                    }
                }
                                for(int i = 1; i<=n;i++){
                    if(i%2 != 0){
                        A.push_back(i);
                        sumO = sumO+i;
                    }
                }
                int c = sumE-sumO;
                int x = A.back();
                A.back() = x+c;
                for(int i = 1; i<=n;i++){
                    cout<<A[i]<<" ";
                }
                cout<<endl;

        }
        else if(n%2 == 0){
            cout<<"NO"<<endl;
        }
    }
}
