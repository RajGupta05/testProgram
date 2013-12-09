//: c15: instrument2.cpp
// inheritance & upcasting 
#include<iostream>
#include<stdlib.h>
using namespace std;
enum note{middleC,Csharp,Eflat};//etc

class Instrument{

public:
        virtual void play(note) const {
             cout<<"instrument :: play " <<endl;
        }       
};

//wind objects are Instruments
//because they have the same interface:
class Wind:public Instrument {
      public :
      //redefine interface function:
      void play(note) const {
           cout<<"wind :: play" <<endl;
      }
};

void tune(Instrument& i){
     i.play(middleC);
}

int main(){
    Wind flute;
   /* ���wind :: play 
   ����ᷢ��Wind�� Instrument����������ת������ʹ��Wind�Ľӿڱ�խ����Wind��public�̳�Instrument������Instrument�Ľӿڣ�Wind ����
   */ 
    tune(flute);//upcasting    
    system("pause");
}
