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
    int n;
    cin >> n;
    vector<int> index(100001);
    for (int i = 1; i <= n; ++i)
    {
        int a;
        cin >> a;
        index[a] = i;
    }
    int m;
    cin >> m;
    ll vasya = 0, petya = 0;
    for (int i = 0; i < m; ++i)
    {
        int b;
        cin >> b;
        vasya += index[b];
        petya += (n + 1 - index[b]);
    }
    cout << vasya << " " << petya << endl;
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