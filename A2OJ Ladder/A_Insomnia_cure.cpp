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
    ll a, b, c, d, n, cnt = 0;
    cin >> a >> b >> c >> d >> n;
    vector<int> v(n, 0);
    for (int i = 1; i <= n; i++)
        if ((i % a == 0 || i % b == 0 || i % c == 0 || i % d == 0) && v[i-1] == 0)
        {
            v[i - 1] = 1;
            cnt++;
        }
    cout << cnt;
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