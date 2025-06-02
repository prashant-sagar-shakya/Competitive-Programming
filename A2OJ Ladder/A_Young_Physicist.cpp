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
    ll n, x, y, z, xsum(0), ysum(0), zsum(0);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y >> z;
        xsum += x;
        ysum += y;
        zsum += y;
    }
    cout << (xsum == 0 && ysum == 0 && zsum == 0 ? "YES\n" : "NO\n");
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