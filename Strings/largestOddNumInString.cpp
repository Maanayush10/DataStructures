#include<bits/stdc++.h>
using namespace std;

string largestOddNumber(string num) 
    {
        int start=0, end= num.length()-1;
        while(end>=start)
        {
            if(isOdd(int(num[end])))
            {
                return num.substr(start, end-start+1);
            }
            else
            {
                end--;
            }
        }
        return "";
    }

int main()
{
  //main logic here
  return 0;
}
