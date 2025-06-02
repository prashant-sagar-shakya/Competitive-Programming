#include <bits/stdc++.h>
using namespace std;
#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define MOD1 998244353
#define INF 1e18
#define MOD 1000000007
#define endl "\n"
#define pb push_back
#define ppb pop_back
#define ll long long
#define PI 3.141592653589793238462
#define set_bits __builtin_popcount
#define sz(x) (int)(x.size())

void Solve()
{
    ll n, l, r;
    cin >> n;
    ll l0 = 0, l1 = 0, r0 = 0, r1 = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> l >> r;
        if (l == 0)
            l0++;
        if (l == 1)
            l1++;
        if (r == 0)
            r0++;
        if (r == 1)
            r1++;
    }
    cout << min(l0, l1) + min(r0, r1);
}

int main()
{
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    fastio();

    // int test_cases;
    // cin >> test_cases;
    // while (test_cases--)
    Solve();
    return 0;
}