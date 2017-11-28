#include "superhero.h"

Superhero::Superhero() //std constrictor
{
    _name = "";
    _age = 0;
    _superpower = 'n';

}

Superhero::Superhero(string name, int age, char superpower) //std constrictor
{
    _name = name;
    _age = age;
    _superpower = superpower;

}



;

void Superhero::set_hero(Superhero superhero){
    cout << "Please enter hero name: ";
    cin >> superhero._name;
    cout << "Please enter hero age: ";
    cin >> superhero._age;
    cout << "Please enter the heroes superpower: ";
    cin >> superhero._superpower;
}

ostream& operator << (ostream& outs, Superhero superhero)
{
    outs << superhero._name << " " << superhero._age << " " << superhero._superpower;

    return outs;
};
