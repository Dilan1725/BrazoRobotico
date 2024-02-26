#include <iostream>

using namespace std;


class Televisor {
private:
    int volumen;
    int canal;

public:
    Televisor() {
        volumen = 50;  
        canal = 1;     
    }
    
    void subirVolumen() {
        if (volumen < 100) {
            volumen++;
            cout << "Volumen subido: " << volumen << endl;
        } else {
            cout << "El volumen ya está al máximo." << endl;
        }
    }

    
    void bajarVolumen() {
        if (volumen > 0) {
            volumen--;
            cout << "Volumen bajado: " << volumen << endl;
        } else {
            cout << "El volumen ya está al mínimo." << endl;
        }
    }

    
    void cambiarCanal(int nuevoCanal) {
        if (nuevoCanal >= 1 && nuevoCanal <= 100) {
            canal = nuevoCanal;
            cout << "Canal cambiado a: " << canal << endl;
        } else {
            cout << "Canal inválido." << endl;
        }
    }

    
    void mostrarDetalles() {
        cout << "Televisor = Volumen: " << volumen << ", Canal: " << canal << endl;
    }
};

int main() {
    system ("@cls||clear");
    Televisor miTelevisor;

    miTelevisor.mostrarDetalles();
    
    miTelevisor.subirVolumen();
    miTelevisor.subirVolumen();
    
    miTelevisor.bajarVolumen();

    miTelevisor.cambiarCanal(5);

    miTelevisor.mostrarDetalles();

    return 0;
}
