#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;
//cambie las variables de letras mibusculas (la de los billetes) por minuscula3

int main()
{
    //Espacio para la definicion de los distintos tipo de variables:
    short int inicio, ejercicio;
    unsigned short z,dia, mes;
    short int hora, hora_2, minuto, minuto_2, a1, a2, sumamin, sumahour;
    short n0;
    int n,a3,b3,c3,d3,e3,f3,g3,h3,i3,j3; // Para los billetes
    long int A,B,C1,N,F, horas, minutos, segundos, contador=1, contador2;
    long int letra,c=0, filas,w,i,j; //
    long int aleatorio, factorial;
    float W,X,Y,Z, contador_2 =1, pi=3.1416, D,E;
    float Euler , Pi, Fact =1, acumulador_3 =1, acumulador_4;
    bool found= false, band2=true, band=true;
    long long int acumuladorA, acumuladorB, mayor, auxiliar, acumulador2,acumulador=1;
    long long unsigned int cont1=0,acum=1, acumulador_2 = 1,s=0,z1,N1;
    long long int mul,sum,suma=0,cont=1,a,b,d,e,f,k;
    char C, H, espacios, estrellas;

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
            //El programa retorna el menor entre dos numeros

            cout<<"Ingrese un numero A: ";
            cin >> A;
            cout<<"Ingrese un numero B: ";
            cin >>B;
            if(A>B) cout << "El numero ingresado: " << B << " es menor que: " << A << endl;
            else if (B>A) cout << "El numero ingresado: " << A << " es menor que: " << B << endl;
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
            cin >> A;
            factorial=A;
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
            N = 0; // ---> Acumulador de suma
            for (;A!=0;contador++){
                N += A;
                cout << "Ingrese un numero: "; cin >>A;
            }
            B = N/float(contador-1);
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

            cout << "Ingrese un numero: "; cin >> A;
            B = A; // ----> Auxiliar
            C1 = 0; // Variable que almacena ciertos estados de las operaciones de módulo y división entera.
            while(A>0){
                C1 = C1+A%10;  //A%10 para
                C1 = C1*10;
                A = A/10;    // Divison entera para ir reduciendo el tamaño del numero
            }
            if (C1/10==B){
                cout << B << " es un numero palindromo." << endl;
            }
            else{
                cout << B << " NO es un numero palindromo." << endl;
            }

            break;

        case 21:
            break;

        case 22://+
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
            // Programa que imprime un cuadro hecho de + con el valor de un entero ingresado :(

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

           cout << "Ingrese un valor a: "; cin >> a3;
           cout << "Ingrese un valor b: "; cin >> b3;
           cout << "Ingrese un valor c: "; cin >> c3;
           cout << endl;
           while (a3<=0 || b3<=0 || c3<=0){
               cout << "Tenga en cuenta que para formar un triangulo los valores de a, b y c deben ser mayor a 0, intente nuevamente!" << endl << endl;
               cout << "Ingrese un valor a: "; cin >> a3;
               cout << "Ingrese un valor b: "; cin >> b3;
               cout << "Ingrese un valor c: "; cin >> c3;
           }
           if (a3!=b3 && b3!=c3 && a3!=c3){
               if(a3+b3>c3 && a3+c3>b3 && b3+c3>a3) cout << "Se forma un triangulo Escaleno." << endl;
               else
                cout << "Las longitudes ingresadas no forman un triangulo." << endl;
           }

           else if((a3==b3 && a3!=c3 && b3!=c3) || (a3==c3 && a3!=b3 && b3!=c3)){
               if(a3+b3>c3 && a3+c3>b3 && b3+c3>a3) cout << "Se forma un triangulo Isosceles." << endl;
               else
                cout << "Las longitudes ingresadas no forman un triangulo." << endl;

           }
           else if(a3==b3 && a3==c3 && b3==c3){
               if(a3+b3>c3 && a3+c3>b3 && b3+c3>a3) cout << "Se forma un triangulo Equilatero." << endl;
               else
                cout << "Las longitudes ingresadas no forman un triangulo." << endl;
           }
            break;

        case 27:
            break;

        case 28:
            // Programa que encuentra una aproximación de pi

            cout << "Ingrese el valor de n: "; cin >>z;
            A = 1;
            for(;A<=z; A++){
                Pi+=(2*(A%2)-1)/float(2*A-1);
            }
            cout << "La aproximacion de Pi con n= " << A << "es " << 4*Pi <<endl;


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
            //Programa que determina la mínima cantidad de combinaciones de billetes y monedas.

            a3 = 50000;
            b3 = 20000;
            c3 = 10000;
            d3 = 5000;
            e3 = 2000;
            f3 = 1000;
            g3 = 500;
            h3 = 200;
            i3 = 100;
            j3 = 50;

            cout << "Ingrese una cantidad: "; cin >> n;
            acumulador = n;
            for(;n!=0;){
                if(n/a3!=0){
                    n=n%a3;
                    acumulador = acumulador/a3;
                    cout << a3 << ": "<< acumulador << endl;
                }
                else if (n/b3!=0){
                    n=n%b3;
                    acumulador=acumulador/b3;
                    cout << b3 << ": "<< acumulador << endl;
                                }
                else if (n/c3!=0){
                    n=n%c3;
                    acumulador=acumulador/c3;
                    cout << c3 << ": "<< acumulador << endl;
                }
                else if (n/d3!=0){
                    n=n%d3;
                    acumulador=acumulador/d3;
                    cout << d3 << ": "<< acumulador << endl;
                                }
                else if (n/e3!=0){
                    n=n%e3;
                    acumulador=acumulador/e3;
                    cout << e3 << ": "<< acumulador << endl;
                }
                else if (n/f3!=0){
                    n=n%f3;
                    acumulador=acumulador/f3;
                    cout << f3<< ": "<< acumulador << endl;
                                }
                else if (n/g3!=0){
                    n=n%g3;
                    acumulador=acumulador/g3;
                    cout << g3<< ": "<< acumulador << endl;
                }
                else if (n/h3!=0){
                    n=n%3;
                    acumulador=acumulador/3;
                    cout << 3 << ": "<< acumulador << endl;
                                }
                else if (n/i3!=0){
                    n=n%i3;
                    acumulador=acumulador/i3;
                    cout << i3 << ": "<< acumulador << endl;}
                else if (n/j3!=0){
                    n=n%j3;
                    acumulador=acumulador/j3;
                    cout << j3 << ": "<< acumulador << endl;}
                else{
                    cout << "Faltante: " << acumulador << endl;
                    n=0;
                }
                acumulador = n;
            }

            break;

        case 3:
            break;

        case 4:
            // Programa que recibo 2 numeros enteros y designa dichos numeros en horas del dia en formato de 24 h

            cout << "Ingrese el primer valor entero: "; cin >>a1;
            hora = a1/100;     //Uso de la division entera para obtener las primeras cifras del número
            minuto = a1%100; //Uso del modulo para obtener las últimas cifras del número

            while((hora>=24 || minuto>=60)){
                cout<<a1<<" es un tiempo invalido. Por favor, intente nuevamente."<<endl;
                cout << "Ingrese el primer valor entero: "; cin >>a1;
                hora = a1/100;
                minuto = a1%100;

            }
            cout << "Ingrese el segundo valor entero: "; cin >>a2;

            hora_2 = a2/100;
            minuto_2 = a2%100;

            while(( hora_2>=24 || minuto_2>=60 )){
                 cout<<a2<<" es un tiempo invalido. Por favor, intente nuevamente."<<endl;
                 cout << "Ingrese el segundo valor entero: "; cin >>a2;
                 hora_2 = a2/100;
                 minuto_2 = a2%100;
            }

            sumahour = hora+hora_2;
            sumamin = minuto+minuto_2;
            if (sumamin>=60){
                sumahour += 1;
                sumamin= sumamin%60;

                if (sumahour>24){
                    cout << "La suma de los tiempo sobrepasa el formato de 24 horas.";
                }
                else if (sumahour==24){
                            sumahour =0;
                }

            }

            cout<< "La hora es: " << sumahour << sumamin << endl;

            break;

        case 5:
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
            //Programa que calcula la suma de los múltiplos de dos numeros a+b acotados por un tercer numcero c.

            cout << "Ingrese un numero A: "; cin >> A;
            cout << "Ingrese un numero B: "; cin >> B;
            cout << "Ingrese un numero C: "; cin >> C1;

            while((A>=C1 || B>=C1)||(A>=B)){
                cout << "B debe ser mayor que A y a su vez, C debe ser mayor que A y B. Por favor, intente nuevamente" << endl;
                cout << "Ingrese un numero A: "; cin >> A;
                cout << "Ingrese un numero B: "; cin >> B;
                cout << "Ingrese un numero C: "; cin >> C1;
            }

            contador = A;
            acumuladorA = 0;
            acumuladorB = 0;

            for(;contador<C1;contador++){
                if (contador%A==0){
                    cout << contador<< "+";
                    acumuladorA = acumuladorA+contador;
                }
                else if(contador%B==0){
                    }
            }
            contador = A;
            for(;contador<C1;contador++){
                if(contador%A==0){
                }
                else if(contador%B==0){
                    cout << contador << "+";
                    acumuladorB = acumuladorB+contador;
                    }
            }
            cout << " = " << acumuladorA+acumuladorB<< endl;

            break;

        case 9:
            break;

        case 10:
            //programa que reciba un número n e imprima el enésimo número primo.

            cout << "Ingrese un numero: "; cin >> N;
            contador2 = 0;
            for(B=1;B<=1000;B++){
                contador=0;
                for(A=1;A<=B;A++){
                    if(B%A==0){
                      // contador para saber cuando el numero es primo
                      contador += 1;

                    }
                }
                if (contador==2){
                    // para contar la cantidad de numeros primos de 0 a 1000 de uno en uno
                    contador2++;

                if (contador2==N){
                    // cuando la cantidad de primos es igual a N
                    cout <<"El enesimo numero primo es "<< B<< endl;
                }

                }
            }


            break;

        case 11:
            break;

        case 12:
            //Programa que calcula el máximo factor primo de un número.

            cout << "Ingrese un numero: "; cin >> A;
            acumuladorA = A;
            B = 2; //Se inicializa en 2 puesto que si se ingresa 1, pues el máximo factor primo sigue siendo 1
            mayor = 0;
            for(;acumuladorA>1;B++){
                while(acumuladorA%B==0){
                    acumuladorA=acumuladorA/B;
                    mayor = B;
                }
            }
            cout << "El mayor factor primo de " << A << " es: " << mayor << endl;

            break;

        case 13:
            break;

        case 14:
            //Programa que calcula las combinaciones de un numero palindromo al multiplicar dos numeros de 3 dígitos.

            A = 100; // Se inicia A en 100 puesto que es el primer numero de 3 dígitos
            cout << "Ingrese un numero palindromo de 3 cifras: "; cin >> B;

            while(found==false){
                for(;A<1000;A++){
                    acumulador = A*B;
                    auxiliar = acumulador;
                    C1=0;
                    while(auxiliar>0){
          //cambiar C por acumulador dado que contiene el valor de la multiplicacion
                     C1 = C1+auxiliar%10;
                     C1 = C1*10;
                     auxiliar = auxiliar/10;
                     if (C1/10==acumulador){
                        found = true;
                        acumulador2 = C1/10;

                        cout << "una de las posibles respuestas es: " << A << "*" << B << "= " <<  acumulador2 << endl;
                     }
                    }
                }
            }
                break;
        case 15:
            break;

        case 16:
            break;

        case 17:
            break;

            }
    }
    else cout << "El valor no es valido." << endl;
    return 0;
}

