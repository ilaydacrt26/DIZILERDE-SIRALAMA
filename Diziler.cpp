#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main(){
	int n,sayi,sayac=0,sayi2,j=0;
	printf("Kac elemanli dizi olusturacaksiniz: ");
	scanf("%d",&n);
	int dizi[n];
	srand(time(NULL));
	printf("\n");
	sayi=-50+rand()%101;	
	printf("\n Sayilar :%d ",sayi);
	dizi[0]=sayi;
	for(int i=1;i<n;i++)
	{
		dizi[i]=-999;
	}
	printf("\n");
	for(int l=0;l<n;l++)
		{	if(dizi[l]!=-999)
		 {
			printf("%d ",dizi[l]);	
		}
	}
	for(int i=1;i<n;i++)
	{
		sayi=-50+rand()%101;	
		printf("\nSayilar :%d ",sayi);
		sayac++;
		if(sayac>=1)
		{
			for(int j=0;j<n;j++)
			{	
				if(dizi[j]>sayi)
				{
					dizi[j]=dizi[j]+sayi;
					sayi=dizi[j]-sayi;
					dizi[j]=dizi[j]-sayi;
				}		
			}
			dizi[i]=sayi;	
		}
		printf("\n");
		for(int l=0;l<n;l++)
		{
			if(dizi[l]!=-999)
			{
				printf("%d ",dizi[l]);	
			}
		}	
	}
	printf("\n\n");
	printf("a)TEK sayilar icin kucukten buyuge: ");
	for(int i=0;i<n;i++)
	{
			if(dizi[i]%2!=0)
			{
				printf("%d ",dizi[i]);
			}
	}
	printf("\n\n");
	printf("b)TEK sayilar icin buyukten kucuge: ");
	for(int i=n-1;i>=0;i--)
	{
		if(dizi[i]%2!=0)
		{
			printf("%d ",dizi[i]);
		}
	}
	printf("\n\n");
	printf("c)DIZIDEKI tum sayilar icin kucukten buyuge: ");
	for(int i=0;i<n;i++)
	{
		printf("%d ",dizi[i]);
	}
	printf("\n\n");
	printf("d)DIZIDEKI tum sayilar icin buyukten kucuge: ");
	for(int i=n-1;i>=0;i--)
	{
		printf("%d ",dizi[i]);
	}
	return 0;
}			
