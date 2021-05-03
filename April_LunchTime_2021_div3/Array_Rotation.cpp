/*
This was a unique problem, its solution was very easy
as anyone can tell you just have to double the sum of array
and print it,
but!!!! there is one problem and that is mod of negative numbers
in c++ (-8 % 5) = -3 while the actaul answer is 2
this posed some challange to the answer and caused WA
*/
#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

#define lli long long int
#define endl '\n'

#define PI 3.141
#define MOD 1000000007

using namespace std;

int main()
{
	/*#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif*/

	fastio;
	int n; cin >> n;

	lli sum = 0;
	for(int i = 0; i < n; i++)
	{
		int x; cin >> x;
		sum += x;
	}
    sum %= MOD;
	if(sum < 0) sum += MOD;

	int q; cin >> q;
	for(int i = 1; i <= q; i++)
	{
		sum += sum;
		if(sum >= MOD) sum -= MOD;
		cout << sum << endl;
	}

	return 0;
}