/**
**@author: Ensar Kaya
**Thrid Day Problem Max SubArray using Kadene algortihm
*/
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ret = -9999999;
        int a=0;
        for(int x: nums){
            a+=x;
            ret=max(ret,a);
            a = max(a,0);
        }
        return ans;
    }
};
