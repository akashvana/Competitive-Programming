class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int m, num, den, i = 2;
        if(coordinates.size() == 2)
            return true;
        num = (coordinates[1][1] - coordinates[0][1]);
        den = (coordinates[1][0] - coordinates[0][0]);
        while(den == 0){
            den = (coordinates[i][0] - coordinates[0][0]);
            if(i == (coordinates.size() - 1)){
                return true;
            }
            i = i + 1;
        }
        m = num/den;
        for(int i  = 1; i  < coordinates.size(); i++)
        {
            int lhs = coordinates[i][1] - coordinates[0][1];
            int rhs = m * (coordinates[i][0] - coordinates[0][0]);
            if(lhs!=rhs)
                return false;
        }
        return true;
    }
};