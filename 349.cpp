class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
                vector<int> res;

        if(nums1.size()==0||nums2.size()==0) return res;
        unordered_set<int> s1;
        unordered_set<int> s2;

        
        for(auto num1:nums1)
        {
            s1.insert(num1);
        }
        for(auto num2:nums2)
        {
            s2.insert(num2);
        }
        for(auto s:s1)
        {
            
           if(s2.find(s)!=s2.end()) res.push_back(s);
        }
        return res;
    }
};