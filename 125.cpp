class Solution {
public:
    bool isPalindrome(string s) {
        if(s.size()<=1) return true;
        int i=0;int j=s.size()-1;
        while(i<j)
        {
            if(!isalnum(s[i])){
                i++;
                continue;
            }
            if(!isalnum(s[j])){
                j--;
                continue;
            }
            if(toSmall(s[i])!=toSmall(s[j])) 
            {               
                cout<<i<<j<<endl;
                cout<<s[i]<<s[j]<<endl;
                return false;
            }
            i++;
            j--;
            
        }
        return true;
    }
    bool isc(char c) {
        if((c-'a'>=0&&c-'z'<=0)||(c-'A'>=0&&c-'Z'<=0))
        {
            
            return true;
        }
        else 
        {
            // cout<<c<<endl;

            return false;
        }
    }
    char toSmall(char c)
    {
        if(c-'a'>=0&&c-'z'<=0) return c;
        int dis='A'-'a';
        return c-dis;
    }

};