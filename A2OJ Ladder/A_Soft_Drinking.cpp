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
    // twsd = toasts with soft drinks
    // twls = toasts with lime slices
    // tws = toast with salt
    ll n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    ll twsd = (k * l) / nl;
    ll twls = c * d / 1;
    ll tws = p / np;
    cout << min({twsd, twls, tws}) / n;
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