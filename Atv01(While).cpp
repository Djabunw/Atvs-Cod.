1- Faça um programa que imprima na tela os números de 1 a 20, um abaixo do outro. Depois modifique o programa para que ele mostre os números um ao lado do outro.

=================================
Soluções;
1.

#include
using namespace std;

int main(){
int i = 1;

while (i <= 20){
  cout << i << endl;
  i++;
}
return 0;
}

=============================================
2.

#include
using namespace std;

int main(){
int i = 1;

while (i <= 20){
  cout << i <<" ";
  i++;
}
return 0;
}