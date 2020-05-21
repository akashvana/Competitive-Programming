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
	set<string> s;
	for (int i = 0; i < n; i++)
	{
		string a;
		cin >> a;
		s.insert(a);
	}
	cout << s.size();
	return 0;
}
