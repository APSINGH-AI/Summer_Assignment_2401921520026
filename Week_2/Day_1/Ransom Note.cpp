class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int arr[26]={0};
        int n = magazine.length();
        int m = ransomNote.length();

        for (int i =0; i<n;i++){
            char ch = magazine[i];
            arr[ch - 'a']++;
        }
        for (int i =0; i<m;i++){
            char ch = ransomNote[i];                              // Return false if no space found in magazine 
            if( arr[ch - 'a']==0){
                return false ;                                       for ransomNote to extract the characters
            }
            arr[ch -'a']--;
        }
        return true;

    }
};