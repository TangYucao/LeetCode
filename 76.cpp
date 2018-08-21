class Solution {
public:
    string minWindow(string s, string t) {
        if(s.size()<t.size()) return "";
        vector<int> map(128,0);
        int counter=t.size();
        for(auto c:t)
        {
            map[c]++;
        }
        int begin=0;
        int end=0;
        int head=0;
        string result;
        int length=-1;
        for(;end<s.size();end++)
        {
            if(map[s[end]]>0)
            {
                
                counter--;
            }
            map[s[end]]--;
            while(counter==0)
            {
                cout<<end-begin+1<<endl;
                if(length==-1||end-begin+1<length)
                {
                    result=s.substr(begin,end-begin+1);
                    length=result.size();

                }
                
                if(map[s[begin]]==0)
                {
                    
                    counter++;
                }
                map[s[begin]]++;
                begin++;
            }
            
            
            
            
            
        }
        
        return length==-1?"":result;
    }
};