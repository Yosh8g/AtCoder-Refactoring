#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()
#define endl "\n"

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int pow = 1;
    rep(i, n) {
        pow *= 2;
    }
    cout << pow - 2 * n << endl;
}

// static_cast<int>(round(pow(2, n) - 2 * n)) << endl; だけでもいけるっぽい（cppの累乗めんどいな）
