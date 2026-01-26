/* 修正前のコード
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()
#define endl "\n"

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int p, q, x, y;
    cin >> p >> q >> x >> y;
    if ((x < p or y < q) or (x > p + 99 or y > q + 99)) {
        cout << "No" << endl;
    }
    else {
        cout << "Yes" << endl;
    }
} */

// このようにandとorが続くときは、左から処理されるので、
// 重い処理を後に回す、falseになりやすいものを先に持ってくるなどをすると計算量の削減につながる。
// また、andとorはそれぞれ&&と||で書くことが標準。
// 考え方として、内側の条件と外側の条件どっちが判定しやすいか考える。

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()
#define endl "\n"

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int p, q, x, y;
    cin >> p >> q >> x >> y;
    if (x >= p && x <= p + 99 && y >= q && y <= q + 99) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
}