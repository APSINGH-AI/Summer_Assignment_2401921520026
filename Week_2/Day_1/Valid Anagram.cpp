class Solution {
public:
    bool isAnagram(string s, string t) {
        sort( begin(s), end (s));                  // used sorting to arrange both strings
        sort (  begin(t) , end (t));                  s and t together 
        return s==t;
        
    }
};