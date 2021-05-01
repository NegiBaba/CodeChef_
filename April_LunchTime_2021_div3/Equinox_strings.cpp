/*
The solution to this problem is also fairly easy
just compare the first character of the string 
to the character in the word EQUINOX and
add the points, now as the contraints for 
A and B tells us that max value of these 
can be equal to 10e9 and for that
we must take long long int as the score datatype
to prevent the overflow
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

	fastio;
	int testcases; cin >> testcases; // the number of testcases
	while(testcases--)
	{
		// the number of string 
		int n, a, b; cin >> n >> a >> b;
		lli score = 0;

		for(int i = 0; i < n; i++) 
		{
			string s; 
			cin >> s;

			if(s[0] == 'E') score += a;
			else if(s[0] == 'Q') score += a;
			else if(s[0] == 'U') score += a;
			else if(s[0] == 'I') score += a;
			else if(s[0] == 'N') score += a;
			else if(s[0] == 'O') score += a;
			else if(s[0] == 'X') score += a;
			else score -= b;
		}
		if(score > 0) cout << "SARTHAK" << endl;
		else if(score == 0) cout << "DRAW" << endl;
		else cout << "ANURADHA" << endl;

	}
	return 0;
}