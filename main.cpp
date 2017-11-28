#include <iostream>
#include "superhero.h"

,73.75 me litil
,56.00 me storu
1.2975


using namespace std;

char start_menu(char &choose_operation);
void perform_operation(char &operation);
void list_heroes();


int main()
{
    char choose_operation = 'x';
    start_menu(choose_operation);
    perform_operation(choose_operation);


    return 0;
}

void list_heroes(){
    // VANTAR HJER

};


void perform_operation(char &operation){
    if(operation == '1'){

        ofstream fout;
        Superhero superhero;

        superhero.set_hero(superhero);

    }
    else if(operation == '2'){
//        list_heroes();
    }
};


char start_menu(char &choose_operation){
    do{
    cout << "1. Create a new hero." << endl
         << "2. List existing heroes." << endl << "Enter choice: ";
    cin >> choose_operation;

    if(choose_operation == '1'){
        return '1';
    }
    else if(choose_operation == '2'){
        return '2';
    }
    else{
        cout << "Invalid input, please choose one of the options given" << endl;
        return 'x';
    }
    }while(choose_operation != '1' && choose_operation != '2');

};
