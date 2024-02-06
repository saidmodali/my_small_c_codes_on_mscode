#include <stdio.h>
#include "main.h"


////include ise kopyala yapýþtýr yapar main.h veya standard library
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
//#define PUBLÝC    //yorum satýrý gibi...
//
//PUBLÝC int g = 4;
//PUBLÝC int square(int a)
//{
//	return a * a;
//	
//}
//
//
//
//
//// conditional compiling : 
//#define SAÝD 100
//
//#if SAÝD>-1  //if lojik kýsma sadece makrolar koyulabilir.
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


//ifdef using     nec define edilmiþse çalýlþýr edilmezse çalýþmaz yani...

//#ifdef  NEC
//
//#define SÝZE 100
//
//int resortt(int, int);
//
//#endif

//using #if defined .... &   #if !defined ....

//#if defined NEC  && !defined SAÝD
//int a[100];
//#endif


// kodu debug(doðrulama) yapmak için <assort.h> ve assort() fonksiyonu kullanýlýr assort iptali #DEFÝNE NDEBUG,,


// multiple inclusion guard::::
//nutility.h:::
//#ifndef NUTILITY_H
//#define NUTILITY_H
//.....................
//...................            (þu an çoklu includa korumalý hale geldi.)
//...................
//#endif  (?)why : kullandýgýn header yine kullandýgýn baþka bi headeri kullanýyor olabilir...



// #undef öniþlemci komutu var olan bir makroyu tanýmýsýz hale getirir...
//#define SAÝD
//#undef  SAÝD
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
////              (((((  warning #define square(a)        #undef square diye yapýlýr.           )))))));

// using #error preproccessor  
//for instance
//#include <stdio.h>
//
//#define NEC 
//
//#ifdef NEC 
//#error ÝN THÝS SUTÝATÝONS THÝS PROGRAM CAN NOT BE USED
//
//#endif
//int main()
//{
//
//}
//here are the predefined symbolic contstants in c totally six
//1 - ) __LINE__   HANGÝ SATIRDASIN% D(14)
//2 - ) __FILE__   HANGÝ DOSYADADASIN% S(MAÝN.C)
//3 - ) __DATE__   HANGÝ TARÝHTE YAZILDI% S(SEPT 13 3003)
//4 - ) __TIME__   HANGÝ SAATTE YAZILDI% S(14:45:32)
//5 - )   __STDC__   CONTROL C LÝKE A __cplusplus
//6 - ) __func__    küçük harflerle hangi fonksiyon icindesin

 // and it is over the topic of the preproccessor
