//A�a��da belirtilen i�levsel makrolar�(functional - function - like macros) tan�mlay�n�z:
//standart isupper i�levinin yerine ge�ecek is_upper isimli makro
//
//standart toupper i�levinin yerine ge�ecek to_upper isimli makro
//
//3 say�dan en b�y���n� hesaplayan max3 isimli makro
//
//4 say�dan en b�y���n� hesaplayan max4 isimli makro
//
//clamp isimli makro : clamp(val, low, high) ifadesinin de�eri
//
//val <= low ise low
//val >= high ise high
//aksi halde val olmal�
//is_triangle isimli makro :
//
//is_triangle(a, b, c)
//ifadesinin de�eri
//
//e�er a b c kenar uzunluklar� ge�erli bir ��gen olu�turuyor ise 1
//e�er a b c kenar uzunluklar� ge�erli bir ��gen olu�turmuyor 0 ise olmal�.
// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
// e�er bir makro tan�mlanmay�p lojik ifadeye sokulursa o makronun degeri 0 d�r e�er bo�sa bo�tur.....
// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
#include <stdio.h>

#define    is_upper(c)         ((c) >= 'A' && (c) <= 'Z')
#define    to_upper(c)	       ((c) >= 'a' && (c) < 'z' ? (c) - 'a' + 'A' : (c))
#define    max3(a, b, c)         ((a) >= (b) && (a) >= (c) ? (a) : (b) >= (a) && (b) >= (c) ? (b) : (c))   
#define    max4(a, b, c, d)      ((d) >= max3((a), (b), (c)) ? (d) : max3((a), (b), (c)))
#define    clamp(val, low, high)   ((val) <= (low) ? (low) : (val) >= (high) ? (high) : (val))
#define    is_triangle(a, b, c)     ((b) < (a) + (c) && (b) > ((c) - (a) >= 0 ? (c) - (a) : - ((c) - (a))))

//#include <stdio.h>
//
//#define  NEC	100
//
//void func(void);
//
//int main()
//{
//	func();
//#ifdef  NEC
//#undef  NEC
//#endif
//
//}
//
//void func(void)
//{
//#if defined NEC
//	printf("NEC = %d\n", NEC);
//#else
//	printf("NEC tanimsiz\n");
//#endif
//}

// �ni�lemci komutlara kesinlikle bir yere bagl� degil her zaman cal�s�r.....