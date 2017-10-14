#include<stdio.h>
int main (void)
{
    float r,h,c,s,sq,vq,vz,pi;
    pi=3.1415926;
    printf("请输入圆半径：");
    scanf("%f,",&r);
    printf("请输入高：");
    scanf("%f",&h);
    c=pi*2*r;
    s=pi*r*r;
    sq=4*pi*r*r;
    vq=pi*r*r*r*(4/3);
    vz=pi*r*r*h;
    printf("圆周长：%.2f\n",c);
    printf("圆面积：%.2f\n",s);
    printf("圆球表面积：%.2f\n",sq);
    printf("圆球体积：%.2f\n",vq);
    printf("圆柱体积：%.2f\n",vz);
    return 0;
}
