#include<iostream.h>
#include<conio.h>
int main()
{
int a,b,c,d,n,sum;
clrscr();

cout<<"enter the three digit number ";
cin>>n;

if(n<=500)
a=n/100;
b=n%100;
c=b/10;
d=b%10;
n=(a*a*a)+(c*c*c)+(d*d*d);
{
cout<<"result of 2 digit number cube: "<<n<<endl;
}

getch();
return 0;
}