#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int n;
    cin >> n;
    vector<ll>count(n,0);
    count[0] = 1;
    ll current_sum = 0;
    ll result = 0;
    for(int i=0;i<n;i++){
        int a;
        cin >> a;
        current_sum += a;
        int remainder = ((current_sum % n) + n)% n;
        result += count[remainder];
        count[remainder]++;
    }
    cout << result << "\n";
    return 0;
}