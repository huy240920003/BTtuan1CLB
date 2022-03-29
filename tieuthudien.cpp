#include<iostream>
#include<iomanip>
using namespace std;
int main()
{

int sd,td;
cout<<"\n Moi nhap so KW dien tieu thu: ";
cin>>sd;
  if (sd<=100)
   td = 2000*sd;
  if (sd>101&&sd<=200)
   td = 100*2000 + (sd - 100)*2500;
  if (sd>201&&sd<=300)
   td = 100*2000 + 100*2500 + (sd-200)*3000;
  if (sd>300) 
   td = 100*2000 + 100*2500 + 100 * 3000 + (sd-300) * 5000;
cout<<"So tien dien trong thang phai tra la: "<<td*1.1<<" dong";
return 0;
}

