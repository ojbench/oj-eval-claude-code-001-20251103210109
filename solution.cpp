#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long a, b;
    if (!(cin >> a >> b)) {
        // If input is malformed, exit with failure to avoid undefined behavior
        return 1;
    }
    long long s = a + b;
    cout << s;
    return 0;
}
