/*
    *Problem:Two-Sum (Leetcode Problem-1)
    *Time Complexity : O(N)
    *Space Complexity : O(N)
    *Strategy: Used Hash-Map instead of Brute force to reduce the time complexity.Go through the whole array in a worst case 
    scenario to find which 2 numbers add up to the target.
    */
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
            unordered_map<int,int> seen;
   for (int i =0 ; i<nums.size(); i++ ){
    int needed = target - nums[i];
    if(seen.count(needed)){
        return {seen[needed],i};
    }
    seen[nums[i]] = i;
   }
   return {};
    }
};
