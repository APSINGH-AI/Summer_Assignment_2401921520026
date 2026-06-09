class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char> st;
        int  Output = 0;
        int left = 0;

        for ( int right=0; right<s.length();right++){

            while(st.find(s[right]) != st.end()){           // The while loop will run till there is a character in SET //  
                st.erase(s[left]);
                left++;
                }

                st.insert(s[right]);
                Output = max(Output, right-left+1);
            
        }
        return Output;


    }
};