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
    std::vector<Persona*>* p = new std::vector<Persona*>;
    p->push_back(new Persona("Rick"));
    p->push_back(new Persona("Jose"));

    Persona* m = p->at(0);
    m->saludar();

    for(int a = 0; a < (int)p->size(); a++) delete p[a];
    delete p;

    return 0;
}

/*#include<vector>
#include<iostream>
class Interface {
       public:
       Interface( int y ) : x(y) {}
       virtual ~Interface() {}
       virtual void f() = 0;
       int x;
};

class Derived_A : public Interface {
       public:
       Derived_A( int y ) : Interface(y) {}
       void f(){ return; }
};

class Derived_B : public Interface {
       public:
       Derived_B( int y ) : Interface(y) {}
       void f(){ return; }
};


int main()
{
       std::vector<Interface*> abstractObjects;
       int N = 5;
       for(int ii = 0; ii < N; ii++ )
       {
           abstractObjects.push_back( new Derived_A(ii) );
           abstractObjects.push_back( new Derived_B(ii) );
       }

       for(int ii = 0; ii < abstractObjects.size(); ii++ )
       {
           abstractObjects[ii]->f();
           std::cout << abstractObjects[ii]->x << '\t' << std::endl;
       }


       for(int ii = 0; ii < abstractObjects.size(); ii++ )
       {
           delete abstractObjects[ii];
       }

       return 0;
}
*/
