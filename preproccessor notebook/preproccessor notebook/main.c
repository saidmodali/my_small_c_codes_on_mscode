#include <stdio.h>
#include "main.h"


////include ise kopyala yap��t�r yapar main.h veya standard library
//
//#define BOOKS                 94252454205   //object - like macro...
//
//#define max2(a,b)        ((a) > (b) ? (a) : (b))    //functional macro...
//
//
//#define create_new_max_function(type)     type get_max_##type(type a,type b) \
//{\
//if (a > b)\
//return printf("%d",a);\
//else\
// return printf("%d ",b);\
//}
//
//create_new_max_function(int);
//
//
//int main()
//{
//	int c = 5;
//	int d = 10;
//	get_max_int(c,d);
//}
//
//
//#define PUBL�C    //yorum sat�r� gibi...
//
//PUBL�C int g = 4;
//PUBL�C int square(int a)
//{
//	return a * a;
//	
//}
//
//
//
//
//// conditional compiling : 
//#define SA�D 100
//
//#if SA�D>-1  //if lojik k�sma sadece makrolar koyulabilir.
//
//
//#include <stdio.h>
//int foo(int);
//
//#else
//int fooo(int);
//#endif
//
//
////elif using
//#define USD         0
//#define EUR         1
//#define GBP         2
//#define JPY         3
//#define CURRENY     USD
//
//
//#if  CURRENCY==EUR
//int foo(int);
//#elif  CURRENCY==4
//int csd(int);
//#else
//int ksdlmvl(int);
//#endif


//ifdef using     nec define edilmi�se �al�l��r edilmezse �al��maz yani...

//#ifdef  NEC
//
//#define S�ZE 100
//
//int resortt(int, int);
//
//#endif

//using #if defined .... &   #if !defined ....

//#if defined NEC  && !defined SA�D
//int a[100];
//#endif


// kodu debug(do�rulama) yapmak i�in <assort.h> ve assort() fonksiyonu kullan�l�r assort iptali #DEF�NE NDEBUG,,


// multiple inclusion guard::::
//nutility.h:::
//#ifndef NUTILITY_H
//#define NUTILITY_H
//.....................
//...................            (�u an �oklu includa korumal� hale geldi.)
//...................
//#endif  (?)why : kulland�g�n header yine kulland�g�n ba�ka bi headeri kullan�yor olabilir...



// #undef �ni�lemci komutu var olan bir makroyu tan�m�s�z hale getirir...
//#define SA�D
//#undef  SA�D
//for example:  
// 
// 
// #define MACRO
//int main()
//{
//
//#ifdef MACRO
//	printf("said\n");
//
//#endif
//#undef MACRO
//
//#ifndef  MACRO
//
//	printf("sude")
//		;
//#endif
//}
////              (((((  warning #define square(a)        #undef square diye yap�l�r.           )))))));

// using #error preproccessor  
//for instance
//#include <stdio.h>
//
//#define NEC 
//
//#ifdef NEC 
//#error �N TH�S SUT�AT�ONS TH�S PROGRAM CAN NOT BE USED
//
//#endif
//int main()
//{
//
//}
//here are the predefined symbolic contstants in c totally six
//1 - ) __LINE__   HANG� SATIRDASIN% D(14)
//2 - ) __FILE__   HANG� DOSYADADASIN% S(MA�N.C)
//3 - ) __DATE__   HANG� TAR�HTE YAZILDI% S(SEPT 13 3003)
//4 - ) __TIME__   HANG� SAATTE YAZILDI% S(14:45:32)
//5 - )   __STDC__   CONTROL C L�KE A __cplusplus
//6 - ) __func__    k���k harflerle hangi fonksiyon icindesin

 // and it is over the topic of the preproccessor
