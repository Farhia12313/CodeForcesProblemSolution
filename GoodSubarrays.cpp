#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    map<long long, long long>counts;
    counts[0]=1;
    long long current_pref_sum =0;
    long long good_subarray = 0;
    for(int i=0;i<n;i++){
        int val = s[i]-'0';
        current_pref_sum+=(val-1);
        good_subarray+=counts[current_pref_sum];
        counts[current_pref_sum]++;
    } 
    cout << good_subarray << endl;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
