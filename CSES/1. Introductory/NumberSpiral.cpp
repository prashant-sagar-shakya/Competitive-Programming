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
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++)
#define FORL(a, b, c) for (int(a) = (b); (a) <= (c); (a)++)
#define FORR(a, b, c) for (int(a) = (b); (a) >= (c); (a)--)
#define INF 1000000000000000003
#define endl "\n"
#define pb push_back
#define ppb pop_back
#define ll long long
#define F first
#define S second
#define e endl
#define PI 3.141592653589793238462
#define set_bits __builtin_popcount
#define sz(x) (int)(x.size())
using vi = vector<int>;
using pi = pair<int, int>;

void Solve()
{

    long long x, y;
    cin >> y >> x;

    long long maxi = max(x, y);
    long long square = (maxi - 1) * (maxi - 1);
    if (maxi % 2 == 0)
        (x > y) ? cout << square + y << e : cout << (maxi * maxi) - x + 1 << e;
    else
        (x > y) ? cout << (maxi * maxi) - y + 1 << e : cout << square + x << e;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    fastio();

    ll test_cases;
    cin >> test_cases;
    while (test_cases--)
        Solve();
    return 0;
}