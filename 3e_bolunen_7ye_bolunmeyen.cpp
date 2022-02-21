#include <iostream>
#include <ctime>

using namespace std;


int main(){
  int x=0;
  int adet=0;
  for(int j=1;j<=100;j++){
    x+=1;
    if(x%3==0 && x%7!=0){
      adet+=1;
    }
  }
  cout<<"3'e Bolunen 7'ye Bolunmeyen Sayi Adedi:"<<adet;
}
