#include "bits/stdc++.h"
using namespace std;
#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define MOD1 998244353
#define MOD 1000000007
#define max(a, b) (a < b ? b : a)
#define min(a, b) ((a > b) ? b : a)
#define INF 1000000000000000003
#define endl "\n"
#define pb push_back
#define ppb pop_back
#define ll long long
#define FOR(a, c) for (ll(a) = 0; (a) < (c); (a)++)
#define FORL(a, b, c) for (ll(a) = (b); (a) <= (c); (a)++)
#define FORR(a, b, c) for (ll(a) = (b); (a) >= (c); (a)--)
#define F first
#define S second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcount
#define sz(x) (int)(x.size())
using vi = vector<int>;
using pi = pair<int, int>;

void Solve()
{
    ll N;
    cin >> N;
    ll arr[N];
    FOR(i, N)
    cin >> arr[i];
    ll ans = 0;
    FORL(i, 1, N - 1)
    {
        if (arr[i - 1] > arr[i])
        {
            ans += (arr[i - 1] - arr[i]);
            arr[i] = arr[i - 1];
        }
    }
    cout << ans;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    fastio();

    // int test_cases;
    // cin >> test_cases;
    // while (test_cases--)
    Solve();
    return 0;
}