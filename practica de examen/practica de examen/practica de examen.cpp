// practica de examen.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

const int Precio = 50;
int precio_final = 0;
int cantidad_descuento = 0;


int main() {

    int interruptor = 1;
    int cantidad_cantidad_de_puertas = 0;


    do {

        std::cout << "digite la cantidad de puertas que quiere comprar" << std::endl;
        std::cin >> cantidad_cantidad_de_puertas;


        if (cantidad_cantidad_de_puertas > 10) {
            std::cout << "No se puede comprar mas de 10 articulos" << std::endl;

        }
        else if (cantidad_cantidad_de_puertas <= 0) {
            std::cout << "No se puede comprar 0 o numeros negativos articulos" << std::endl;

        }
        else {
            precio_final = Precio * cantidad_cantidad_de_puertas;

            if (cantidad_cantidad_de_puertas < 6) {
                std::cout << "Precio final es " << precio_final;
            }
            else if (cantidad_cantidad_de_puertas < 8) {
                cantidad_descuento = precio_final * 10 / 100;
                precio_final = precio_final - cantidad_descuento;
                std::cout << "Su precio final con descuento del 10% es de " << precio_final << std::endl;
                interruptor = 0;
            }
            else {
                cantidad_descuento = precio_final * 15 / 100;
                precio_final = precio_final - cantidad_descuento;
                std::cout << "Su precio final con descuento del 15% es de " << precio_final << std::endl;
                interruptor = 0;
            }

        }
    } while (interruptor);

    return 0;
}



// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
