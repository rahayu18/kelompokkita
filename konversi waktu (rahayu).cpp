#include <iostream.h>
#include <conio.h>

main()
{
	int j,m,d,e,s;

   cout<<"Masukan detik : ";cin>>e;

   j=e/3600;
   s=e%3600;
   m=s/60;
   d=s%60;

   cout<<j<<" : "<<m<<" : "<<d;

   getch();
}

