#include <iostream>
using namespace std;

template <class T> 
T myMax(T x, T y) 
{ 
return (x > y) ? x : y; 
} 
int main() 
{ 
cout << myMax(3, 7) << endl; 
cout << myMax(3.0, 7.0) << endl; 
cout << myMax('g', 'e') << endl; 
return 0; 
}