#include <iostream>
#include <map>
using namespace std;

#define ll long long

int main() {
    ll n, t;
    cin >> n >> t;

    ll ans = 0;
    map<ll, ll> m;

    while (n--) {
        ll d, b;
        cin >> d >> b;
        m[d] += b;
    }

    for (const auto& i : m) {
        ans += min(abs(t + 1 - i.first), i.second);
    }

    cout << min(t, ans) << endl;

    return 0;
}
