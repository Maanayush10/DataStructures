//GFG 0-1 knapsack solution (Aditya Verma Tutorial)

//recursive + memoization
class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
        //dp array initialisation
        int t[1001][1001];
        Solution(){
            memset(t, -1, sizeof(t));
        }
        
    int knapSack(int W, int wt[], int val[], int n) 
    { 
       // Your code here
       //base case
       if(n==0 || W==0)
       {
           t[n][W]=0;
           return 0;
       }
       if(t[n][W]!=-1)
       {
           return t[n][W];
       }
       
       //Recursive cases
       if(wt[n-1]<=W){
        return t[n][W]=max(val[n-1]+knapSack(W-wt[n-1], wt, val, n-1), knapSack(W, wt, val, n-1));
       }
       else if(wt[n-1]> W)
       {
           return  t[n][W]=knapSack(W, wt, val, n-1);
       }
    }
};


//top down approach
 int knapSack(int W, int wt[], int val[], int n) 
    { 
       // Your code here
       //base case
       int t[n+1][W+1];
       for(int i=0; i<n+1; i++)
       {
           for(int j=0; j<W+1; j++)
           {
               if(i==0 || j==0)
               {
                   t[i][j]=0;
               }
           }
       }
       //Recursive cases
      for(int i=1; i<n+1; i++)
      {
          for(int j=1; j<W+1; j++)
          {
              if(wt[i-1]<=j)
              {
                  t[i][j]= max( val[i-1]+t[i-1][j-wt[i-1]], t[i-1][j]);
              }
              else
              {
                  t[i][j]= t[i-1][j];
              }
          }
      }
      return t[n][W];
    }
