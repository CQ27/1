#include<stdio.h>
int main (void)
{
    float r,h,c,s,sq,vq,vz,pi;
    pi=3.1415926;
    printf("������Բ�뾶��");
    scanf("%f,",&r);
    printf("������ߣ�");
    scanf("%f",&h);
    c=pi*2*r;
    s=pi*r*r;
    sq=4*pi*r*r;
    vq=pi*r*r*r*(4/3);
    vz=pi*r*r*h;
    printf("Բ�ܳ���%.2f\n",c);
    printf("Բ�����%.2f\n",s);
    printf("Բ��������%.2f\n",sq);
    printf("Բ�������%.2f\n",vq);
    printf("Բ�������%.2f\n",vz);
    return 0;
}
