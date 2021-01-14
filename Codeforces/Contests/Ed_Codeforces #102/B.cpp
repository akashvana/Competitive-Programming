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
 
 
	int gcd(int a, int b)
{
    if (a == 0)
       return b;
    if (b == 0)
       return a;
  
    // base case
    if (a == b)
        return a;
  
    // a is greater
    if (a > b)
        return gcd(a-b, b);
    else return gcd(a, b-a);
}
 
 
 
 
	int lcm(int a, int b){
		return a * b  / gcd(a, b);
	}
 
 
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
 
	ios_base::sync_with_stdio(0);
	cin.tie(0);
 
	
	w(t){
 
	string str1, str2;
	cin>>str1>>str2;
 
	int cnt1 = 1;
	int cnt2 = 1;
 
	for(int i = 0; i < str1.length() - 1; i++){
		if(str1[i+1] == str1[i]){
			cnt1++;
		}
	}
 
	for(int i = 0; i < str2.length() - 1; i++){
		if(str2[i+1] == str2[i]){
			cnt2++;
		}
	}
 
	int len = 0;
	int flag = 0;
 
	if(str1.length() <= str2.length()){
		len = 0;
	}else{
		len = 1;
	}
 
	if(cnt1 == str1.length() && cnt2 == str2.length()){
		for(int i = 0; i < lcm(str1.length(), str2.length()); i++){
			cout<<str1.at(0);
		}
	}else{
		if(str1.length() % str2.length() == 0){
			for(int i = 0; i < lcm(str1.length(), str2.length()); i+= min(str1.length(), str2.length())){
			if(len = 0){
				if(str1 == str2.substr(i, i + str1.length())){
					flag++;
				}
			}else{
				if(str2 == str1.substr(i, i + str2.length())){
					flag++;
				}
			}
		}
		}else{
			cout<<"-1";
		}
		
	}

	if(flag % min(str1.length(), str2.length()) == 0 && flag != 0){
		if(len == 0){
			for(int i = 0; i < lcm(str1.length(), str2.length()); i+= min(str1.length(), str2.length())){
				cout<<str2;
			}
		}else{
			for(int i = 0; i < lcm(str1.length(), str2.length()); i+= min(str1.length(), str2.length())){
				cout<<str1;
			}
		}
	}
 
	cout<<endl;
 
	}
	return 0;
}
