#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<long long>prefix(n+1,0);
    for(int i=1;i<=n;i++){
        int val;
        cin >> val;
        prefix[i]=prefix[i-1]+ val;

    }
    int que;
    cin >> que;
    while(que--){
        int l,r;
        cin >> l >> r;
        cout<<prefix[r+1]-prefix[l]<<"\n";
    }
return 0;
}