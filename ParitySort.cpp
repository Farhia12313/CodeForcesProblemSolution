#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cout << "enter t:" << endl;
    cin >>t;
    while(t--){
        int n;
        cin >> n;
        vector<long long>a(n),b;
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        b=a;
        sort(b.begin(),b.end());
        bool ok = true;
        for(int i = 0; i<n;i++){
            if((a[i]%2)!=(b[i]%2)){
                ok = false;
                break;
            }
        }
        if(ok)cout <<"Yes\n";
        else cout << " No\n";
        
    }
    return 0;
}