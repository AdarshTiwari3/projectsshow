class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;
        int n=matrix.size();
        int m=matrix[0].size();
        
        int left=0,top=0,down=n-1,right=m-1;
        
        //direction 0=L-R 1=T-D 2=R-L 3=D-T
        int dir=0;
        while(left<=right && top<=down)
        {
            if(dir==0)
            {
                for(int i=left;i<=right;i++)
                {
                    ans.push_back(matrix[top][i]);
                }
                top+=1;
            }
            else if(dir==1)
            {
                for(int i=top;i<=down;i++)
                {
                     ans.push_back(matrix[i][right]);
                }
                right-=1;
            }
            else if(dir==2)
            {
                for(int i=right;i>=left;i--)
                {
                    ans.push_back(matrix[down][i]);
                }
                down-=1;
                
            }
            else if(dir==3)
            {
                for(int i=down;i>=top;i--)
                {
                    ans.push_back(matrix[i][left]);
                }
                left+=1;
            }
            dir=(dir+1)%4;
        }
        return ans;
    }
};
