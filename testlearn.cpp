#include <iostream>

using namespace std;
enum nation{China=10,Japan,America};
int main()
{
cout <<"hello cmake!!!"<< endl;
nation nation1,nation2;
nation1=(nation)(15);
cout<<int(nation1)<<endl;
typedef int A[6];
A b={3,6,5,7};
b[2]=0;
int W[]={2,6,5,8};
cin>>W[3];
cout<<W[0]<<endl<<W[3]<<endl<<b[2];
return 0;
}