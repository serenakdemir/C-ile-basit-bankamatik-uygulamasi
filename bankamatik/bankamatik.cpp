#include <stdio.h>
#include <string.h>

int main(){
	//Kullanýcý bilgileri alýnacak
	//Bakiye görüntülenebilecek
	//Para yatýrma, para çekme ve kullanýcý bilgilerini görme
	
	char isim[10]="Seren";
	int parola=1234;
	int bakiye=100;
	int secim;
	char istenecekIsim [10];
	int istenecekParola;
	int yatirilacakPara;
	int cekilecekPara;
	printf("Bankamatige hosgeldiniz\n Lutfen kullanici adinizi giriniz:");
	scanf("%s",&istenecekIsim);
	
	printf("\n Lutfen sifrenizi giriniz:");
	scanf("%d",&istenecekParola);
	
	if(strcmp(isim,istenecekIsim)==0 && istenecekParola==parola ){
		//bu komut iki string deðerini kontrol ediyor 
		printf("Kullanici bilgileri eslesmistir\n\n");
		printf("Asagidaki islemlerden birini seciniz\n[1]- Para yatirma\n[2]- Para cekme\n[3]- Kullanici bilgileri\n Birini Seciniz:");
		scanf("%d",&secim);
		
		if(secim==1){
		
		printf("\n Para yatirma islemindesiniz. Kac para yatirmak istersiniz:");
		scanf("%d",&yatirilacakPara);
		bakiye=bakiye+yatirilacakPara;
		//bakiye+=yatirilacakPara  seklinde de yazýlabilir
		printf("para yatirma isleminiz basarili\n Yatirdiginiz miktar:%d\n Su anki bakiyeniz:%d",yatirilacakPara,bakiye);
		}
		
		else if(secim==2)
		{
			printf("\n Para cekme islemindesiniz. Kac para cekmek istersiniz:");
		scanf("%d",&cekilecekPara);
			bakiye=bakiye-cekilecekPara;
			printf("para cekme isleminiz basarili\n Cektiginiz miktar:%d\n Su anki bakiyeniz:%d",cekilecekPara,bakiye);
		
		}
		
		else if(secim==3)
		{
			printf("Kullanici arayuzune hosgeldiniz\n Kullanici adiniz:%s\n Kullanici sifreniz:%d\n Hesabinizdaki bakiye:%d",isim,parola,bakiye);
		}
		
		else
		{
			printf("Yanlis secim yaptiniz.Lutfen tekrar deneyiniz");
		}
	}
	else 
	{
		printf("Kullanici adi ya da sifre hatali");
	}
	
	
	return 0;
}
