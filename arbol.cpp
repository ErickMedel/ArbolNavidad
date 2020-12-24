#include <iostream>
using namespace std;
int main(){
int caracteres=1,espacios=6,contador=1;
for (int i=1; i!=7; i++) {
for (int j=espacios; j!=1; j--) {
cout<<" ";
}
for (int k=0; k!=caracteres; k++) {
cout<<contador;
}
caracteres=caracteres+2;
espacios=espacios-1;
contador=contador+1;
cout<<endl;
}
for (int l=1; l!=4; l++) {
cout<<"   ¡!¡!¡"<<endl;
}
}
