/*
*Leetcode Problem 75
Bucket Sort
*Time Complexity - O(n)
*Space Complexity- O(1)
*/
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int a =0;
        int b =0;
        int c =0;
        for(int i=0; i < nums.size() ; i++){
            if(nums[i]==0) a++ ;
            if(nums[i]==1) b++ ;
            if(nums[i]==2) c++ ;
        }
        int i=0;
        while (i<nums.size()){
            while ( a >=1) {
                nums[i] =0;
                a-- ;
                i++ ;
            }
            while ( b >=1) {
                nums[i] =1;
                b-- ;
                i++ ;
            }
            while ( c >=1) {
                nums[i] =2;
                c-- ;
                i++ ;
            }
        }
    }
};