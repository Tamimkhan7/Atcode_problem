#include <bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
typedef long long int ll;
#define all(x) x.begin(), x.end()
#define mod 1000000007
int32_t main()
{
    MTK;
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int x = v[0];
    ll ans = 0;
    if (x > 0)
    {
        for (int i = 0; i < n; i++)
            ans += v[i];
        x--;
        cout << ans + x << '\n';
    }
    else
    {
        for (int i = 1; i < n; i++)
            ans += v[i];
        cout << ans << '\n';
    }
}