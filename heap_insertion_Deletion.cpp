#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int maximumProduct(vector<int>& nums, int k) {
        priority_queue<int>,vector<int>,gratter <int> > pq;
        long long int ans;
        vector<int> inc;
        for(int i=0;i<n;i++)
        {
            pq.push(nums[i]);
        }
       if(k--)
       {
           inc =  pq.top();
            pq.pop();
            pq.push(inc+1);
        }
        for(auto &it:pq)
        {
            ans = it.first*it.second;
        }
            
          return ans;  
        
    }
};
