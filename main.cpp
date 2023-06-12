/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

string retornaOpcao(int i){
    switch(i){
        case 1:
            return "Smash Burguer";
        break;
        case 2:
            return "NFL Burguer";
        break;
        case 3:
            return "Basca Burguer";
        break;
        default:
            return "";
        break;
    }
    return "";
}

int main()
{
    string pedido[10], nome, endereco;
    int opcao = 0, p = 0;
    cout<< "Seu nome:"<<endl;
    cin>>nome;
    cout<< "Endereco:"<<endl;
    cin>>endereco;
    do{
        cout<<"Selecione uma opção:"<<endl;
        cout<<"1-Smash Burguer"<<endl;
        cout<<"2-NLF Burguer"<<endl;
        cout<<"3-Basca Burguer"<<endl;
        cout<<"0-Sair"<<endl;
        cin>>opcao;
        if(opcao){
            pedido[p] = retornaOpcao(opcao);
            p++;
        }
    }while(opcao != 0);
    
    cout<<"Seu pedido em nome de: "<<nome<<endl;
    cout <<"sera entregue no endereco: " << endereco<<endl;
    cout <<"Os lanches sao: " <<endl;
    for(int i = 0; i < p; i++){
        cout<<pedido[i]<<endl;
    }
    

    return 0;
}
