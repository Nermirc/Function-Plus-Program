#include <stdio.h>
#include <stdlib.h>


int topla(int emir,int enver)
{
    return emir+enver;
}






int main()
{
    //Klavyeden girilen iki tamsay�n�n toplam�n� fonksiyon kullanarak
    //hesaplayan C program� yaz�n�z.
    int sayi1,sayi2;
    printf("Lutfen 2 adet sayi giriniz.\n");
    scanf("%d %d",&sayi1,&sayi2);
    printf("Sayilarin toplami %d",topla(sayi1,sayi2));
}
