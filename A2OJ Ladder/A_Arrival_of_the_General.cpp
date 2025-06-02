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
    ll n, curr;
    cin >> n;
    ll maxval = INT_MIN, maxi = 0, minval = INT_MAX, mini = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> curr;
        if (curr > maxval)
        {
            maxval = curr;
            maxi = i;
        }
        if (curr <= minval)
        {
            minval = curr;
            mini = i;
        }
    }
    cout << (maxi > mini ? (maxi - 1) + (n - mini) - 1 : (maxi - 1) + (n - mini));
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