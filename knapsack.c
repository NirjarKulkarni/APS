#include<stdio.h>
#include<stdlib.h>

int max(int a ,int b)
{
    if(a>b)
        return a;
    return b;
}
int main()
{
    int n,i,j,cap;
    printf("Enter number of items\n");
    scanf("%d",&n);
     int w[n],p[n];
    printf("Enter weight and value of each item \n");
   
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&w[i],&p[i]);
    }
    printf("Enter capacity of the bag\n");
    scanf("%d",&cap);
    

    int v[n+1][cap+1];
    for(int i=0;i<=cap;i++)
    {
        v[0][i]=0;
    }
    
    for(int i=0;i<=n;i++)
    {
        v[i][0]=0;
    }

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=cap;j++)
        {
            if((j-w[i-1])<0)
            {
                v[i][j] = v[i-1][j];
            }
            else
            {
                v[i][j] = max(v[i-1][j],v[i-1][j-w[i-1]]+p[i-1]);
                
            }
            
        }
    }


    for(i=0;i<=n;i++)
    {
        for(j=0;j<=cap;j++)
        {
            printf("%d ",v[i][j]);
        }
        printf("\n");
    }

    printf("\n\nThe Maximum profit is %d : ",v[n][cap]);

    
    return 0;
}