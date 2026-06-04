class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int a = matrix.size();       // rows
        int z = matrix[0].size();   // columns
        int left =0 , right = z-1;
        int top = 0, bottom = a-1;

        vector<int> ans ;


         while( top<=bottom  && left <= right ) {
        for (int i = left; i<=right;i++){
            ans.push_back(matrix[top][i]);
        }
        top++;
        for(int i = top; i<=bottom;i++){
            ans.push_back(matrix[i][right]);
        }
        right--;
        if ( top<= bottom ) {
        for(int i = right;i>=left;i-- ){
            ans.push_back(matrix[bottom][i]);
    }
    bottom--;
        }
      if ( left <= right )  {

    for (int i = bottom;i>=top;i--){
        ans.push_back(matrix[i][left]);
    }
    left++;                         // left moves ahead to cover another SPIRAL
    }                        




        
    }
    return ans ;
    }
};