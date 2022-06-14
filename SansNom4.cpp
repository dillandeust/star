#include<iostream>
#include<stdio.h>
using namespace std;
int main () 
{ 
   int n,m,i,j;  
        cout<<"Enter the number of rows"<<endl;  
        cin>>n;  
        m=n;  
       for(int i=1;i<=n;i++)  
       {  
           for(int j=16;j>=i;j--)  
           {  
               printf(" ");  
           }  
           for(int k=1;k<=2*i-1;k++)  
           {  
              if(k==1 || k==2*i-1 )  
             printf("*");  
             else  
             printf(" ");  
           }  
           m--;  
         
          printf("\n");  
    } 
  
    for(i=1+n;i<=2*n+1;i++) 
    { 
        for(int j=n+1;j<=2*n+1;j++)  
       {  
           printf(" ");  
       }  
          for(int k=1;k<=m;k++)  
             {
             if(i==k || k==m || m==n  )  
              printf("*");  
              else  
              printf(" ");  
            }  
       m--;  
         
          printf("\n");     
    }}
