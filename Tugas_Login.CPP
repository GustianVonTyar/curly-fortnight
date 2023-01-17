#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include "kopf.h"

  main()
{
  char nem[100],pass[100] = "csodaszarvasunknak",tummunchen;
  int p,n;
  bool nilai;
  ulang:
  clrscr();
  serg();
  n = 0;
  nilai = false;
  cout<<"Username : ";gets(nem);
  cout<<"Password : ";
  for (p=0;p<=100;p++)
  {    tummunchen = getch();
       if ( tummunchen == pass[p])
       {
           cout<<"*";
           n++;
           nilai = true;

       }   else if (tummunchen == '\r')
           {
                   p = 100;

           }       else if (tummunchen == '\b')
                   {
                            cout<<"\b \b";
                            p = p - 2;
                            if (nilai == true)
                            {
                                n--;

                            }
                   }        else
                            {
                                cout<<"*";
                                nilai = false;
                            }
  }
  if ((strcmp(nem,"papo") == 0) && n == strlen(pass))
  {
     cout<<"\n"<<nem<<" telah berhasil login"<<endl;
  }  else
     {   cout<<nem<<" gagal login \nTekan enter untuk login kembali"<<endl;
         getch();
         goto ulang;
     }
  getch();
}
