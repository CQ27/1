#include<stdio.h>
#include<math.h>
int main ()
{
    int x,i,a,b;
    i=2;
    scanf("%d",&x);
    b=sqrt(x);
        do
        {
            a=x%i;
            if(a==0)
            break;
            else
            i=i+1;
        }
        while(i<=b);
    if(a==0)
        printf("NO");
    else
        printf("YES");
    return 0;
}
