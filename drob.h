#include <iostream>

using std::string;

//----------------------------------------
class DROB{
  private:
  int n;   // Chislitel
  int d;   // Znamenatel

  public:

  DROB(int nn ,int dd);

  DROB operator + (const DROB &b) ;
  DROB operator * (const DROB &b) ;
  //DROB operator - (const DROB &b) ;  // vicitanie drobi

  
  void operator = (const DROB &b) ;
  void operator += (const DROB &b) ; // Sostavhoe prisvaivanie

  void  operator ++ ();
  void  operator -- ();
  void  operator - ();
  void  operator ! ();


  void ShowRezult();
  

};


//-------------------------------------------------------------------
class vvException
{
private:
    std::string message;
public: 
//    vvException(std::string message): message{message}{}
    vvException(std::string messageIn)
    {
      message=messageIn;
    }
     
    std::string getMessage() const {return message;}
};

