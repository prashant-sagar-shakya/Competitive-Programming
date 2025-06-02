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
    int res[3][3] = {{1, 1, 1},
                     {1, 1, 1},
                     {1, 1, 1}};
    int inp[3][3];
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
        {
            cin >> inp[i][j];
            inp[i][j] = inp[i][j] % 2;
        }
    // Calculations
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            if (inp[i][j] == 1)
            {
                res[i][j] += 1; // current
                if (i != 0)
                    res[i - 1][j] += 1; // top
                if (i != 2)
                    res[i + 1][j] += 1; // bottom
                if (j != 0)
                    res[i][j - 1] += 1; // left
                if (j != 2)
                    res[i][j + 1] += 1; // right
            }
    }

    // Printing res
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            cout << (res[i][j] & 1 ? 1 : 0);
        cout << endl;
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