#include <stdio.h>  
  
int main()  
{  
    int n,m=1,i,j;  
    printf("Enter the number of columns");  
    scanf("%d",&n);  
    for(i=1;i<=n;i++)  
    {  
        for(j=1;j<=i;j++)  
        {  
            printf("*");  
        }  
        printf("\n");  
    }  
    for(i=n-1;i>=1;i--)  
    {  
        for(j=1;j<=i;j++)  
        {  
            printf("*");  
        }  
    printf("\n");  
    }    
    return 0;  
}  