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
	int time;
	cin >> time;
	string str;
	cin >> str;
	while (time--)
	{
		for (int i = 0; i < n; i++)
			if (str[i] == 'B' && str[i + 1] == 'G')
			{
				swap(str[i], str[i + 1]);
				i  = i + 1;
			}
	}
	cout << str;

	return 0;
}
