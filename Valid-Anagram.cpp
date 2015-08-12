class Solution {
public:
    bool isAnagram(string s, string t) {
        int ls=s.length(), lt=t.length();
        if (ls != lt) return false;
        if (ls==0) return true;
        map <char, int> p,q;
        for (int i=0;i<ls;i++)
        {
            p[s[i]]++;
            q[t[i]]++;
        }
        for (int i=0;i<ls;i++)
        {
            if (p[s[i]] != q[s[i]]) return false;
        }
        return true;
        
            
    
    }
};