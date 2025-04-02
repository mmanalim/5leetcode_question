class Solution {
    public:
        int firstUniqChar(string s) {
            map<char,int>p;
            for(int i=0;i<s.length();i++){
                p[s[i]]++;
            }
            for(int i=0;i<s.length();i++){
                if(p[s[i]]==1){return i;}
            }
            return -1;
    }
    };