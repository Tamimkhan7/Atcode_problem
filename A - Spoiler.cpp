#include <bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define MTK                   \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
typedef long long int ll;
#define all(x) x.begin(), x.end()
#define mod 1000000007

int32_t main()
{
    MTK;
    string s,ss,sx;cin>>s;
    for(int i=0;i<s.size(); i++){
    if(s[i]=='|')break;
    else ss += s[i];
    }
    reverse(all(s));
    for(int i=0;i<s.size(); i++){
    if(s[i]=='|')break;
    else sx += s[i];
    }
    reverse(all(sx));
    cout << ss+sx << '\n';
}