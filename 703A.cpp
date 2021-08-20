#include<bits/stdc++.h>
using namespace std;
int t, n, m, mis, cri;
int main() {
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n >> m;
        if (n > m) {
            mis++;
        } else if(n < m) {
            cri++;
        }
    }
    if (mis > cri) {
        cout << "Mishka";
    } else if (cri > mis) {
        cout << "Chris";
    } else {
        cout << "Friendship is magic!^^";
    }
}
