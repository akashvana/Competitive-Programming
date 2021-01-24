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
	int n;
	cin >> n;
	while (true)
	{
		n++;
		int next = n;
		set<int> s;
		int rem;
		for (int i = 0; i < 4; i++)
		{
			rem = next % 10;
			s.insert(rem);
			next = next / 10;
		}
		if (s.size() == 4)
		{
			cout << n;
			break;
		}
		else continue;
	}
	return 0;
}
