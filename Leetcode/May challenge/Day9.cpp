class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num == 1)
            return true;
        long long int sum = 0;
        for(long long int i = 1; i < num; i = i + 2)
        {
            sum = sum + i;
            if(sum == num)
                return true;
            else continue;
        }
        return false;
    }
};