#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()
#define endl "\n"

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long N, K, X;
    cin >> N >> K >> X;
    vector<long long> A(N);
    for (int _ = 0; _ < N; _++) {
        cin >> A.at(_);
    }
    sort(A.begin(), A.end()); //昇順にしちゃってる
// なぜ昇順がだめなのかというと、量の多いものが全部水という最悪のパターン内でも
// 酒の量は1個に決まる。そのとき残った酒は実質多い方から取り出すことが可能なので、降順にするべき。
// vec.rbegin()とvec.rend()を使って、配列を降順にすることが可能(sort関数)
// 442の本番のC問題で、データ型に気がついてintとlong longをしっかり分けれたのがえらかった
    long long goukei = 0;
    for (int i = 0; i < K; i++) {
        goukei += A.at(i);
        if (goukei >= X) {
            cout << (N - K) + i + 1 << endl;
            break;
        }
    }
    if (goukei < X) {
        cout << -1 << endl;
    }
}
