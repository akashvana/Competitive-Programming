#include<bits/stdc++.h>
using namespace std;

int main()
{   
    int test;
    cin>>test;

    int n, a, b;
    while(test--)
    {
        cin>>n>>a>>b;
        for(int i = 0; i < n; i++)
        {
            cout<<char('a' + i % b);
        }
        cout<<"\n";
    }
    return 0;
}