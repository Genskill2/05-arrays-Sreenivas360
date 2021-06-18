/* Enter your solutions in this file */
#include <stdio.h>
#include<assert.h>
#include<math.h>
int max(int x[],int n)
{
   int max=x[0];
    for(int i=0;i<n;i++)
    {
        if(x[i]>max)
        max=x[i];
    }
    return max;
}
int min(int x[],int n)
{
    int min=x[0];
    for(int i=0;i<n;i++)
    {
        if(x[i]<min)
        min=x[i];
    }
    return min;
    }

float average(int x[],int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+x[i];
    }
    float average=(float)sum/(float)n;
    return average;
}
int mode(int x[],int n)
{ int maxcount=0,maxvalue=0;
    for(int i=0;i<n;i++)
    { int count=0;
        for(int j=0;j<n;j++)
        {
            if(x[j]==x[i])
            {
                count++;
            }
            if(count>maxcount){
            maxcount=count;
            maxvalue=x[i];
            }
        }
        
       }
        return maxvalue;
       }
int factors(int n,int x[])
{ int i,j=0,count=0;
   while(n % 2 == 0) {
   
      count++;
      x[j]=2;
      j++;
      n=n/2;
   }
   for(i = 3; i <= sqrt(n); i=i+2){  
      while(n % i == 0) {
         count++;
         x[j]=i;
         j++;
         n = n/i;
      }
   }
   if(n>2)
   { count++;
       x[j]=n;
   }
  return count;
}
