#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin>>test;

    while(test--)
    {
        for(int i = 0; i < 8; i++)
        {
            string str;
            cin>>str;
            for(auto &j : str)
                if(j=='2')
                    j='1';
            cout<<str<<"\n";
        }
    }
    return 0;
}