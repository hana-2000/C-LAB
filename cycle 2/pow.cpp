#include<iostream>
#include<cmath>
using namespace std;
double power(double n,int p)
{
cout<<"Using arguments double n and int p\n";
double ans=1,i;
for(i=0;i<p;i++)
{
ans*=n;
}
return ans;
}
int power(int n,int p)
{
cout<<"Using arguments int n and int p \n";
int ans=1,i;
for(i=0;i<p;i++)
{
ans*=n;
}
return ans;
}
long int power(long int n,int p)
{
cout<<"Using arguments long int n and int p\n";
long int ans =1,i;
for(i=0;i<p;i++)
{
ans*=n;
}
return ans;
}
float power(float n,int p)
{
cout<<"Using arguments float n and int p\n";
float ans =1,i;
for(i=0;i<p;i++)
{
ans*=n;
}
return ans;
}
double power(double n, int p,char ch)
{
cout<<"Using arguments double n,int p and char ch\n".
double ans=1;
for(int i=0;i<p;i++)
{
ans*=n;
}

if((ch=='y')||(ch='Y'))
{
ans*=n
}
return ans
}


int main()
{
cout<<"Enter n in double and p in int"<<endl;
double n;
int p;
cin>>n>>p;
cout<<power(n,p)<<endl;
cout<<"Enter n1 in  int and p in int"<<endl;
int n1;
cin>>n1>>p;
cout<<power(n1,p)<<endl;
cout<<"Enter n2 in long int and p in int"<<endl;
long int n2;
cin>>n2>>p;
cout<<power(n2,p)<<endl;
cout<<"Enter n3 in float and p in int"<<endl;
float n3;
cin>>n3>>p;

cout<<power(n3,p)<<endl;
cout<<"Enter n4 in double,p in int and ch in char "
double n4;
cin>>n4>>p;
cout<<"Do you wantt to continue?(y||n)";
char ch;
cin>>ch;
cout<<power(n4,p,ch)<<endl;

return 0;
}
