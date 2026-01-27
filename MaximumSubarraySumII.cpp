#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, a, b;
    if (!(cin >> n >> a >> b)) return 0;

    vector<long long> x(n + 1, 0);
    for (int i = 1; i <= n; i++) { // লুপ ১ থেকে শুরু
        long long val;
        cin >> val;
        x[i] = x[i - 1] + val;
    }

    multiset<long long> s;
    long long ans = -2e18;

    for (int i = a; i <= n; i++) {
        s.insert(x[i - a]);
        if (i > b) {
            s.erase(s.find(x[i - b - 1]));
        }
        ans = max(ans, x[i] - *s.begin());
    }

    cout << ans << "\n";
    return 0;
}