#include <iostream>
#include <string>

using namespace std;

// Struct de la mascota
struct Mascota {
    string nombre;
    string especie;
    string raza;
    int edad;
    float peso;
};

// Procedimiento para registrar mascota
void registrarMascota(Mascota &m) {
    cin.ignore();

    cout << "\n===== REGISTRO DE MASCOTA =====\n";

    cout << "Nombre: ";
    getline(cin, m.nombre);

    cout << "Especie: ";
    getline(cin, m.especie);

    cout << "Raza: ";
    getline(cin, m.raza);

    cout << "Edad: ";
    cin >> m.edad;

    cout << "Peso (kg): ";
    cin >> m.peso;

    cout << "\nMascota registrada correctamente.\n";
}

// Procedimiento para mostrar mascota
void mostrarMascota(Mascota m) {
    cout << "\n===== DATOS DE LA MASCOTA =====\n";
    cout << "Nombre: " << m.nombre << endl;
    cout << "Especie: " << m.especie << endl;
    cout << "Raza: " << m.raza << endl;
    cout << "Edad: " << m.edad << " anios" << endl;
    cout << "Peso: " << m.peso << " kg" << endl;
}

// Función para calcular edad equivalente
int calcularEdadHumana(Mascota m) {
    return m.edad * 7;
}

// Procedimiento para clasificar por peso
void clasificarPeso(Mascota m) {
    cout << "\n===== CLASIFICACION POR PESO =====\n";

    if (m.peso < 5) {
        cout << "Mascota pequena\n";
    }
    else if (m.peso >= 5 && m.peso <= 20) {
        cout << "Mascota mediana\n";
    }
    else {
        cout << "Mascota grande\n";
    }
}

// Procedimiento para modificar datos
void modificarDatos(Mascota &m) {
    int opcion;

    cout << "\n===== MODIFICAR DATOS =====\n";
    cout << "1. Nombre\n";
    cout << "2. Especie\n";
    cout << "3. Raza\n";
    cout << "4. Edad\n";
    cout << "5. Peso\n";
    cout << "Seleccione una opcion: ";
    cin >> opcion;

    cin.ignore();

    switch(opcion) {
        case 1:
            cout << "Nuevo nombre: ";
            getline(cin, m.nombre);
            break;

        case 2:
            cout << "Nueva especie: ";
            getline(cin, m.especie);
            break;

        case 3:
            cout << "Nueva raza: ";
            getline(cin, m.raza);
            break;

        case 4:
            cout << "Nueva edad: ";
            cin >> m.edad;
            break;

        case 5:
            cout << "Nuevo peso: ";
            cin >> m.peso;
            break;

        default:
            cout << "Opcion invalida.\n";
    }

    cout << "Datos modificados correctamente.\n";
}

// Función principal
int main() {
    Mascota mascota;
    int opcion;
    bool registrada = false;

    do {
        cout << "\n===== REGISTRO DE MASCOTA =====\n";
        cout << "1. Registrar mascota\n";
        cout << "2. Mostrar mascota\n";
        cout << "3. Calcular edad equivalente\n";
        cout << "4. Clasificar por peso\n";
        cout << "5. Modificar datos\n";
        cout << "6. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch(opcion) {

            case 1:
                registrarMascota(mascota);
                registrada = true;
                break;

            case 2:
                if (registrada)
                    mostrarMascota(mascota);
                else
                    cout << "Primero debe registrar una mascota.\n";
                break;

            case 3:
                if (registrada)
                    cout << "\nEdad equivalente humana: "
                         << calcularEdadHumana(mascota)
                         << " anios\n";
                else
                    cout << "Primero debe registrar una mascota.\n";
                break;

            case 4:
                if (registrada)
                    clasificarPeso(mascota);
                else
                    cout << "Primero debe registrar una mascota.\n";
                break;

            case 5:
                if (registrada)
                    modificarDatos(mascota);
                else
                    cout << "Primero debe registrar una mascota.\n";
                break;

            case 6:
                cout << "\nSaliendo del programa...\n";
                break;

            default:
                cout << "Opcion invalida.\n";
        }

    } while(opcion != 6);

    cout <<"Rodrigo Adrian Barrios Monterroso" ;

    return 0;
}