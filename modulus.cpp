#include<iostream>
#include<conio.h>
using namespace std;

int modulus(int a, int b)
{
int hasil;
while (b > 0) {
hasil = a % b;
a = b;
a = hasil;
}
return (a);
 }

int main()
{
int a,b,hasil;

 cout<<"Masukkan angka pertama = ";
 cin>>a;
 cout<<endl;
 cout<<"Masukkan angka kedua = ";
 cin>>b;
 cout<<endl;

 hasil=a%b;
 cout<<"sisa hasil baginya : "<<hasil<<endl;


return 0;
}


