#include <iostream>
#include <string>
// Testando a integração do VSCode

using namespace std;

int main (void){
     
     string nome;
     int anoNascimento;
     cout << "Digite o seu nome: ";
     cin  >> nome;
     cout << "Bom dia, " << nome << ". Tenha um bom dia.";
     cout << endl;
     cout << nome << ", você nasceu em que ano? ";
     cin  >> anoNascimento;
     cout << "Considerando que estamos em 2023, você tem "
          << 2023-anoNascimento
          <<" anos, ou está proximo de fazer."
          << endl;
     
    
    return 0;


}
