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

bool isPrime(int x)
{
    if (x <= 1)
        return false;
    else if (x == 2 || x == 3)
        return true;
    else if (x % 2 == 0 || x % 3 == 0)
        return false;
    for (int i = 5; i * i <= x; i += 6)
        if (x % i == 0 || x % (i + 2) == 0)
            return false;
    return true;
}

void Solve()
{
    int n, m;
    cin >> n >> m;
    while (n++)
    {
        if (isPrime(n))
        {
            break;
        }
    }
    cout << (n == m ? "YES" : "NO");
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