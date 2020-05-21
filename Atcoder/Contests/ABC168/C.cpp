/******* all required header files *******/
#include<iostream>
#include<iomanip>
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
	const double pi = 3.141592653;

	int a, b, h, m;
	cin >> a >> b >> h >> m;
	int diff = h - m;
	int angle = diff * 30;
	double fact  =  2 * a * b * cos(angle * pi / 180);
	cout << fixed << setprecision(15) << sqrt(a * a + b * b + fact);
	return 0;
}
