/******* all required header files *******/
#include<iostream>
#include<algorithm>
#include<cmath>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
using namespace std;

/*****All definitions*******/
#define w(t) int t; cin>>t; while(t--)
#define vi vector<int>
#define vs vector<string>
#define mp make_pair
#define ll long long int
/***************************/

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	string str1, str2;
	cin >> str1;
	cin >> str2;
	int count = 0;
	for (int i = 0; i < str1.size(); i++)
	{
		if (str1[i] == str2[i])
			count++;
	}
	if (count == str1.size())
	{
		if (str2.size() == str1.size() + 1)
		{
			cout << "Yes" << "\n";
			return 0;
		}
		else
		{
			cout << "No" << "\n";
			return 0;
		}
	}
	else cout << "No" << "\n";
	return 0;
}
