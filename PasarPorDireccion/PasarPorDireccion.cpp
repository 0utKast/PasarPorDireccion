#if 0
//VT 90. COD 001.

#include <iostream>
#include <string>

void imprimirPorValor(std::string val) // El parámetro es una copia de str
{
    std::cout << val << '\n'; // imprime el valor a través de la copia
}

void imprimirPorReferencia(const std::string& ref) // el parámetro es una referencia que enlaza a str
{
    std::cout << ref << '\n'; // imprime el valor a través de la referencia
}

int main()
{
    std::string str{ "Hola, mundo" };

    imprimirPorValor(str); // pasa str por valor, hace una copia de str
    imprimirPorReferencia(str); // pasa str por referencia, no hace una copia de str

    return 0;
}
#endif





//VT 90. COD 002.

#include <iostream>
#include <string>

void imprimirPorValor(std::string val) // El parámetro es una copia de str
{
    std::cout << val << '\n'; // imprime el valor a través de la copia
}

void imprimirPorReferencia(const std::string& ref) // el parámetro es una referencia que enlaza a str
{
    std::cout << ref << '\n'; // imprime el valor a través de la referencia
}

void imprimirPorDireccion(const std::string* ptr) // el parámetro es un puntero que contiene la dirección de str
{
    std::cout << *ptr << '\n'; // imprime el valor a través del puntero de indirección
}

int main()
{
    std::string str{ "Hola, mundo" };

    imprimirPorValor(str); // pasa str por valor, hace una copia de str
    imprimirPorReferencia(str); // pasa str por referencia, no hace una copia de str
    imprimirPorDireccion(&str); // pass str por dirección, no hace una copia de str

    return 0;
}





#if 0

//VT 90. COD 003.

void imprimirPorDireccion(const std::string* ptr)
{
    std::cout << *ptr << '\n'; // imprime el valor a través del operador de indirección
}


//VT 90. COD 004.
imprimirPorDireccion(&str); // usa el operador de dirección (&) para obtener el puntero con la dirección de str






//VT 90. COD 005.
std::string str{ "Hola, mundo" };
imprimirPorDireccion(&str); // usa operador de dirección (&) para obtener el puntero con la dirección de str




//VT 90. COD 006.
#include <iostream>

void cambiarValor(int* ptr) // nota: ptr es un puntero a no constante en este ejemplo
{
    *ptr = 7; // cambia el valor a 7
}

int main()
{
    int x{ 3 };

    std::cout << "x = " << x << '\n';

    cambiarValor(&x); // pasamos la dirección de x a la función

    std::cout << "x = " << x << '\n';

    return 0;
}


//VT 90. COD 007.
void cambiarValor(const int* ptr) // nota: ptr es ahora un puntero a const
{
    *ptr = 6; // error: no podemos cambiar un valor constante
}


//VT 90. COD 008
#include <iostream>

void imprimir(int* ptr)
{
    std::cout << *ptr;
}

int main()
{
    int x{ 3 };
    imprimir(&x);

    int* miptr{};
    imprimir(miptr);
    
    std::cout << "prueba";

    return 0;
}




//VT 90. COD 09
#include <iostream>

void imprimir(int* ptr)
{
    if (ptr) // si ptr no es un puntero nulo
    {
        std::cout << *ptr;
    }
}

int main()
{
    int x{ 3 };

    imprimir(&x);
    imprimir(nullptr);

    return 0;
}





//VT 90. COD 010
#include <iostream>
void print(int* ptr)
{
    if (!ptr) // si ptr es un puntero nulo, se produce un retorno inmediato al llamador
        return;

    // si alcanzamos este punto, podemos asumir que ptr es válido
    // así que no necesitamos más comprobraciones

    std::cout << *ptr;
}
#endif



