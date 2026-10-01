/*
*Problem: Contains Duplicate (Leetcode Problem-217)
*Time Complexity: O(n)
*Space Complexity: O(n)
*Starategy- The hash set approach uses a hash set data structure to store encountered elements. 
It iterates through the array, checking if an element is already in the set. If so, it returns true. 
Otherwise, it adds the element to the set. This approach has a time complexity of O(n) and provides an efficient way to check for duplicates.
  */
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
         unordered_map<int,int> seen;
        for(int i=0 ; i<nums.size();i++){
            int x = nums[i];
            if(seen.count(x)){
                return true;
            }
            seen[nums[i]] =i;
        }
        return false;
    }
};
