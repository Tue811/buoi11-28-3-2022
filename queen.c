#include<stdio.h>
#include<math.h>
#include<stdbool.h>

int a[20];
bool ok(int x, int y)
{
    for(int i=0;i<x;i++)
    {
        if(a[i]==y|| abs(i-x)==abs(a[i]-y))
        {
            return false;
        }     
    }
     return true;
}

void output(int n)
{
    for (int i=0;i<=n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}

void try(int i,int n)
{
    for(int j=0;j<=n;j++)
    {
        if(ok(i,j))
        {
            a[i]=j;
            if(i==n)
            {
                output(n);
            }
            try(i+1,n);
        }
    }
}

int main(){
    int n=7;
    try(0,n);
    return 0;
}