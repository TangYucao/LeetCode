class Solution {
public:
    int countBinarySubstrings(string s) {
        if(s.size()<=1) return 0;
        vector<int> vec;
        int count=1;
        char pre=s[0];
        for(int i=1;i<s.size();i++)
        {
            char cur=s[i];
            if(cur==pre)
                count++;
            else{
                vec.push_back(count);
                count=1;
            }
            pre=cur;
        }
        vec.push_back(count);
        int res=0;
        if(vec.size())
            cout<<vec[0]<<endl;

        for(int i=1;i<vec.size();i++)
        {
            cout<<vec[i]<<endl;
            res+=min(vec[i],vec[i-1]);
        }
        return res;
    }
};