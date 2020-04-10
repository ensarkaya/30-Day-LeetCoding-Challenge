/**
**@author: Ensar Kaya
**First Day Problem Single Number
*/
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int x=0;
        for(int a:nums){
            x ^= a;
        }
        return x;
    }
};
