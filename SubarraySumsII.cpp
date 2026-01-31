#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    long long x;
    cin >> n >> x;
    vector<int>a(n);
    for(int i = 0;i<n;i++){
        cin >> a[i];
    }
    map<long long ,int>counts;
    counts[0]=1;
    long long current_sum=0;
    long long ans = 0;
    for(int i = 0;i<n;i++){
        current_sum+=a[i];
        ans+=counts[current_sum-x];
        counts[current_sum]++;
    }
    cout << ans <<"\n";
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}