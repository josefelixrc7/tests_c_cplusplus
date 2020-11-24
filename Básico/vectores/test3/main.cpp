#include <iostream>
#include <vector>
#include <string>

class Persona
{
    public:
        Persona(std::string n){std::cout << "\nSe creo persona."; nombre = n;}
        ~Persona(){std::cout << "\nSe fue persona";}
        void saludar(){std::cout << "\nHola. Soy " << nombre;}
    private:
        std::string nombre;
};

int main()
{
    std::vector<Persona*> p;
    p.push_back(new Persona("Rick"));
    p.push_back(new Persona("Jose"));

    Persona* m = p[0];
    m->saludar();

    for(int a = 0; a < (int)p.size(); a++) delete p[a];
    return 0;
}
