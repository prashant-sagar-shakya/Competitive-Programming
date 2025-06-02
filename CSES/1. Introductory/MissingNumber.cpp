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

int MissingNumber(int arr[], int n)
{
    int xorr1 = 0, xorr2 = 0;

    for (int i = 0; i < n; i++)
    {
        xorr1 = xorr1 ^ arr[i];
        xorr2 = xorr2 ^ (i + 1);
    }
    xorr2 = xorr2 ^ (n + 1);

    return xorr1 ^ xorr2;
}

void Solve()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n - 1; i++)
        cin >> arr[i];
    cout << MissingNumber(arr, n - 1) << endl;
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