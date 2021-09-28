#include <iostream>
using namespace std;

void num(int k)
 { try
{ if(k==0) throw k;
 else
 if(k>0) throw 'p';
 else
 if(k<0) throw 0.5375;
 cout<<"End of try block";
}
 catch(char g)
{ cout<<"Caught positive value";
}
catch(int j)
{ cout<<"Caught null value";
}
 catch(double f)
{ cout<<"Caught negative value";
}
 }
int main()
 { num(0);
num(5);
num(-3);
 }