    /* 8ms */
    bool isIsomorphic(string s, string t) {
        array<char, 128> mp_f {0}, mp_r{0};
        for (int i = 0; i < s.size(); ++i) {
            char c = s[i], d = t[i];
            if (mp_f[c] && mp_f[c] != d) { return false; }
            if (mp_r[d] && mp_r[d] != c) { return false; }
            mp_f[c] = d, mp_r[d] = c;
        }
        return true;
    }
    
    /* 12ms */
    // bool isIsomorphic(string s, string t) {
    //     array<char, 128> m{0}, n{0};
    //     if (s.length()!=t.length()) return false;
    //     if (s.length()<2) return true;
    //     for(int i=0; i<s.length(); i++)
    //     {
    //         if (m[s[i]] && m[s[i]]!=t[i]) return false;
    //         if (n[t[i]] && n[t[i]]!=s[i]) return false;
    //         m[s[i]] = t[i]; n[t[i]] = s[i];
    //     }
    //     return true;
    // }