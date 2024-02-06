//Aþaðýda belirtilen iþlevsel makrolarý(functional - function - like macros) tanýmlayýnýz:
//standart isupper iþlevinin yerine geçecek is_upper isimli makro
//
//standart toupper iþlevinin yerine geçecek to_upper isimli makro
//
//3 sayýdan en büyüðünü hesaplayan max3 isimli makro
//
//4 sayýdan en büyüðünü hesaplayan max4 isimli makro
//
//clamp isimli makro : clamp(val, low, high) ifadesinin deðeri
//
//val <= low ise low
//val >= high ise high
//aksi halde val olmalý
//is_triangle isimli makro :
//
//is_triangle(a, b, c)
//ifadesinin deðeri
//
//eðer a b c kenar uzunluklarý geçerli bir üçgen oluþturuyor ise 1
//eðer a b c kenar uzunluklarý geçerli bir üçgen oluþturmuyor 0 ise olmalý.
// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
// eðer bir makro tanýmlanmayýp lojik ifadeye sokulursa o makronun degeri 0 dýr eðer boþsa boþtur.....
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

// öniþlemci komutlara kesinlikle bir yere baglý degil her zaman calýsýr.....