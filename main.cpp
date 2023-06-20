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
        case 4:
            return "Coca Cola";
        break;
        case 5:
            return "Cerveja";
        break;
         case 6:
            return "Agua";
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
        cout<<"1-Smash Burguer - R$ 40,00"<<endl;
        cout<<"2-NLF Burguer - R$ 38,00"<<endl;
        cout<<"3-Basca Burguer - R$ 35,00"<<endl;
        cout<<"4-Coca Cola - R$ 8,00"<<endl;
        cout<<"5-Cerveja - R$ 10,00"<<endl;
        cout<<"6-Agua - R$ 5,00"<<endl;
        cout<<"0-Sair"<<endl;
        cin>>opcao;
        if(opcao){
            pedido[p] = retornaOpcao(opcao);
            p++;
        }
    }while(opcao != 0);
    
    cout<<"Seu pedido em nome de: "<<nome<<endl;
    cout <<"sera entregue no endereco: " << endereco<<endl;
    cout <<"Seu pedido eh: " <<endl;
    for(int i = 0; i < p; i++){
        cout<<pedido[i]<<endl;
    }
    

    return 0;
}
