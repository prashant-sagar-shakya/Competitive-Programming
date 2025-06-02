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
    string s;
    cin >> s;
    if (s.length() == 0)
    {
        cout << 0 << endl;
        return;
    }
    int res = 0, cnt = 0;
    for (int right = 0; right < s.length() - 1; right++)
    {
        if (s[right] == s[right + 1])
        {
            cnt++;
            res = max(res, cnt);
        }
        else
            cnt = 0;
    }
    cout << res + 1 << endl;
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