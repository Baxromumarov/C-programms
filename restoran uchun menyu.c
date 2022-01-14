#include <stdio.h>
#include <stdlib.h>
int main ()
{system("cls");
  int type, mtype, sum=0;int n,k1,k2,k3,k4,k5;
  printf("Taom turini tanlang:\n 1 - Milliy taomlar\n 2 - Chetel taomlari\n-->");
  scanf("%d",&type);
  switch (type)//-----------------------------------------
  {
     case 1: 
             printf(" 1 - Taom\n 2 - Taom\n 3-ichimliklar\n-->");
             scanf("%d",&mtype);
             switch (mtype)//------------------------------
               { case 1:  
                        
                        printf(" 1 - Qaynatma sho'rva\n2 - Mastava\n3 - Bedana sho'rva\n4 - Ko'za sho'rva\n5 - Moshxo'rda\n6-Keyingi bo'limga o'tish\n-->");
                        scanf("%d",&n);
                        switch (n)               //-----------------------
                            {case 1: 
                               printf("Qaynatma sho'rva po'rtsyasini tanlang\n 1 - 0.5 --> 10 000 so'm\n 2 - 0.75 --> 15 000 so'm\n 3- 1.0 --> 20 000 so'm\n-->");
                               scanf("%d",&k1);
                                switch (k1)
                                    { case 1: sum=sum+10000;break;
                                     case 2: sum=sum+15000;break;
                                     case 3: sum=sum+20000;break;}break;
                            case 2: 
                               printf("Mastavaning po'rtsyasini tanlang\n 1 - 0.5 --> 8 000 so'm\n 2 - 0.75 --> 12 000 so'm\n 3- 1.0 --> 15 000 so'm\n-->");
                               scanf("%d",&k2);
                                switch (k2)
                                     {case 1: sum=sum+8000;break;
                                     case 2: sum=sum+12000;break;
                                     case 3: sum=sum+15000;break;}break;
                            case 3: 
                               printf("Bedana sho'rva po'rtsyasini tanlang\n 1 - 0.5 --> 12 000 so'm\n 2 - 0.75 --> 16 000 so'm\n 3- 1.0 --> 20 000 so'm\n-->");
                               scanf("%d",&k3);
                                switch (k3)
                                    { case 1: sum=sum+12000;break;
                                     case 2: sum=sum+16000;break;
                                     case 3: sum=sum+20000;break;}break;
                            case 4:  k4;
                             printf("Ko'za sho'rva po'rtsyasini tanlang\n 1 - 0.5 --> 14 000 so'm\n 2 - 0.75 --> 17 000 so'm\n 3- 1.0 --> 22 000 so'm\n-->");
                               scanf("%d",&k4);
                                switch (k4)
                                   {  case 1: sum=sum+14000;break;
                                     case 2: sum=sum+17000;break;
                                     case 3: sum=sum+22000;break;}break;
                            case 5:
                               printf("Moshxo'rdaning po'rtsyasini tanlang\n 1 - 0.5 --> 9 000 so'm\n 2 - 0.75 --> 13 000 so'm\n 3- 1.0 --> 18 000 so'm\n-->");
                               scanf("%d",&k5);
                                switch (k5)
                                     {case 1: sum=sum+9000;break;
                                     case 2: sum=sum+13000;break;
                                     case 3: sum=sum+18000;break;
                             default:printf("Noto'g'ri tanlov boshidan tanlang"); }
                            }
                 case 2:  
                 system("cls");
                        
                        printf("2-Taom\n1 - Osh\n 2 - Norin\n 3 - Besh barmoq\n 4 - Qozon kabob\n 5 - Jiz\n6-keyingi bo'limga o'tish\n-->");
                        scanf("%d",&n);
                        switch (n)               //-----------------------
                            {case 1: 
                               printf("Osh po'rtsyasini tanlang\n 1 - 0.5 --> 10 000 so'm\n 2 - 0.75 --> 15 000 so'm\n 3- 1.0 --> 20 000 so'm\n-->");
                               scanf("%d",&k1);
                                switch (k1)
                                    { case 1: sum=sum+10000;break;
                                     case 2: sum=sum+15000;break;
                                     case 3: sum=sum+20000;break;}break;
                            case 2: 
                               printf("Norin po'rtsyasini tanlang\n 1 - 0.5 --> 8 000 so'm\n 2 - 0.75 --> 12 000 so'm\n 3- 1.0 --> 15 000 so'm\n-->");
                               scanf("%d",&k2);
                                switch (k2)
                                     {case 1: sum=sum+8000;break;
                                     case 2: sum=sum+12000;break;
                                     case 3: sum=sum+15000;break;}break;
                            case 3: 
                               printf("Besh barmoq po'rtsyasini tanlang\n 1 - 0.5 --> 12 000 so'm\n 2 - 0.75 --> 16 000 so'm\n 3- 1.0 --> 20 000 so'm\n-->");
                               scanf("%d",&k3);
                                switch (k3)
                                    { case 1: sum=sum+12000;break;
                                     case 2: sum=sum+16000;break;
                                     case 3: sum=sum+20000;break;}break;
                            case 4:  
                             printf("Qozon kabob po'rtsyasini tanlang\n 1 - 0.5 --> 14 000 so'm\n 2 - 0.75 --> 17 000 so'm\n 3- 1.0 --> 22 000 so'm\n-->");
                               scanf("%d",&k4);
                                switch (k4)
                                   {  case 1: sum=sum+14000;break;
                                     case 2: sum=sum+17000;break;
                                     case 3: sum=sum+22000;break;}break;
                            case 5:
                               printf("Jiz po'rtsyasini tanlang\n 1 - 0.5 --> 9 000 so'm\n 2 - 0.75 --> 13 000 so'm\n 3- 1.0 --> 18 000 so'm\n-->");
                               scanf("%d",&k5);
                                switch (k5)
                                     {case 1: sum=sum+9000;break;
                                     case 2: sum=sum+13000;break;
                                     case 3: sum=sum+18000;break;
                             default:printf("Noto'g'ri tanlov boshidan tanlang");}
                            }
               system("cls");
                case 3:  
                        
                        printf(" Ichimliklar:\n1 - Choy\n 2 - Sharbat\n 3 - Coca cola\n 4 - Kofe\n 5 - Suv\n-->");
                        scanf("%d",&n);
                        switch (n)               //-----------------------
                            {case 1: 
                               printf("Choy turini tanlang\n 1 - Qora choy 2 000 so'm\n 2 - Ko'k choy --> 2 000 so'm\n 3- Limon choy--> 5 000 so'm\n-->");
                               scanf("%d",&k1);
                                switch (k1)
                                    { case 1: sum=sum+2000;break;
                                     case 2: sum=sum+2000;break;
                                     case 3: sum=sum+5000;break;}break;
                            case 2: 
                               printf("Sharbat turni tanlang\n 1 - Olma sharbati--> 8 000 so'm\n 2 - Nok sharbati--> 8 000 so'm\n 3-Apelsin sharbati--> 8 000 so'm\n -->");
                               scanf("%d",&k2);
                                switch (k2)
                                     {case 1: sum=sum+8000;break;
                                     case 2: sum=sum+8000;break;
                                     case 3: sum=sum+8000;break;}break;
                            case 3: 
                               printf("Coca-colani tanlang\n 1 - 0.5 --> 6 000 so'm\n 2 - 1 --> 9 000 so'm\n 3- 1.5 --> 14 000 so'm\n-->");
                               scanf("%d",&k3);
                                switch (k3)
                                    { case 1: sum=sum+6000;break;
                                     case 2: sum=sum+9000;break;
                                     case 3: sum=sum+14000;break;}break;
                            case 4:  k4;
                             printf("Kofe turini tanlang\n 1 -Americano --> 14 000 so'm\n 2 - Kapachino --> 13 000 so'm\n 3- Latte --> 15 000 so'm\n-->");
                               scanf("%d",&k4);
                                switch (k4)
                                   {  case 1: sum=sum+14000;break;
                                     case 2: sum=sum+13000;break;
                                     case 3: sum=sum+15000;break;}break;
                            case 5:
                               printf("Suv miqdorini tanlang\n 1 - 0.5 --> 2 000 so'm\n 2 - 1 --> 3000 so'm\n 3- 1.5 --> 4 000 so'm\n-->");
                               scanf("%d",&k5);
                                switch (k5)
                                     {case 1: sum=sum+2000;break;
                                     case 2: sum=sum+3000;break;
                                     case 3: sum=sum+4000;break;
                             default:printf("Noto'g'ri tanlov boshidan tanlang");}
                            }
                }break;
    case 2: 
             printf("Chet el taomlari\n 1 - Taom\n 2 - Taom\n 3-ichimliklar\n-->");
             scanf("%d",&mtype);
             switch (mtype)//------------------------------
               { case 1:  
                       
                        printf(" 1 - Frikadelka\n 2 - Akula sho'rva\n 3 - Kit sho'rva\n 4 - Burgut sho'rva\n 5 - Tuya sho'rva\n6-Keyingi bo'limga o'tish\n-->");
                        scanf("%d",&n);
                        switch (n)               //-----------------------
                            {case 1: 
                               printf("Frikadelka po'rtsyasini tanlang\n 1 - 0.5 --> 20 000 so'm\n 2 - 0.75 --> 30 000 so'm\n 3- 1.0 --> 40 000 so'm\n-->");
                               scanf("%d",&k1);
                                switch (k1)
                                    { case 1: sum=sum+20000;break;
                                     case 2: sum=sum+30000;break;
                                     case 3: sum=sum+40000;break;}break;
                            case 2: 
                               printf("Akula sho'rva po'rtsyasini tanlang\n 1 - 0.5 --> 30 000 so'm\n 2 - 0.75 --> 40 000 so'm\n 3- 1.0 --> 50 000 so'm\n-->");
                               scanf("%d",&k2);
                                switch (k2)
                                     {case 1: sum=sum+30000;break;
                                     case 2: sum=sum+40000;break;
                                     case 3: sum=sum+50000;break;}break;
                            case 3: 
                               printf("Kit sho'rva po'rtsyasini tanlang\n 1 - 0.5 --> 50 000 so'm\n 2 - 0.75 --> 80 000 so'm\n 3- 1.0 --> 100 000 so'm\n-->");
                               scanf("%d",&k3);
                                switch (k3)
                                    { case 1: sum=sum+50000;break;
                                     case 2: sum=sum+80000;break;
                                     case 3: sum=sum+100000;break;}break;
                            case 4:  k4;
                             printf("Burgut sho'rva po'rtsyasini tanlang\n 1 - 0.5 --> 40 000 so'm\n 2 - 0.75 --> 60 000 so'm\n 3- 1.0 --> 80 000 so'm\n-->");
                               scanf("%d",&k4);
                                switch (k4)
                                   {  case 1: sum=sum+40000;break;
                                     case 2: sum=sum+60000;break;
                                     case 3: sum=sum+80000;break;}break;
                            case 5:
                               printf("Tuya sho'rva po'rtsyasini tanlang\n 1 - 0.5 --> 30 000 so'm\n 2 - 0.75 --> 45 000 so'm\n 3- 1.0 --> 55 000 so'm\n-->");
                               scanf("%d",&k5);
                                switch (k5)
                                     {case 1: sum=sum+30000;break;
                                     case 2: sum=sum+45000;break;
                                     case 3: sum=sum+55000;break;
                             default:printf("Noto'g'ri tanlov boshidan tanlang"); }
                            } 
                 case 2:  
                 system("cls");
                        
                        printf("2-Taom\n1 - Sushi\n 2 - Vassabi\n 3 - Burbudu\n 4 - Kamba\n 5 - Mumba\n6-Keyingi bo'limga o'tish\n-->");
                        scanf("%d",&n);
                        switch (n)               //-----------------------
                            {case 1: 
                               printf("Sushi po'rtsyasini tanlang\n 1 - 0.5 --> 10 000 so'm\n 2 - 0.75 --> 15 000 so'm\n 3- 1.0 --> 20 000 so'm\n-->");
                               scanf("%d",&k1);
                                switch (k1)
                                    { case 1: sum=sum+10000;break;
                                     case 2: sum=sum+15000;break;
                                     case 3: sum=sum+20000;break;}break;
                            case 2: 
                               printf("Vassabi po'rtsyasini tanlang\n 1 - 0.5 --> 8 000 so'm\n 2 - 0.75 --> 12 000 so'm\n 3- 1.0 --> 15 000 so'm\n-->");
                               scanf("%d",&k2);
                                switch (k2)
                                     {case 1: sum=sum+8000;break;
                                     case 2: sum=sum+12000;break;
                                     case 3: sum=sum+15000;break;}break;
                            case 3: 
                               printf("Burbudu po'rtsyasini tanlang\n 1 - 0.5 --> 12 000 so'm\n 2 - 0.75 --> 16 000 so'm\n 3- 1.0 --> 20 000 so'm\n-->");
                               scanf("%d",&k3);
                                switch (k3)
                                    { case 1: sum=sum+12000;break;
                                     case 2: sum=sum+16000;break;
                                     case 3: sum=sum+20000;break;}break;
                            case 4:  
                             printf("Kamba po'rtsyasini tanlang\n 1 - 0.5 --> 14 000 so'm\n 2 - 0.75 --> 17 000 so'm\n 3- 1.0 --> 22 000 so'm\n-->");
                               scanf("%d",&k4);
                                switch (k4)
                                   {  case 1: sum=sum+14000;break;
                                     case 2: sum=sum+17000;break;
                                     case 3: sum=sum+22000;break;}break;
                            case 5:
                               printf("Mumba portsyasini tanlang\n 1 - 0.5 --> 9 000 so'm\n 2 - 0.75 --> 13 000 so'm\n 3- 1.0 --> 18 000 so'm\n-->");
                               scanf("%d",&k5);
                                switch (k5)
                                     {case 1: sum=sum+9000;break;
                                     case 2: sum=sum+13000;break;
                                     case 3: sum=sum+18000;break;
                             default:printf("Noto'g'ri tanlov boshidan tanlang"); }
                            }
               system("cls");
                case 3:  
                        
                        printf(" Ichimliklar:\n1 - Choy\n 2 - Sharbat\n 3 - Coca cola\n 4 - Kofe\n 5 - Suv\n6-Hisobni chiqarish\n-->");
                        scanf("%d",&n);
                        switch (n)               //-----------------------
                            {case 1: 
                               printf("Choy turini tanlang\n 1 - Xitoy choyi 2 000 so'm\n 2 - Hindiston choyi --> 2 000 so'm\n 3- Limon choy--> 5 000 so'm\n-->");
                               scanf("%d",&k1);
                                switch (k1)
                                    { case 1: sum=sum+2000;break;
                                     case 2: sum=sum+2000;break;
                                     case 3: sum=sum+5000;break;}break;
                            case 2: 
                               printf("Sharbat turni tanlang\n 1 - Kakos sharbati--> 25 000 so'm\n 2 - Mango sharbati--> 22 000 so'm\n 3-Apelsin sharbati--> 23 000 so'm\n -->");
                               scanf("%d",&k2);
                                switch (k2)
                                     {case 1: sum=sum+25000;break;
                                     case 2: sum=sum+22000;break;
                                     case 3: sum=sum+23000;break;}break;
                            case 3: 
                               printf("Coca-colani tanlang\n 1 - 0.5 --> 6 000 so'm\n 2 - 1 --> 9 000 so'm\n 3- 1.5 --> 14 000 so'm\n-->");
                               scanf("%d",&k3);
                                switch (k3)
                                    { case 1: sum=sum+6000;break;
                                     case 2: sum=sum+9000;break;
                                     case 3: sum=sum+14000;break;}break;
                            case 4:  k4;
                             printf("Kofe turini tanlang\n 1 -Americano --> 14 000 so'm\n 2 - Kapachino --> 13 000 so'm\n 3- Latte --> 15 000 so'm\n-->");
                               scanf("%d",&k4);
                                switch (k4)
                                   {  case 1: sum=sum+14000;break;
                                     case 2: sum=sum+13000;break;
                                     case 3: sum=sum+15000;break;}break;
                            case 5:
                               printf("Suv miqdorini tanlang\n 1 - 0.5 --> 2 000 so'm\n 2 - 1 --> 3000 so'm\n 3- 1.5 --> 4 000 so'm\n-->");
                               scanf("%d",&k5);
                                switch (k5)
                                     {case 1: sum=sum+2000;break;
                                     case 2: sum=sum+3000;break;
                                     case 3: sum=sum+4000;break;
                             default:printf("Noto'g'ri tanlov boshidan tanlang");}
                            }
                }
                
    }
                               
      printf("\nSiz to'lashingiz kerak bo'lgan summa %d",sum);                        
return 0;                               
}
