#include<bits/stdc++.h>
using namespace std;
    const int maxn = 100005;
    int pref1[maxn],pref2[maxn],pref3[maxn];
    int main(){
        freopen("bcount.in","r",stdin);
        freopen("bcount.out","w",stdout);    
        ios::sync_with_stdio(0);
        cin.tie(0);
        int n,q;
        if(!(cin >> n >> q)) return 0;
        for(int i=1;i<=n;i++){
            int breed;
            cin >> breed;
            pref1[i] = pref1[i - 1];
            pref2[i] = pref2[i - 1];
            pref3[i] = pref3[i - 1];
            if(breed == 1) pref1[i]++;
            else if(breed == 2) pref2[i]++;
            else if(breed == 3) pref3[i]++;
        }
        for(int i = 0;i<q;i++){
            int a,b;
            cin >> a >> b;
            int count1 = pref1[b] - pref1[a - 1]; 
            int count2 = pref2[b] - pref2[a - 1]; 
            int count3 = pref3[b] - pref3[a - 1]; 
            cout << count1 << " " << count2 <<" "<<count3 <<"\n";
        }
           return 0;
    }
