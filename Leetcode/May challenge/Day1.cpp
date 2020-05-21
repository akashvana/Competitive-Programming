// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n)
    {
        long long result = 0;
        long long low = 0;
        long long high = n;
        long long version;

        while (low <= high)
        {
            version = (high + low) / 2;
            if (isBadVersion(version) == true)
            {
                result = version;
                high = version - 1;
            }
            if (isBadVersion(version) == false)
            {
                low = version + 1;
            }
        }
        return result;
    }
};