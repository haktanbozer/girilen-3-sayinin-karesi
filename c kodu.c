#include <stdio.h>

int hesapla1(sayi1, sayi2, sayi3) {
	return sayi1*sayi1+sayi2*sayi2+sayi3*sayi3;

}

int main()
{
	int sayi1, sayi2, sayi3, sayi4;
		printf("ilk ifadeyi giriniz : \n");
		scanf_s("%d", &sayi1);
		printf("ikinci ifadeyi giriniz : \n");
		scanf_s("%d", &sayi2);
		printf("ucuncu ifadeyi giriniz : \n");
		scanf_s("%d", &sayi3);
		printf("sayilarin karelerinin toplami %d : \n", hesapla1(sayi1, sayi2, sayi3));
		return 0;

}
