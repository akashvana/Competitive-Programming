#include<bits/stdc++.h>
using namespace std;

/*****All definitions*******/
#define w(t) int t; cin>>t; while(t--)
#define vi vector<int>
#define vs vector<string>
#define mp make_pair
/***************************/

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	while (true)
	{
		c = c - b;
		if (c <= 0)
		{
			cout << "Yes";
			break;
		}
		a = a - d;
		if (a <= 0)
		{
			cout << "No";
			break;
		}
	}
	return 0;
}