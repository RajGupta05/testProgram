#include<iostream>
#include<stdlib.h>
using namespace std;
class A
{
public:
  int get() const{return i;}
  void set(int x){
       this->i=x;cout<<"this ָ�뱣����ڴ��ַΪ��"<<this<<endl;
  }
private:
         int i;
};
int main()
{
    A a;
    a.set(9);
    cout<<"����a���ڵ��ڴ��ַ"<<&a<<endl;
    cout<< "����a�������ֵ"<<a.get()<<endl;
    cout<<endl;
    A b;
    b.set(99); 
    cout<<"����b���ڵ��ڴ��ַ"<<&b<<endl;
    cout<<"����b��ֵ ��" <<b.get()<<endl;
    system("pause");
    return 0; 
}
