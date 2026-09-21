#include<stdio.h>
int main()
{
    int a,b,c,d,t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d %d %d",&a,&b,&c);
        if(a+b>=10||b+c>=10||c+a>=10){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}