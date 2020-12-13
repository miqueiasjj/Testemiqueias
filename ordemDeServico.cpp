#include<iostream>
#include<vector>
#include<string>


using namespace std;




    
    char fun;
    int qual;
    int ex;
    struct ordemDeServico{
    string nome;
    string email;
    string assunto;
    string descricao;
    };

    
    vector <ordemDeServico> itensDaOrdem;
    
    int main (){
        
    
        while(true){
        
        
        struct ordemDeServico servico;
        
        cout << "Digite seu nome" << endl;
        getline(cin,servico.nome);
        cout << "Digite seu e-mail" << endl;
        getline(cin,servico.email);
        cout << "Digite o assunto da ordem de serviço" << endl;
        getline(cin,servico.assunto);
        cout << "Digite o detalhamento da ordem de serviço" << endl;
        getline(cin,servico.descricao);

        cout<<" ____"<<endl;
        cout<<"|                            |"<<endl;
        cout <<"|Digite:                     |\n|e-Editar                    |"
        "\n|d-Deletar                   |\n|l-Listar                    |"  << endl;
        cout<<"|____|"<<endl;
        cin >> fun;
        
        
        cin.ignore();
        
            if (fun == 'e')
                
    {       
                cout << "Segue valores"<<endl<<endl;
                itensDaOrdem. push_back (servico);
                for(int  i = 0; i< itensDaOrdem.size(); i++){
                cout << i <<'-'<< itensDaOrdem[i].nome <<endl << i <<'-'<<itensDaOrdem[i].email << endl << i <<'-'<<
                itensDaOrdem[i].assunto << endl << i <<'-'<< itensDaOrdem[i].descricao << endl<<endl;
                }

    
                cout<<"digite o valor que deseja editar:"<<endl;
                cin>> qual;
                
                
                std::cout << "Informe o novo nome:" << std::endl;
                std::cin >> itensDaOrdem[qual].nome;
            
             
            
                std::cout << "Informe o novo email:" << std::endl;
                std::cin >> itensDaOrdem[qual].email;
                
                std::cout << "Informe o novo assunto:" << std::endl;
                std::cin >> itensDaOrdem[qual].assunto;
            
             
            
                std::cout << "Informe o novo detalhamento:" << endl;
                std::cin >> itensDaOrdem[qual].descricao;
                cin.ignore();
                
                }else if(fun == 'd'){
                
                itensDaOrdem. push_back (servico);
                for(int  i = 0; i< itensDaOrdem.size(); i++){
                cout << i <<'-'<< itensDaOrdem[i].nome <<endl << i <<'-'<<itensDaOrdem[i].email << endl << i <<'-'<<
                itensDaOrdem[i].assunto << endl << i <<'-'<< itensDaOrdem[i].descricao << endl<<endl;
                }
                
                cout<<"Digite qual você que excluir"<<endl;
                cin>>ex;
                
                itensDaOrdem.erase (itensDaOrdem.begin()+ex);
                
                
                
                cin.ignore();
                    
                }
                
                else if(fun =='l'){
                itensDaOrdem. push_back (servico);
                for(int  i = 0; i< itensDaOrdem.size(); i++){
                cout << i <<'-'<< itensDaOrdem[i].nome <<endl << i <<'-'<<itensDaOrdem[i].email << endl << i <<'-'<<
                itensDaOrdem[i].assunto << endl << i <<'-'<< itensDaOrdem[i].descricao << endl<<endl;
                }
    }       
          
}
}
