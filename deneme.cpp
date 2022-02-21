#include <iostream>
#include <ctime>

using namespace std;


int main(){
  int x=0;
  int adet=0;
  float toplam=0;
  float ortalama=0;
  while(true){
  cout<<"Sayi Giriniz ";
  cin>>x;
   if(x%2==0){
   toplam+=x;
   adet+=1;
   cout<<"Toplam= "<<toplam<<endl;
   }
   if(x%2==1){
   ortalama=toplam/adet;
   cout<<"Ortalama: "<<ortalama<<endl;
   }
  }
  return 0;
}
