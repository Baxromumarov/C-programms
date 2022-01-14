#include <stdio.h>
#include <stdlib.h>
int main()
{
float summa, foiz,total=0,d=0,a1,a2;
int oy,tur;
float A[100];
system("cls");
printf("\tKREDIT OLISH\n");
printf("--------------------------\n");
printf("Kerakli summani kiriting:\n-->");
scanf("%f",&summa);
a:
printf("Muddatni tanlang:\n1. 12 oy (20%)\n2. 24 oy (22%)\n-->");
scanf("%d",&oy);
switch(oy)
{
    case 1:total=summa*1.2; break;
    case 2:total=summa*1.22; break;
   // case 3:total=summa*1.24; break;
    default:system("cls");printf("Muddatni qaytadan tanlang.\n\n" );goto a;
}
system("cls");
printf("Umumiy summa: %.f so'm\n",total);
printf("Olingan kredit: %.f so'm\n",summa);
printf("%d yillik ustama: %.00f so'm\n",oy,total-summa);
printf("Qaysi usulda to'lamoqchisiz?\n1.O'sib borish\n2.Kamayib borish\n-->");
b:
 scanf("%d",&tur);
oy=oy*12;
a1=total*0.04;
d=(2*(total-a1*oy))/(oy*oy-oy);
for(int i=1;i<=oy;i++)
{
  A[i-1]=a1;
  a1+=d;
}
switch(tur)
{
  case 1:  
for(int i=1;i<=oy;i++)
{
    printf("%2d-oy %.00f so'm\n",i,A[i-1]);
    
}break;
printf("\n");

case 2:
for(int j=1, i=oy;i>=1;i--,j++)
{
    printf("%2d-oy %.00f so'm\n",j,A[i-1]);
 
}
printf("\n");
break;
default: goto b;}
return 0;}
