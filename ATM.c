#include <stdio.h>
#include <stdlib.h>

void MenuSecimleri(){
  printf("      MENÜ\n"); 
  printf("1 Kasayi Goster\n"); 
  printf("2 Para Cekme\n"); 
  printf("3 Para Yatirma\n"); 
  printf("4 Cikis\n");
  printf("Seciminiz:"); 
}

int main()
{
    int sayi5=50;
    int sayi10=50;
    int sayi20=50;
    int sayi50=20;
    int sayi100=10;
   
    int i=1;
   
    int secim;
    int miktar;

    int banknot5=5;
    int banknot10=10; 
    int banknot20=20;
    int banknot50=50;
    int banknot100=100;
    
    int bakiye=(sayi5*banknot5)+(sayi10*banknot10)+(sayi20*banknot20)+(sayi50*banknot50)+(sayi100*banknot100);
    
    do{
    MenuSecimleri();
    scanf("%d",&secim);
    
    switch(secim){
        case 1:
        printf("Kasanin Durumu:\n");
        printf("5 TL Banknot Miktari:%d\n",sayi5);
        printf("10 TL Banknot Miktari:%d\n",sayi10);
        printf("20 TL Banknot Miktari:%d\n",sayi20);
        printf("50 TL Banknot Miktari:%d\n",sayi50);
        printf("100 TL Banknot Miktari:%d\n",sayi100);
        break;
        
        case 2:
        printf("Cekilecek Miktar:");
        scanf("%d",&miktar);
        if(miktar%5==0||miktar%10==0){
            printf("Mevcut Bakiye:%d\n",bakiye);
            bakiye-=miktar;
            printf("Çekilen Miktar:%d\n",miktar);
            printf("Yeni Bakiye:%d\n",bakiye);
            while(miktar>=100){
                miktar-=100;
                sayi100--;
            }
            while(miktar>=50){
                miktar-=50;
                sayi50--;
            }
            while(miktar>=20){
                miktar-=20;
                sayi20--;
            }
            while(miktar>=10){
                miktar-=10;
                sayi10--;
            }
        }
        else{
          printf("Gecersiz Giris\n");
        }
        break;
            
        case 3:
        printf("Yatirilacak Miktar:");
        scanf("%d",&miktar);
        if(miktar%5==0||miktar%10==0){
            printf("Mevcut Bakiye:%d\n",bakiye);
            bakiye+=miktar;
            printf("Cekilen Miktar:%d\n",miktar);
            printf("Yeni Bakiye:%d\n",bakiye);
            while(miktar>=100){
                miktar-=100;
                sayi100++;
            }
            while(miktar>=50){
                miktar-=50;
                sayi50++;
            }
            while(miktar>=20){
                miktar-=20;
                sayi20++;
            }
            while(miktar>=10){
                miktar-=10;
                sayi10++;
            }
        }
        else{
            printf("Gecersiz Giris\n");
        }
        break;
        case 4: 
           printf("Cikis Yaptiniz.\n");
           return 0;
        break;
    }  
  }
    while(i>0);
     MenuSecimleri();
     scanf("%d",&secim);
    return 0;
}
