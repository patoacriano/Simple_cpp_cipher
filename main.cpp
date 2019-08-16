#include <iostream>
#include <string>

using namespace std;

int main()
{
  int i,x,y;
  string str;
  cout<<endl<<"Digite uma mensagem: ";
  getline(cin,str)
  cout<<endl<<"Escolha um numero de criptografia: ";
  cin>>x;
  cout<<endl<<"Voce deseja\n[1]-Criptografar\n[2]-Descriptografar\n>";
  cin>>y;
  if(y==1){
    for (i = 0; (i<100 && str[i]!='\0');i++)
    {
      str[i] = str[i] + x;
    }
  }
  if(y==2){
    for (i =0; (i<100 && str[i]!='\0');i++)
    {
      str[i] = str[i] - x;
    }
  }
  cout<<endl<<str;

  return 0;
}
