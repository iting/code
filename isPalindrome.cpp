#include<iostream>
using namespace std;

bool isPalindrome(int x) 
{
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
       if(x<0) return false;
       int div=1;
        int tmp =x;
        while( tmp>=10)
        {
            div*=10;
            tmp/=10;
        }
        
        tmp =x;
        while( tmp>0)
        {
            int f= tmp/div;
            int l= tmp%10;
            if(f!=l) return false;
            tmp=tmp/10;
            div/=10;
            tmp=tmp-f*div;
            div/=10;
        }
        return true;
 }