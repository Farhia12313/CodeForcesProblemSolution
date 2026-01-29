#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin >> s;
    int n = s.length();
    vector<vector<int>> pref(26,vector<int>(n+1,0));
    for(int i=0;i<n;++i){
        int char_idx = s[i]-'a';
        for(int c=0;c<26;++c){
            pref[c][i+1]=pref[c][i];
        }
        pref[char_idx][i+1]++;
    }
    int q;
    cin >> q;
    while(q--){
        int l,r;
        cin >> l >> r;
        if(l == r){
            cout <<"Yes\n";
            continue;
        }
        else if(s[l-1]!= s[r-1]){
            cout << "Yes\n";
            continue;
        }
        int distinct_count = 0;
        for(int c=0;c<26;++c){
             if(pref[c][r]-pref[c][l-1]>0){
                distinct_count++;
             }
        }
        if(distinct_count >= 3){
            cout << "Yes\n";

        }
        else{
            cout <<"No\n";
        }
    }
    return 0;
}
