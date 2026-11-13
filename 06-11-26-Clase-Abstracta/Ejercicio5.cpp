
#include <iostream>
#include <string>
using namespace std;

// Interfaz pura
class IMetodoPago {
public:

    virtual bool procesarPago(double monto) = 0;

    virtual ~IMetodoPago() {}
};

// Implementacion PayPal
class PayPal : public IMetodoPago {
public:

    bool procesarPago(double monto) override {

        cout << "Redirigiendo a PayPal... ";
        cout << "Pago de $" << monto << " aceptado" << endl;

        return true;
    }
};

// Implementacion TarjetaCredito
class TarjetaCredito : public IMetodoPago {
public:

    bool procesarPago(double monto) override {

        string numeroTarjeta;

        cout << "Ingrese el numero de tarjeta: ";
        cin >> numeroTarjeta;

        cout << "Procesando tarjeta... ";
        cout << "Pago de $" << monto << " realizado" << endl;

        return true;
    }
};

// Clase CarritoDeCompras
class CarritoDeCompras {
private:
    double montoTotal;

public:

    CarritoDeCompras(double _montoTotal) {
        montoTotal = _montoTotal;
    }

    void realizarCompra(IMetodoPago* metodo) {

        bool resultado = metodo->procesarPago(montoTotal);

        if (resultado) {
            cout << "Compra realizada exitosamente" << endl;
        }
        else {
            cout << "No se pudo realizar la compra" << endl;
        }
    }
};

// Programa principal
int main() {

    CarritoDeCompras carrito(250000);

    PayPal paypal;
    TarjetaCredito tarjeta;

    cout << "=== Pago con PayPal ===" << endl;

    carrito.realizarCompra(&paypal);

    cout << "\n=== Pago con Tarjeta ===" << endl;

    carrito.realizarCompra(&tarjeta);

    return 0;
}
