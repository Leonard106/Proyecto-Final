#include <iostream>
#include <wchar.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
	srand(time(NULL));
    int respuesta=0;
    int golesP=rand()%50;
	int asistenciasP=rand()%20;
	int partidosP=1+rand()%(51-1);
	int titulosP=rand()%6;
        cout<<"----------Soccer Player Career 2023 ----------"<<endl<<endl;
        cout<<"Bienvenido a SPC23"<<endl<<endl;
        cout<<"Seleccione una opci�n para continuar"<<endl<<endl;
        cout<<"1.Salir"<<endl;
        cout<<"2.Jugar"<<endl;
        cout<<"3.Controles"<<endl;
        cout<<"4.Sobre el juego"<<endl;
        cin>>respuesta;
		 
switch(respuesta)
        {
            case 2:
            cout<<"Seleciona la nacionalidad con la que quieres jugar"<<endl;//Poner la historia
            cout<<"1.Salir del juego"<<endl;
            cout<<"2.Mexicano"<<endl;
            cout<<"3.Argentino"<<endl;
            cout<<"4.Español"<<endl;
            cin>>respuesta;
            switch(respuesta)
            {
            case 2:
            cout<<"Seleciona la edad con la que quieres debutar"<<endl;//Poner la historia
            cout<<"1.Salir del juego"<<endl;
            cout<<"2. 18 años"<<endl;//inves como poner ñ
            cout<<"3. 20 años"<<endl;
            cout<<"4. 22 años"<<endl;
            cin>>respuesta;
            switch(respuesta)
            {
            case 2:
            cout<<"En que pais deseas empezar"<<endl;//Poner la historia
            cout<<"1.Salir del juego"<<endl;
            cout<<"2. México"<<endl;//inves como poner ñ
            cout<<"3. Estados Unidos"<<endl;
            cout<<"4. España"<<endl;
            cin>>respuesta;
            
            break;
            
            
            case 3:
            cout<<"En que pais deseas empezar"<<endl;//Poner la historia
            cout<<"1.Salir del juego"<<endl;
            cout<<"2. México"<<endl;//inves como poner ñ
            cout<<"3. Estados Unidos"<<endl;
            cout<<"4. España"<<endl;
            cin>>respuesta;
            break;
            
            
            case 4:
            cout<<"En que pais deseas empezar"<<endl;//Poner la historia
            cout<<"1.Salir del juego"<<endl;
            cout<<"2. México"<<endl;//inves como poner ñ
            cout<<"3. Estados Unidos"<<endl;
            cout<<"4. España"<<endl;
            cin>>respuesta;
            break;
            
            
            case 1:
                cout << "Saliendo del programa." << endl;
                return 0;  // Sale del programa
            default:
                cout << "Te equivocaste" <<endl<<endl;
                cout << "Game over" <<endl<<endl; 
            
            }
            break;
            
            
            case 3:
            cout<<"Seleciona la edad con la que quieres debutar"<<endl;//Poner la historia
            cout<<"1.Salir del juego"<<endl;
            cout<<"2. 17 años"<<endl;//inves como poner ñ
            cout<<"3. 19 años"<<endl;
            cout<<"4. 21 años"<<endl;
            cin>>respuesta;
            switch(respuesta)
            {
            case 2:
            cout<<"En que pais deseas empezar"<<endl;//Poner la historia
            cout<<"1.Salir del juego"<<endl;
            cout<<"2. Argentina"<<endl;//inves como poner ñ
            cout<<"3. Brasil"<<endl;
            cout<<"4. Uruguay"<<endl;
            cin>>respuesta;
            break;
            
            
            case 3:
            cout<<"En que pais deseas empezar"<<endl;//Poner la historia
            cout<<"1.Salir del juego"<<endl;
            cout<<"2. Argentina"<<endl;//inves como poner ñ
            cout<<"3. Brasil"<<endl;
            cout<<"4. Uruguay"<<endl;
            cin>>respuesta;
            break;
            
            
            case 4:
            cout<<"En que pais deseas empezar"<<endl;//Poner la historia
            cout<<"2. Argentina"<<endl;//inves como poner ñ
            cout<<"3. Brasil"<<endl;
            cout<<"4. Uruguay"<<endl;
            cin>>respuesta;
            break;
            
            
            case 1:
                cout << "Saliendo del programa." << endl;
                return 0;  // Sale del programa
            default:
                cout << "Te equivocaste" <<endl<<endl;
                cout << "Game over" <<endl<<endl; 
            
            }
            break;
            
            
            case 4:
            cout<<"Seleciona la edad con la que quieres debutar"<<endl;//Poner la historia
            cout<<"1.Salir del juego"<<endl;
            cout<<"2. 16 años"<<endl;//inves como poner ñ
            cout<<"3. 18 años"<<endl;
            cout<<"4. 20 años"<<endl;
            cin>>respuesta;
            switch(respuesta)
            {
            case 2:
            cout<<"En que pais deseas empezar"<<endl;//Poner la historia
            cout<<"1.Salir del juego"<<endl;
            cout<<"2. España"<<endl;//inves como poner ñ
            cout<<"3. Francia"<<endl;
            cout<<"4. Alemania"<<endl;
            cin>>respuesta;
            break;
            
            
            case 3:
            cout<<"En que pais deseas empezar"<<endl;//Poner la historia
            cout<<"1.Salir del juego"<<endl;
            cout<<"2. España"<<endl;//inves como poner ñ
            cout<<"3. Francia"<<endl;
            cout<<"4. Alemania"<<endl;
            cin>>respuesta;
            break;
            
            
            case 4:
            cout<<"En que pais deseas empezar"<<endl;//Poner la historia
            cout<<"2. España"<<endl;//inves como poner ñ
            cout<<"3. Francia"<<endl;
            cout<<"4. Alemania"<<endl;
            cin>>respuesta;
            break;
            
            
            case 1:
                cout << "Saliendo del programa." << endl;
                return 0;  // Sale del programa
            default:
                cout << "Te equivocaste" <<endl<<endl;
                cout << "Game over" <<endl<<endl; 
            
            }
            break;
            break;
            
            
            case 1:
                cout << "Saliendo del programa." << endl;
                return 0;  // Sale del programa
            default:
                cout << "Te equivocaste" <<endl<<endl;
                cout << "Game over" <<endl<<endl; 
            
            }
            break;
            
            
            
            
            
            
            
            
            
            
            case 3:
            cout<<"----Controles----"<<endl;
            cout<<"Para salir del juego en cualquier momento solo debes pulsar el numero 1+Enter"<<endl;
            cout<<"Para seleccionar la primer ación debes pulsar el numero numero 2+Enter"<<endl;
            cout<<"Para seleccionar la primer ación debes pulsar el numero numero 3+Enter"<<endl;
            cout<<"Para seleccionar la primer ación debes pulsar el numero numero 4+Enter"<<endl;
            cout<<"No te equivoques ya que el juego terminara ;)"<<endl;
            cout<<"Ademas en todo momento se mostrara el numero que debes pulsar antes de la opcion"<<endl<<endl;
            cout<<"1. Salir del juego"<<endl<<endl;
            cout<<"2. Regresar al menu"<<endl<<endl;//repetir todo el codigo
            cin>>respuesta;
            switch(respuesta)
            {
                case 2:
                return main();
                break;
                case 1:
                    cout << "Saliendo del programa." << endl;
                return 0;  // Sale del programa
                default:
                    cout << "Te equivocaste" <<endl<<endl;
                    cout << "Game over" <<endl<<endl; 
            }
            break;
            case 4:
            cout<<"Este es un juego de rol en donde podras tomar desisiones que guiaran la carrera de un jugador de fubol soccer"<<endl<<endl;
            cout<<"1. Salir del juego"<<endl<<endl;
            cout<<"2. Regresar al menu"<<endl<<endl;//repetir todo el codigo
            cin>>respuesta;
            switch(respuesta)
            {
                case 2:
                return 0;
                break;
                case 1:
                    cout << "Saliendo del programa." << endl;
                return 0;  // Sale del programa
                default:
                    cout << "Te equivocaste" <<endl<<endl;
                    cout << "Game over" <<endl<<endl; 
            }
            break;
            case 1:
                cout << "Saliendo del programa." << endl;
                return 0;  // Sale del programa
            default:
                cout << "Te equivocaste" <<endl<<endl;
                cout << "Game over" <<endl<<endl; 
            
        }
    
    return 0;
} 
