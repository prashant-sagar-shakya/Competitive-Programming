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

// if n is odd print -1, if n is even swap every pair (1,2),(3,4) => (2,1),(4,3)

void Solve()
{
    int n;
    cin >> n;

    if (n % 2 != 0)
        cout << -1 << '\n';
    else
    {
        for (int i = 1; i <= n; i += 2)
            cout << i + 1 << " " << i << " ";
        cout << '\n';
    }
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