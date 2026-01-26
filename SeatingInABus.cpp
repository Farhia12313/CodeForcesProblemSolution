#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    int min_seat = v[0];
    int max_seat = v[0];
    bool possible = true;
    for(int i = 1; i< n;i++){
        if(v[i]==min_seat - 1){
            min_seat = v[i];
        }
        else if(v[i]==max_seat +1){
            max_seat = v[i];
        }
        else{
            possible = false;
            break;}
    }
    if(possible)cout <<"Yes"<< endl;
    else cout <<"NO"<< endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    //cout <<"enter t:"<<endl;
    cin >>t;
    while(t--){
        solve();
    }
    return 0;
}