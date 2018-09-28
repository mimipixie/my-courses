#include<iostream>
using namespace std;
void towers(int,char,char,char);
int main()
{
int n;
cout<<"enter the no of disks : ";
cin>>n;
towers(n,'A','B','C');
return 0;
}
void towers(int n,char A,char B,char C)
{
if(n==1)
{
cout<<"move 1 from peg "<<A<<" to "<<C<<"\n";
return;
}
towers(n-1,A,C,B);
cout<<"move "<<n<<" from peg "<<A<<" to "<<C<<"\n";
towers(n-1,C,B,A);
}
