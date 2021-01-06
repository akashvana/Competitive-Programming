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
	
	w(t){

		int person1, person2;
		cin>>person1>>person2;

		vector<int> v1(person1);
		vector<int> v2(person2);

		int sum1 = 0;
		int sum2 = 0;

		for(int i = 0; i < v1.size(); i++){
			cin>>v1[i];
			sum1 += v1[i];
		}

		for(int i = 0; i < v2.size(); i++){
			cin>>v2[i];
			sum2 += v2[i];
		}

		sort(v1.begin(), v1.end());
		sort(v2.begin(), v2.end(), greater<int>());

		int cnt = 0;
		for(int i = 0; i < min(v1.size(), v2.size()); i++){
			if(sum1 > sum2){
				break;
			}
			else{
				sum1 = sum1 + v2[i] - v1[i];
				sum2 = sum2 + v1[i] - v2[i];
				cnt++;
			}
		}	

		if((sum1 <= sum2)){
			cout<<-1<<endl;
		}else{
			cout<<cnt<<endl;
		}
		

	}


	return 0;
}
