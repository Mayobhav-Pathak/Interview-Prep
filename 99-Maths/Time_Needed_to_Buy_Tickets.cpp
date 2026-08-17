/*
 *Problem: Time Needed to buy Tickets(Leetcode Problem-2073)
 *Time Complexity: O(N)
 *Space Complexity: O(1)
 *Strategy:The people in fromt of the given person(kth) will be able to buy atmost tickets[k] tickets , 
           while those behind will be able to buy atmost tickets[k]-1 tickets. 
           This gives us an highly optimised mathematical solution to the problem.
*/ 
class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int t=0;
        for (int i=0;i<tickets.size();i++){
            if(i<=k){
            t += min(tickets[i],tickets[k]);
            }
            else{
            t += min(tickets[i], tickets[k]-1) ;
            }
        }
        return t;
    }
};