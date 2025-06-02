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
    int A = 0, B = 0;
    for (int i = 0; i < s.length() - 1; i++)
    {
        if (s[i] == 'A')
            A += (s[i + 1] - 48);
        else if (s[i] == 'B')
            B += (s[i + 1] - 48);
    }

    if (A >= 11 || B >= 11)
    {
        if (abs(A - B) >= 2)
            cout << (A > B ? "A\n" : "B\n");
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