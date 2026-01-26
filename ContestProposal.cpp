#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
     int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for(int i=0; i<n; ++i) cin >> a[i];
        for(int i=0; i<n; ++i) cin >> b[i];

        int ans = 0;
        for(int i = 0; i < n; i++) {
            if(a[ans] <= b[i]) {
                ans++; 
            }
        }
        cout << n - ans << endl;
    }
    return 0;
}