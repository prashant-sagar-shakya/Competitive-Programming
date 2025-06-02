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

void Tower(int n, int f, int t, int a, vector<pair<int, int>> &v)
{
    if (n == 0)
        return;
    Tower(n - 1, f, a, t, v);
    v.push_back({f, t});
    Tower(n - 1, a, t, f, v);
}

void Solve()
{
    int n;
    cin >> n;
    if (n == 1)
    {
        cout << 1 << endl;
        cout << 1 << " " << 3 << endl;
        return;
    }
    vector<pair<int, int>> v;
    Tower(n, 1, 2, 3, v);
    cout << v.size() << endl;
    sort(v.begin(), v.end());
    for (auto i : v)
        cout << i.first << " " << i.second << endl;
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