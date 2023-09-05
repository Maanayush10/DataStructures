//GFG 0-1 knapsack solution (Aditya Verma Tutorial)
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
