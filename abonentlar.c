#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main()
{
    int d, tur;
    char A[100]=""; int k=0;
    printf("1.Ism bo'yicha qidirish\n2.Tel. raqam bo'yicha qidirish\n-->");
    scanf("%d",&tur);
    if (tur == 2)
    {
    int n; 
    a:
    printf("Tel. raqamini kiriting(Quyidagi tartibda: 9XYYYYYYY )\n--> ");
    scanf("%d",&n);
    switch(n)
 {
    case 977761109: printf("Shamsiddin\n"); break;
    case 977761108: printf("Azamatjon\n"); break;
    case 977761107: printf("Shamsiddin\n"); break;
    case 977761106: printf("Ulug'bek\n"); break;
    case 977761105: printf("Axror\n"); break;
    case 977761104: printf("Bahrom\n"); break;
    case 977761103: printf("Movlonbek\n"); break;
    case 977761102: printf("Shohrux\n"); break;
    case 977761101: printf("Muhammad\n"); break;
    case 977761100: printf("Sultonxo'ja\n"); break;
    case 941580221: printf("Sardor\n"); break;
    case 997389902: printf("Ramazon\n"); break;
    case 977764443: printf("Mashhurbek\n"); break;
    case 988774114: printf("Farhod\n"); break;
    case 971234565: printf("Dovudbek\n"); break;
    case 913332206: printf("Islom\n"); break;
    case 939361507: printf("Alibek\n"); break;
    case 941580228: printf("Doston\n"); break;
    case 997389909: printf("Ulug'bek\n"); break;
    default: printf("Bunday raqam mavjud emas!\n ");goto a; 
 } 
 }
 
 else if (tur == 1)
 {
    printf("Abonent ismini kiriting: ");
    scanf("%s",&A); 
    if(!strcmp(A, "Shamsiddin")) {printf("977761109\n");k++;}
    if(!strcmp(A, "Azamatjon")) {printf("977761108\n");k++;}
     if(!strcmp(A, "Shamsiddin")) {printf("977761107\n");k++;}
     if(!strcmp(A, "Ulug'bek")) {printf("977761106\n");k++;}
     if(!strcmp(A, "Axror")) {printf("977761105\n");k++;}
     if(!strcmp(A, "Bahrom")) {printf("977761104\n");k++;}
     if(!strcmp(A, "Movlonbek")) {printf("977761103\n");k++;}
     if(!strcmp(A, "Shohrux")) {printf("977761102\n");k++;}
  if(!strcmp(A, "Muhammad")) {printf("977761101\n");k++;}
  if(!strcmp(A, "Sultonxo'ja")) {printf("977761100\n");k++;}
  if(!strcmp(A, "Sardor")) {printf("941580221\n");k++;}
  if(!strcmp(A, "Ramazon")) {printf("997389902\n");k++;}
  if(!strcmp(A, "Mashhurbek")) {printf("977764443\n");k++;}
  if(!strcmp(A, "Farhod")) {printf("988774114\n");k++;}
  if(!strcmp(A, "Dovudbek")) {printf("971234565\n");k++;}
  if(!strcmp(A, "Islom")) {printf("913332206\n");k++;}
  if(!strcmp(A, "Alibek")) {printf("939361507\n");k++;}
  if(!strcmp(A, "Doston")) {printf("941580228\n");k++;}
  if(!strcmp(A, "Ulug'bek")) {printf("997389909\n");k++;}
  if(k==0)
{ printf("Bunday abonent mavjud emas!\n"); }
 }
return 0;
}
