	#include<iostream>
using namespace std;
class average

{
private:
     static int n;
     static int a[20];
     static float avg;
     static int temp;
public:
    static void output()
  {
 int a[20],n,i,sum=0,avg;
 cout<<"enter number of elements"<<endl;
 cin>>n;
 cout<<"enter the elements"<<endl;
 for(i=0;i<n;i++)
 {
 cin>>a[i];
 sum=sum+a[i];
 }
 avg=sum/n;
 cout<<"AVERAGE"<<avg<<endl;
}
 static void multiply(int multiplier)
 {
 int a[20],n,i;
 cout<<"enter the number of elements"<<endl;
 cin>n;
 cout<<"enter the elements"<<endl;
 for(i=0;i<n;i++)
 {
 cin>>a[i];
 a[i]*= multiplier;
 }
 cout<<"Value of each element after multiplying with multiplier"<<multiplier<<endl;
 }
 static void arraysort()
 {
 int a[20],n,i,j,temp;
 cout<<"enter the number of elements"<<endl;
 cin>>n;
 cout<<"enter the elements"<<endl;
 for(i=0;i<n;i++)
 { 
 cin>>a[i];
 }
 for(i=0;i<n;i++)
 {
 for(j=i+1;j<n;j++)
 {
 if(a[j]<a[i])
 {  temp = a[i];
     a[i]=a[j];
     a[j]=temp;
 }
 }
 }
 
 cout<<"THE SORTED ARRAY IN ASCENDING ORDER"<<endl;
 for(i=0;i<n;i++)
 {
 cout<<a[i]<<endl;
 }
 }
 };
 int average::n;
 int average::a[20];
 float average::avg;
 int average::temp;
 int main()
 {
 average a;
 a.output();
 a.multiplier();
 a.arraysort();
 
  return 0;
 }        
