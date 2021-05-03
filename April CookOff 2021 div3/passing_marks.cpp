#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

#define endl '\n'

#define PI 3.141
#define MOD 1000000007

typedef long long int lli;
using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	fastio;
	int testcases; cin >> testcases;
	while(testcases--)
	{
		int am, bm, cm, t, a, b, c;
		cin >> am >> bm >> cm >> t >> a >> b >> c;

		if(a >= am && b >= bm && c >= cm && a + b + c >= t) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}