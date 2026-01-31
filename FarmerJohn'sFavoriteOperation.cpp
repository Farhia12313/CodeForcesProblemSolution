#include<bits/stdc++.h>
using namespace std;
long long solve(){
    int n;
    long long m;
    cin >> n >> m;
    vector < long long >r(n);
    for(int i = 0; i<n;i++){
        long long a;
        cin >> a;
        r[i] = a % m;
    }
    sort(r.begin(),r.end());
    vector<long long>b;
    for(int i=0;i<n;i++)b.push_back(r[i]);
    for(int i=0;i<n;i++)b.push_back(r[i]+m);
    vector<long long>pref(2*n+1,0);
    for(int i=0;i<2*n;i++){
        pref[i+1]=pref[i]+b[i];
    }
    auto get_sum=[&](int l,int r){
        return pref[r+1]-pref[l];
    };
    long long min_boredom = -1;
    for(int i=0;i<n;i++){
        int l=i;
        int r = i+n-1;
        int mid_idx = l+n/2;
        long long median = b[mid_idx];
        long long left_count = mid_idx - l;
        long long right_count = r - mid_idx;
        
        long long current_cost = (median * left_count - get_sum(l, mid_idx - 1)) +
                                 (get_sum(mid_idx + 1, r) - median * right_count);

        if (min_boredom == -1 || current_cost < min_boredom) {
            min_boredom = current_cost;
        }
    }

    return min_boredom;

    }

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        cout << solve() << "\n";
    }
    return 0;

}