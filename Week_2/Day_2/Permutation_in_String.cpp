class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int m = s1.length();
        int n = s2.length();

        if ( m >n){
            return false;
        }

        sort(begin(s1), end(s1));

        for(int i=0; i<=n-m ; i++){
            string c = s2.substr(i,m);
            sort(begin(c), end (c));
        
        if( s1 == c){
        return true;
        }
        }


        return false;
        
    }
};