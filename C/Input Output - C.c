#include <stdio.h>


 // } Driver Code Ends
//User function Template for C

void inputData()
{
    int a;
    float b;
    char c;
    scanf("%d\n%f\n%c\n",&a,&b,&c);
    printf("%d %f %c",a,b,c);
    
    printf("\n");
}

// { Driver Code Starts
int main()
{
    int t;
    scanf("%d", &t);
    
    while(t--)
    {
       inputData();
    }
    return 0;
} 
