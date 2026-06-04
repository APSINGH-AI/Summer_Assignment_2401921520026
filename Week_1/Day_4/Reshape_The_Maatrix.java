class Solution {
    public int[][] matrixReshape(int[][] mat, int r, int c) {
        if(mat.length*mat[0].length != r*c){
            return mat ;
        }
        int [][] New_Matrix = new int[r][c];   // IF EQUALITY OF MATRIX IS MET 
        int SR = 0;
                int SC = 0 ;

        for(int i =0;i<mat.length;i++){
            for(int j=0;j<mat[0].length;j++){
                

                if(SC == c){
                    SR ++;
                    SC = 0;
                }
                New_Matrix [SR][SC] = mat[i][j];
                SC ++;


            }
        }
        return New_Matrix;
    }
}