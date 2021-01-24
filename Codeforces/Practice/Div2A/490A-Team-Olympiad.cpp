/******* all required header files *******/
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <iomanip>
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
#define pb push_back
#define F first
#define S second
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
	cin>>n;
	vector<int> v(n);
	int one = 0;
	int two = 0;
	int three = 0;
	for(int i = 0; i < n; i++)
	{
		cin>>v[i];
		if(v[i] == 1)
			one++;
		if(v[i] == 2)
			two++;
		if(v[i] == 3)
			three++;
	}
	int num = min(one, min(two, three));
	cout<<num<<"\n";

	auto i1 = find(v.begin(), v.end(), 1);
	auto i2 = find(v.begin(), v.end(), 2);
	auto i3 = find(v.begin(), v.end(), 3);


	for(int i = 0; i < num; i++)
	{
		cout<<*next(i1, 1);
		cout<<" ";
		cout<<next(i2, 2);
		cout<<" ";
		cout<<next(i3, 3);
		cout<<"\n";
	}


	return 0;
}
