#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<long long>a(n);
    for(int i=0;i<n;i++)cin >> a[i];
    reverse(a.begin(),a.end());
    vector<long long>pref;
    pref.push_back(0);
    for(long long x : a){
        pref.push_back(pref.back() + x);
    }
    int q;
    cin >> q;
    while(q--){
        int type;
        cin >> type;
        if(type == 1){
            int l,r;
            cin >> l >> r;
            int current_size = pref.size()-1;
            int new_l = current_size - r + 1;       
             int new_r = current_size - l + 1; 
             cout << pref[new_r] - pref[new_l - 1] << "\n";      
        }
        else{
            long long x;
            cin >> x;
            pref.push_back(pref.back() + x);
        }
        }
          return 0;
    }
  
