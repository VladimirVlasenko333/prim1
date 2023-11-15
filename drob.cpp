#include <iostream>

#include "drob.h"

//-------------------------------------------

DROB::DROB(int nn ,int dd)
{
     n=nn;
     d=dd;
     if(dd<=0)
     throw vvException("Error denominator <=  0"); /// Обработка ошибки
}


DROB  DROB::operator+(const DROB &inb)   //  Operator slogenie  drobey
{
  int a=this->n;   // chislitel   - first
  int b=this->d;   // znamenatel  - first
  int c=inb.n; 
  int d=inb.d;       // znamenatel  - second
   
  DROB rez(a*d+b*c,(int)b*d);
  return rez;
}
//-----------------------------------
// DROB  DROB::operator-(const DROB &inb)   //  Operator slogenie  drobey
// {
//   int a=this->n;   // chislitel   - first
//   int b=this->d;   // znamenatel  - first 
//   int c=inb.n; 
//   int d=inb.d;       // znamenatel  - second
   
//   DROB rez(a*d-c*b,b*d);
//   return rez;
// }

//-----------------------------------
DROB  DROB::operator*(const DROB &inb)   //  Operator umnogenie  drobey
{
  int a=this->n;   // chislitel   - first
  int b=this->d;    // znamenatel  - first
  int c=inb.n; 
  int d=inb.d;       // znamenatel  - second
   
  DROB rez(a*c,(int)b*d);
  return rez;
}

//-----------------------------------

void  DROB::operator=(const DROB &inb)   //  Operator =
{
  this->n=inb.n;
  this->d=inb.d;
}
//-----------------------------------
void  DROB::operator += (const DROB &inb)   //  Operator +=
{
  this->n+=inb.n;
  this->d+=inb.d;
}

//-----------------------------------
void DROB::operator++()   //  Operator increment
{
  this->n++;
  this->d++;
}
//-----------------------------------
void DROB::operator--()   //  Operator decriment
{
  this->n--;
  this->d--;
}

// -----     Operation  unary minus
void DROB::operator-()
{
  this->n=this->n*(-1);
}

//  -- operator otricania  perevorot drobi
void DROB::operator!()
{
  int p=n;
  n=d;
  d=p;
}

//--------------------------------------------------
void DROB::ShowRezult()
{
  std::cout<<"Numerator="<<n<<" Denumerator "<<d<< std::endl;
}
  