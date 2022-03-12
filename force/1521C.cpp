#include "bits/stdc++.h"

using namespace std;

int ask(int t, int i, int j, int x) {
    cout << "? " << t << ' ' << i + 1 << ' ' << j + 1 << ' ' << x << endl;
    int val; cin >> val;
    if (val == -1) exit(0);
    return val;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int q;
    cin >> q;

    while (q--) {
        int n; cin >> n;
        vector<int> p(n, -1);
        for (int i = 1; i < n; i += 2) {
            int pos1 = i - 1, pos2 = i;
            int val = ask(1, pos1, pos2, n - 1);
            if (val == n - 1) {
                val = ask(1, pos2, pos1, n - 1);
                if (val == n) {
                    p[pos1] = val;
                    p[pos2] = ask(2, pos2, pos1, 1);
                    continue;
                }
            }
            int get = ask(1, pos1, pos2, val - 1);
            if (get == val) {
                p[pos2] = val;
                p[pos1] = ask(2, pos1, pos2, 1);
            }
            if (get == val - 1) {
                p[pos1] = val;
                p[pos2] = ask(2, pos2, pos1, 1);
            }
        }
        if (p.back() == -1) {
            vector<bool> us(n + 1);
            for (int i = 0; i < n - 1; ++i) {
                us[p[i]] = true;
            }
            for (int i = 1; i <= n; ++i) {
                if (!us[i]) {
                    assert(p[p.size() - 1] == -1);
                    p[p.size() - 1] = i;
                }
            }
        }
        cout << "! ";
        for (int i = 0; i < n; ++i) {
            cout << p[i] << ' ';
        } cout << endl;
    }
}