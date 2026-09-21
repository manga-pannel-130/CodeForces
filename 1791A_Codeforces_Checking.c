#include<stdio.h>
#include<string.h>
int main()
{
    char a[10]="codeforces";
    char b;
    int count=0,i,j,n;
    scanf("%d",&n);
    for(j=0;j<n;j++)
    {
        scanf(" %c",&b);
        for(i=0;i<10;i++)
            {
                if(a[i]==b)
                {
                    count++;
                    break;
                }
            }
        if(count==1)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
        count=0;
    }
    
    
    return 0;
}