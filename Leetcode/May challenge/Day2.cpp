class Solution {
public:
    int numJewelsInStones(string J, string S)
    {
        sort(S.begin(), S.end());
        sort(J.begin(), J.end());
        long long int count = 0;
        for(int i = 0; i < J.size(); i++)
        {
            for(int j = 0; j < S.size(); j++)
            {
                if(S[j] == J[i])
                {
                    count++;
                }
                else continue;
            }
        }
        return count;
        
    }
        
};