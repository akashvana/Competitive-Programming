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
#define vc vector<char>
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

	int const num = 32;
	char a;
	vc v;
	while (cin >> a)
	{
		v.push_back(a);
	}
	for (int i = 0; i < v.size(); i++)
	{
		if ('A' <= v[i] <= 'Z')
			v[i] = v[i] | num;
	}

	for (int i = 0; i < v.size(); i++)
	{
		if (v[i] == 'a' || v[i] == 'y' || v[i] == 'e' || v[i] == 'i' || v[i] == 'o' || v[i] == 'u')
			continue;
		else cout << "." << v[i];
	}
	return 0;
}
