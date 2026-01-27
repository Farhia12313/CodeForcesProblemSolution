#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
     int N, M;
    cin >> N >> M;
  vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    vector<int> freq(N + 1, 0);
    set<int> missing;
    for (int i = 0; i <= N; i++) {
        missing.insert(i);
    }
    for (int i = 0; i < M; i++) {
        if (freq[A[i]] == 0)
            missing.erase(A[i]);
        freq[A[i]]++;
    }

    int answer = *missing.begin();
    for (int i = M; i < N; i++) {
        freq[A[i - M]]--;
        if (freq[A[i - M]] == 0)
            missing.insert(A[i - M]);
        if (freq[A[i]] == 0)
            missing.erase(A[i]);
        freq[A[i]]++;
        answer = min(answer, *missing.begin());
    }
    cout << answer << "\n";
    return 0;
}
