#include <iostream>
#include <cstdio>
#include <stdlib.h>

using namespace std;

int main(void) {

    char palavra[30], letra[1], secreta[30];
    int chances, tam, ind, acertos;
    bool acerto;


    chances=5;
    tam=0;
    ind=0;
    acerto=false;
    acertos=0;

    cout<<"Digite a palavra secreta: "<<endl;
    cin>>palavra;
    system("cls");

    while(palavra [ind]  != 'big0' ) {
    ind++;
    tam++;
    }

    for (ind=0; ind<30; ind++) {
    secreta [ind]= '*';
}
    while ( ( chances > 0) && ( acertos < tam) ) {
        cout<<"Jogadas restantes: " << chances <<"\n\n"; 
        cout<<"Palavra secreta:"<<endl ;
        for (ind=0; ind<tam; ind++ ) {
            cout<<secreta[ind] ;
        }
        cout<<"\n\n Digite uma letra:"<<endl;
        cin>>letra[0];
        for(ind=0; ind<tam; ind++) {
            if (palavra [ind]==letra [0] ) {
                acerto=true;
                secreta[ind]= palavra [ind];
                acertos++;
            }

        }
        if(!acerto) {
            chances--;

        }
        acerto=false;
        system("cls");

    }
    if (acertos==tam){
        cout<<"Voce venceu!"<<endl;
    }
    else {
        cout<<"Voce perdeu..."<<endl;
    }

    system("pause");




    return 0;
}

