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

	string str;
	cin >> str;
	string num;

	for (int i = 0; i < str.size(); i++)
	{
		for (int j = 0; j < str.size() / 2; j++)

		{
			if (str[i] == '.')
				num[j] = '0';
			if (str[i] == '-' && str[i + 1] == '.')
			{
				num[j] = '1';
				i = i + 1;
			}
			if (str[i] == '-' && str[i + 1] == '-')
			{
				num[j] = '2';
				i = i + 1;
			}
		}
	}
	cout << num;

	return 0;
}
