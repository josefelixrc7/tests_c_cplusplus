#include <iostream>

using namespace std;

int main()
{
    // Crear una biblioteca sencilla con struct y union

    struct tipoLibro
    {
        int codigo;
        char titulo[100];
        char autor[50];
        char editorial[100];
        int anno;
    };
    struct tipoRevista
    {
        int codigo;
        char nombre[100];
        int anno;
    };
    struct tipoTesis
    {
        char* codigo;
        char autor[50];
        int anno;
        char tema[50];
        char titulo[100];
    };

    enum tipoGen
    {
        libro,
        revista,
        tesis
    };

    struct copiaEjemplar
    {
        tipoGen tipoSel;
        union
        {
            tipoLibro miLibro;
            tipoRevista miRevista;
            tipoTesis miTesis;
        };
    };

    copiaEjemplar UDO[5];

    UDO[0].tipoSel = tesis;
    UDO[0].miTesis.codigo = new char[9];
    UDO[0].miTesis.codigo = "IS-2025\0";
    /*UDO[0].miTesis.autor = "Jose Felix Rivas Carrasco";
    UDO[0].miTesis.anno = "2018";
    UDO[0].miTesis.tema = "Informática";
    UDO[0].miTesis.titulo = "Desarrollo de un sistema de información para el dictado de cursos";
*/
    cout << UDO[0].tipoSel << endl;
    cout << UDO[0].miTesis.codigo << endl;
    /*cout << UDO[0].miTesis.autor << endl;
    cout << UDO[0].miTesis.anno << endl;
    cout << UDO[0].miTesis.tema << endl;
    cout << UDO[0].miTesis.titulo << endl;*/

    return 0;
}
