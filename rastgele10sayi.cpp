#include <iostream>
#include <ctime>

using namespace std;


int main(){
  int toplam=0;
  int adet=0;
  int x=0;
  srand(time(0));
  for(int i=1;i<=10;i++){
   x=rand()%100;
   if (x%2==1){
    adet+=1;
    toplam+=x;
    }
  }
cout<<"Toplam="<<toplam<<"\t Tek Sayi Adeti:"<<adet;
}
