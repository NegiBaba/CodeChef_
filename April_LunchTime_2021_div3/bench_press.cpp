/* difficulty level - easy
just looking at the problem you can tell that if any 
weight has occurance less then 2 times you dont need
to include that, so just create a map, fill the values 
and add all the even values and check if it is greater
than w
*/
#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

#define lli long long int
#define endl '\n'

#define PI 3.141
#define MOD 1000000009

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
		lli n, w, r;
		cin >> n >> w >> r;

		unordered_map<lli, lli> mp;

		for(lli i = 0; i < n; i++)
		{
			lli x; cin >> x;
			mp[x]++;
		}

		bool possible = false;
		if(w <= r) cout << "YES" << endl;
		else 
		{
			lli sum = r;
			for(pair<lli, lli> x : mp)
			{
				if(x.second > 1)
				{
					if(x.second % 2 == 0)
					{
						sum += (x.first * x.second);
					}
					else 
					{
						sum += (x.first * (x.second - 1));
					}
				}
				if(sum >= w) 
				{
					possible = true;
					break;
				}
			}
			if(possible) cout << "YES" << endl;
			else cout << "NO" << endl;
		}
	}
	return 0;
}