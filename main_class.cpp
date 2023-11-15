#include  <iostream>

#include "drob.cpp"

using namespace std;

int main()
{
DROB  *dr2;
DROB  *dr1; 
int  num,denum;

num=3;denum=4; 

// cout<<"Input Numerator Denumerator"<<endl;
// cin>>num;
// cin>>denum;

try{
dr1= new DROB (num,denum);
}catch(const vvException& ex) 
{  cout<<ex.getMessage()<<endl;  return -1;}

try{
dr2= new DROB (1,2);
}catch(const vvException& ex)
{  std::cout<<ex.getMessage()<<std::endl;  return -1;}


 DROB rez= *dr1+*dr2;    // Slogenie drobi
 DROB rez1= *dr1**dr2;   // Umnogenie drobi i polychenie novov klacca

  -rez1;   //  Operation  unary minus

  rez.ShowRezult();
  !rez;                //  perevoro drobi
  rez.ShowRezult();

  rez=rez1;           // prisvivanie
  rez.ShowRezult();

  rez+=rez1;          // Sostavnoi operator
  rez.ShowRezult();

//  system("pause");

  return 0;
}