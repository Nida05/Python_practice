#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long r, c;
        cin >> r >> c;
        long long n = max(r, c);
        long long ans;

        if (r == c) {
            ans = n * n - n + 1;
        } else if (n % 2 == 0) {
            if (r == n)
                ans = n * n - c + 1;
            else
                ans = (n - 1) * (n - 1) + r;
        } else {
            if (c == n)
                ans = n * n - r + 1;
            else
                ans = (n - 1) * (n - 1) + c;
        }

        cout << ans << "\n";
    }
}
