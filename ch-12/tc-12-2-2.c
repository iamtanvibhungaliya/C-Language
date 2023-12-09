#include<stdio.h>

int main()
{
    int y1,y2,n;
    printf("Enter the Year 1 :");
    scanf("%d",&y1);
    printf("Enter the Year 2 :");
    scanf("%d",&y2);

    n = (y2-y1)/4;
    int a[n],i,j;

    for(i=0,j=y1; j<=y2; j++)
    {
        if(j%4 == 0)
        {
            a[i] = j;
            printf("%d ",a[i]);

            i++;
        }
        
    }
}
