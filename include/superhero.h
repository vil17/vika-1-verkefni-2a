#ifndef SUPERHERO_H
#define SUPERHERO_H
#include <iostream>
#include <fstream>
using namespace std;


class Superhero
{
    public:
        Superhero(); //def constructor
        Superhero(string name, int age, char superpower);

        char start_menu(char &choose_operation);
        void set_hero(Superhero superhero);

        friend ostream& operator << (ostream& outs, Superhero superhero);

    private:
        string _name;
        int _age;
        char _superpower;
};

#endif // SUPERHERO_H
