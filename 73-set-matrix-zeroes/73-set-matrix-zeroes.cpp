class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int isCol=0;
        int row=matrix.size();
        int col=matrix[0].size();
        
        for(int i=0;i<row;i++)
        {
            if(matrix[i][0]==0)
                isCol=1;
            
            for(int j=1;j<col;j++)
            {
                if(matrix[i][j]==0)
                {
                    matrix[0][j]=0;      //iss oore m hmne check kia ki kaun sa zero hai to uske row aur col ka 
                    matrix[i][0]=0;       //sbse phla element 0 kia hai
                }
            }
        }
        
         for(int i=1;i<row;i++)
        {
           
            
            for(int j=1;j<col;j++)     //iss loop m hmne upar wale loop m jis bhi row ya col ka fisrt element zero h 
            {                          //uss poore row aur col ko 0 kr rhe h
                if(matrix[i][0]==0||matrix[0][j]==0)
                    matrix[i][j]=0;
            }
         }

        //ye first row k liye check hua h
         if (matrix[0][0] == 0) 
         {
            for (int j = 0; j < col; j++)
            {                         
              matrix[0][j] = 0;
             }
         }
        
        //ye first col k liye check hua h
         if (isCol) 
          {
              for (int i = 0; i < row; i++) 
               matrix[i][0] = 0;
      
          }
        
    }
};