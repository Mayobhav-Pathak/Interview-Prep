/*
Leetcode Problem 347 - Top K Frequent Elements
  */

/*
* Approach 1
*Time Complexity - O(NlogN) - Worst Case
* Space Complexity - O(N) - Worst Case
  */
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> num;
        for(int i=0;i<nums.size();i++){
            num[nums[i]]++;
        }
        vector<pair<int,int>> result;
        for (const auto& p : num) {
            result.push_back( {p.second , p.first});
        }
         sort(result.rbegin() , result.rend());

        vector<int> res;
        for(int i=0; i<k ; i++){
            res.push_back(result[i].second);
        }        
        return res;
    }
};
