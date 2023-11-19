#include<bits/stdc++.h>
using namespace std;


//using stack to store the words and the pop out 
 string reverseWords(string s) {
        stack<string> st;
        string temp="";
        string result="";

        int i=0, end= s.length();
        while(i<end)
        {
            if(s[i]==' ')
            {
                if(temp.size()!=0)
                {
                    st.push(temp);
                    temp="";    
                }
            }
            else{
            temp=temp+s[i];}
            i++;
        }
        if(temp.size()>0)
        {
            st.push(temp);
        }
       while(!st.empty())
       {
           result+=st.top();
           st.pop();
           if(!st.empty())
           {
               result+=" ";
           }
       }
       return result;
    }

int main()
{
  //main logic here
  return 0;
}
