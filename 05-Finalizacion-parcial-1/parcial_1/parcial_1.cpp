#include <iostream>
#include <cmath>
using namespace std;

class MRUA
{
private:
	double velocidadInicial=0, velocidadFinal=0, aceleracion = 0, distancia = 0, tiempo=0;
	
public:
	MRUA(double _velocidadInicial, double _velocidadFinal, double _aceleracion, double _distancia, double _tiempo)
	{
		velocidadInicial = _velocidadInicial;
		velocidadFinal = _velocidadFinal;
		aceleracion = _aceleracion;
		distancia = _distancia;
		tiempo = _tiempo;
	}
	
	double calcularVelocidadFinal()
	{
		velocidadFinal = velocidadInicial + (aceleracion*tiempo);
		return velocidadFinal;
	}
	
	double calcularAceleracion()
	{
		aceleracion = (velocidadFinal-velocidadInicial)/tiempo;
			return aceleracion;
	}
	
	double calcularDistancia()
	{
		distancia = (velocidadInicial*tiempo)+((aceleracion*(tiempo*tiempo)/2));
		return distancia;
	}
	
	double calcularTiempo()
	{
		tiempo = (velocidadFinal-velocidadInicial)/aceleracion;
		return tiempo;
	}
	
	void mostrarVelocidadFinal()
	{
		cout << "La velocidad Final es: " << calcularVelocidadFinal() << endl;
	}
	
	void mostrarAceleracion()
	{
		cout << "La aceleracion es: " << calcularAceleracion() << endl;
	}
	
	void mostrarDistancia()
	{
		cout << "La distancia es: " << calcularDistancia() << endl;
	}
	
	void mostrarTiempo()
	{
		cout << "El tiempo es: " << calcularTiempo() << endl;
	}
};



void subMenuMRUA(){
	int opcion;
	do{
		cout<<"Ingrese la opcion deseada: "<<endl;
		cout<<"1. Velocidad Final"<<endl;
		cout<<"2. Distancia"<<endl;
		cout<<"3. Aceleracion"<<endl;
		cout<<"4. Tiempo"<<endl;
		cout<<"5. Salir"<<endl;
		cin>> opcion;
		double velocidadInicial=0, velocidadFinal=0, aceleracion = 0, distancia = 0, tiempo=0;
		
		switch (opcion)
		{
		case 1:
		{
			//
			break;
		}
		
		case 2:
		{
			//
			break;
		}
		
		case 3:
		{
			//
			break;
		}
		
		case 4:
		{
			//
			break;
		}
		case 5:
		{
			cout << "Saliendo del programa..." << endl;
			break;
		}
		
		default:
		{
			cout << "Opcion no valida. Por favor, ingrese una opcion valida." << endl;
		}
		}
	}while(opcion!=5);
}

class MRU
{
private:
	double velocidad=0;
	double distancia=0;
	double tiempo=0;
	
public:
	MRU(double _velocidad, double _distancia, double _tiempo)
	{
		velocidad = _velocidad;
		distancia = _distancia;
		tiempo = _tiempo;
	}
	
	double calcularVelocidad()
	{
		velocidad = distancia/tiempo;
		return velocidad;
	}
	
	double calcularDistancia(){
		distancia = velocidad*tiempo;
		return distancia;
	}
	
	double calcularTiempo(){
		tiempo = distancia/velocidad;
		return tiempo;
	}
		
	void mostrarVelocidad()
	{
		cout << "La velocidad recorrida en una distancia de: " << distancia << "m en un tiempo: " << tiempo << "s es: " << calcularVelocidad() << "m/s"  << endl;
	}
	
	void mostrarDistancia()
	{
		cout << "La Distancia recorrida en una velocidad de: " << velocidad << "m/s en un tiempo: " << tiempo << "s es: " << calcularDistancia() << "m"  <<  endl;
	}
	void mostrarTiempo()
	{
		cout << "El tiempo transcurrido en una distancia de: " << distancia << "m a una velocidad de: " << velocidad << "m/s es: " << calcularTiempo() <<  "s"  << endl;
	}
};

void subMenuMRU(){
	int opcion;
	do{
		cout<<"Ingrese la opcion deseada: "<<endl;
		cout<<"1. Velocidad Final"<<endl;
		cout<<"2. Distancia"<<endl;
		cout<<"3. Aceleracion"<<endl;
		cout<<"4. Tiempo"<<endl;
		cout<<"5. Salir"<<endl;
		cin>> opcion;
		double velocidad, distancia, tiempo;
		
		switch (opcion)
		{
		case 1:
		{
			cout << "Ingrese la distancia en metros (m): ";
			cin >> distancia;
			cout << "Ingrese el tiempo en segundos (s): ";
			cin >> tiempo;
			MRU mru(0,distancia,tiempo);
			mru.mostrarVelocidad();
			break;
		}
		
		case 2:
		{
			cout << "Ingrese la velocidad del objeto en metros (m/s): ";
			cin >> velocidad;
			cout << "Ingrese el tiempo en segundos (s): ";
			cin >> tiempo;
			MRU mru(velocidad,0,tiempo);
			mru.mostrarDistancia();
			break;
		}
		
		case 3:
		{
			cout << "OPCION NO VALIDA EN MRU"<<endl;
			break;
		}
		
		case 4:
		{
			cout << "Ingrese la distancia en metros (m) ";
			cin >> distancia;
			cout << "Ingrese la velocidad del objeto en metros/segundos (m/s): ";
			cin >> velocidad;
			MRU mru(velocidad,distancia,0);
			mru.mostrarTiempo();
			break;
		}
		case 5:
		{
			cout << "Saliendo del programa..." << endl;
			break;
		}
		
		default:
		{
			cout << "Opcion no valida. Por favor, ingrese una opcion valida." << endl;
		}
		}
	}while(opcion!=5);
}

int main(int argc, char **argv)
{
	int opcion;
	
	do
	{
		cout << "Menu de operaciones matematicas" << endl
			<< endl;
		cout << "Ingrese la opcion deseada: " << endl;
		cout << "1. MRU" << endl;
		cout << "2. MRUA" << endl;
		cout << "3. CAIDA LIBRE" << endl;
		cout << "4. SALIR" << endl;
		cin >> opcion;
		
		switch (opcion)
		{
		case 1:
		{
			subMenuMRU();
			break;
		}
		
		case 2:
		{
			//
			break;
		}
		
		case 3:
		{
			//
			break;
		}

		case 4:
		{
			cout << "Saliendo del programa..." << endl;
			break;
		}
		
		default:
		{
			cout << "Opcion no valida. Por favor, ingrese una opcion valida." << endl;
		}
		}
	} while (opcion != 4);
	
	return 0;
}

