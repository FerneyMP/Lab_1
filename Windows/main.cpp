#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main()
{
    //Espacio para la definicion de los distintos tipo de variables:
    int inicio, ejercicio;
    int A,B,C,N,F, horas, minutos, segundos, contador=1, acumulador =1, acumulador_2 = 1;
    int aleatorio, factorial;
    float W,X,Y,Z, contador_2 =1;
    float Euler ,Fact =1, acumulador_3 =1, acumulador_4;
    bool found= false;
    short int n,a,b,c;

    cout << "   |Ingrese 1 para ejercicios|"<< endl <<"   |2 para problemas| "<<endl << "   ----> ";
    cin >> inicio;
    if (inicio == 1){
        cout << endl << "Ingrese un numero para elegir el ejercicio: ";
        cin >> ejercicio;
        cout << endl;
        switch (ejercicio) {

        case 1:
            break;

        case 2:
            //Programa que retorna si un numero ingresado es par o impar
            cout << "Ingrese un numero: ";
            cin >> N;
            if (N % 2 == 0) cout << "El numero ingresado "<<N<< " es par."<< endl;
            else cout << "El numero ingresado: "<<N<< " es impar."<< endl;
            break;

        case 3:
            break;

        case 4:
            //El programa retorna el mayor entre dos numeros
            cout<<"Ingrese un numero A: ";
            cin >> A;
            cout<<"Ingrese un numero B: ";
            cin >>B;
            if(A>B) cout << "El numero ingresado: " << A << " es mayor que: " << B << endl;
            else if (B>A) cout << "El numero ingresado: " << B << " es mayor que: " << A << endl;
            else cout << "Ambos numeros son iguales..." << endl;
            break;
        case 5:
            break;

        case 6:
            //Programa que tiene como base un numero A y lo eleva a un numero B
            cout<<"Ingrese un numero A: ";
            cin >> A;
            cout<<"Ingrese un numero B: ";
            cin >>B;
            for (;contador <=B;contador++){
                acumulador = (acumulador*A);
            }
            cout << "La numero: "<<A<< " elevado a la: "<<B<< " es: "<< acumulador <<endl;
            break;

        case 7:
            break;

        case 8:
            //Programa que muestra en pantalla el factorial (n!) de un numero
            cout << "Ingrese un numero: ";
            cin >> factorial;
            for (;factorial>=1;factorial--){acumulador = acumulador*factorial;
                }
            cout << "El factorial del numero: "<< A << "! es: "<< acumulador<< endl;
            break;

        case 9:
            break;

        case 10:
             //Programa que imprime todos los multiplos del 1 al 100 de un numero ingresado N
            cout << "Ingrese un numero: ";
            cin >> A;
            B = 1;
            // idea usar el modulo residuo 0
            for(;B<=100;B++){
                if (B%A==0) cout << "Multiplos de " << A << " menos que 100: " << B << endl;
            }

            break;

        case 11:
            break;

        case 12:
            //Programa que imprime las potencias de un numero N¹ hasta N⁵
            cout << "Ingrese un numero N: ";
            cin >> N;
            A = 5;
            for (;contador<=A;contador++){
                acumulador = (acumulador*N);
                cout << N << " ^ " << contador << " = " << acumulador << endl;
            }

            break;

        case 13:
            break;

        case 14:
            //Programa que impre en pantalla dos filas, una del 1 al 50 y la otra del 50 al 1

            A = 1;
            B = 50;
            F = 1;   // ----> Filas
            for (;F<=50;F++){
                cout << A++ << " " << B-- << endl;
                }
            break;

        case 15:
            break;

        case 16:
            //Programa que imprime el promedio de una secuencia de numeros hasta que el usuario ingrese el 0
            cout << "Ingrese un numero: "; cin >>A;
            contador; // ---> Contador
            N = 0; // ---> Acumulador de suma
            for (;A!=0;contador++){
                N += A;
                cout << "Ingrese un numero: "; cin >>A;
            }
            B = N/(contador-1);
            cout << "El promedio de los numeros ingresados es: " << B <<endl;

            break;

        case 17:
            break;

        case 18:
            //Programa que imprime en pantalla si un numero es un cuadrado perfecto

            cout << "Ingrese un numero: "; cin >> n;
            B= 1;

            for(;B<n;B++){
                if (B*B==n){
                    found = true;
                    break;
                }
            }
            if(found==true){
                cout << n << " es un cuadrado perfecto." << endl;
            }
            else
                cout << n << " NO es un cuadrado perfecto." << endl;

            break;

        case 19:
            break;

        case 20:
            // Programa que determina si un numero es o no es un palindromo
            break;

        case 21:
            break;

        case 22:
            // Programa que convierte una cantidad entera ingresa a un fomarto de horas:minutos:segundos
            cout << "Ingrese una cantidad entera: "; cin >> A;

            horas = (A/3600);
            minutos = (A/60)%60;
            segundos = (A%60);
            cout << "H: M: S"<< endl;
            cout << horas << ":" << minutos << ":" << segundos << endl;

            break;

        case 23:
            break;

        case 24:
            // Programa que imprime un cuadro hecho de + con el valor de un entero ingresado
            cout<< "Ingrese un valor: "; cin >> A;
            B = 1; // ---> Fila
            N = 1; // ---> Columna
            for(;B<=A;B++){
                for(;N<=A;N++){
                    if (B<=N){
                        if (B==2 && N==2){
                            cout<< "  ";}
                        else if (B==3 && N==3){
                            cout << "  ";
                        }
                        else if (B==2 && N==3){
                            cout << "  ";
                        }
                        else{
                        cout << "+ ";}
                        }
                    else if (B>=N){
                        if (B==3 && N==2){
                            cout << "  ";
                        }
                        else
                        cout << "+ ";
                    }
                }
                N = 1;
                cout << endl;
            }
            break;

        case 25:
            break;

        case 26:
            //Programa que imprime uno de los tres tipos de triángulos(Isósceles, equilátero, escaleno) dadas tres entradas enteras.
           cout << "Ingrese un valor a: "; cin >> a;
           cout << "Ingrese un valor b: "; cin >> b;
           cout << "Ingrese un valor c: "; cin >> c;
           cout << endl;
           while (a<=0 || b<=0 || c<=0){
               cout << "Tenga en cuenta que para formar un triangulo los valores de a, b y c deben ser mayor a 0, intente nuevamente!" << endl << endl;
               cout << "Ingrese un valor a: "; cin >> a;
               cout << "Ingrese un valor b: "; cin >> b;
               cout << "Ingrese un valor c: "; cin >> c;
           }
           if (a!=b && b!=c && a!=c ){
               if(a+b>c && a+c>b && b+c>a) cout << "Se forma un triangulo Escaleno." << endl;
               else
                cout << "Las longitudes ingresadas no forman un triangulo." << endl;
           }

           else if((a==b && a!=c && b!=c) || (a==c && a!=b && b!=c)){
               if(a+b>c && a+c>b && b+c>a) cout << "Se forma un triangulo Isosceles." << endl;
               else
                cout << "Las longitudes ingresadas no forman un triangulo." << endl;

           }
           else if(a==b && a==c && b==c){
               if(a+b>c && a+c>b && b+c>a) cout << "Se forma un triangulo Equilatero." << endl;
               else
                cout << "Las longitudes ingresadas no forman un triangulo." << endl;
           }
            break;

        case 27:
            break;

        case 28:
            // Programa que encuentra una apriximación de pi

            break;

        case 29:
            break;

        case 30:
            // Programa que genera numeros aleatorios pidiendo a un usuario que adivine entre el rango 1 a 100.

            srand(time(NULL));
            aleatorio =rand()%100;
            for(;B!=aleatorio;contador++){
                cout << "Intente adivinar el numero oculto en el rango de 1 a 100: "; cin >> B;
                if (B>aleatorio) cout << "El numero es mayor."<<endl;
                else if (B<aleatorio) cout <<"El numero es menor."<<endl;
                else
                    cout << "Adinivaste!\t Tus intentos fueron: " << contador << endl;

            }
            //cout << "Tus intentos fueron: " <<contador << endl;

            break;

        }
    }

    // Seccion de problemas

    else if(inicio == 2){
        cout << "Ingrese un numero para elegir el ejercicio: ";
        cin >> ejercicio;
        switch (ejercicio){

        case 1:
            break;

        case 2:
            break;

        case 3:
            break;

        case 4:
            break;

        case 5:
            //Programa que imprime una figura romboidal

           cout << "Ingrese un numero impar: "; cin >> N; // ---> Numero de entrada
           //F // ---> Filas
           //C // ---> Columnas
           while(N%2 ==0){
               cout << "El numero ingresado es par, intente nuevamente: " << endl;
               cout << "Ingrese un numero impar: "; cin >> N;
           }

           for(F=1;F<=N;F=F+2){
               for(C=1;C<=N-F;C=C+2)
                   cout << " ";
                   for(C=1;C<=F;C++)
                       cout<<"*";
                       cout<< endl;


           }



           for(F=N-2;F>=0;C=C+2){
               for(C=1;C<=N-F;C=C+2)
                   cout << " ";
                   for(C=1;C<=F;C++)
                       cout << "*";
                       cout << endl;



            }
            break;

        case 6:
            //Programa que aproxima el valor del numero euler.
            cout << "Ingrese un numero: "; cin >> W;
            X = W-1;  //Variable necesaria para iniciar secuencia regresiva en el denominador
            Euler =1;
            acumulador_4 = X;
            Y = 1;
            Fact = 1;
            Z = 1;
            for(;contador_2!=W;contador_2++){
                for(;Y<=acumulador_4;Y++){
                    acumulador_3 = acumulador_3*Y;}
                Fact = (Z/acumulador_3);
                Euler += Fact;
                Y = 1;
                acumulador_4-=1;
                acumulador_3 = 1;
            }
            cout << "La aproximacion de euler es: " << Euler << endl;
            break;

        case 7:
            break;

        case 8:
            break;

        case 9:
            break;

        case 10:// TERMINAR
            //Programa que imprime una cantidad n de numeros primos.
            cout << "Ingrese un numero para buscar: "; cin >> A;
            N = 2;  // -----> Cantidad N de numeros a buscar
            for(;N<=A;N++){
                for(;N<=A;N++){}
                if(N%A==0){
                    if (N ==A){
                        cout << "La cantidad " << A << "de numeros primos son: " << N << endl;
                    }
                }
            }


            break;

        case 11:
            break;

        case 12:
            break;

        case 13:
            break;

        case 14:
            break;

        case 15:
            break;

        case 16:
            break;

        case 17:
            break;
            }
    }

    // Si se ingresa un valor que no sea 1 ->(Ejercicios) o 2 ->(Problemas)

    else cout << "El valor no es valido." << endl;
    return 0;
}
