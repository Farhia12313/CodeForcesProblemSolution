#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >>n;
        int ar[n+3];
        for(int i=0;i<n;i++)cin >> ar[i];
        vector<int>v;
        int l=0;
        int r=n-1;
        while(l<r){
            v.push_back(ar[l]);
            v.push_back(ar[r]);
            l++;
            r--;
            
        }
        if(n % 2 == 1)v.push_back(ar[l]);
        for(int i=0;i<n;i++)cout << v[i] <<" ";
        cout << endl;
    }
    return 0;
}