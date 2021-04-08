#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;


int main()
{
    //Espacio para la definicion de los distintos tipo de variables:
    short int inicio, ejercicio;
    unsigned short z,dia, mes;
    short int hora, hora_2, minuto, minuto_2, a1, a2, sumamin, sumahour;
    short n0;
    int n,a3,b3,c3,d3,e3,f3,g3,h3,i3,j3; // Para los billetes
    long int A,B,C1,N,F, horas, minutos, segundos, contador=1, contador2;
    long int letra,c=0;
    long int aleatorio, factorial;
    float W,X,Y,Z, contador_2 =1, pi=3.1416;
    float Euler , Pi, Fact =1, acumulador_3 =1, acumulador_4;
    bool found= false, band2=true, band=true;
    long long int acumuladorA, acumuladorB, mayor, auxiliar, acumulador2,acumulador=1;
    long long unsigned int cont1=0,acum=1, acumulador_2 = 1,s=0,z1,N1;
    long long int mul,sum,suma=0,cont=1,a,b,d,e,k;
    char C, H, espacios, estrellas;
    int numerok=0 , numeroI=0;

    cout << "   |Ingrese 1 para ejercicios|"<< endl <<"   |2 para problemas| "<<endl << "   ----> ";
    cin >> inicio;
    if (inicio == 1){
        cout << endl << "Ingrese un numero para elegir el ejercicio: ";
        cin >> ejercicio;
        cout << endl;
        switch (ejercicio) {

        case 1:
            //Programa que pida dos números A y B e imprima el residuo de la division A/B
            //El signo depende de la implementacion, a=bq+r

            cout<<"Ingrese un numero A: "; cin >> A;
            cout<<"Ingrese un numero B: "; cin >>B;
            if (B==0)cout<<"Indefinido"<< endl;
            else  cout<<"el residuo de la division A/B es: "<< A%B << endl;
            break;

        case 2:
            //Programa que retorna si un numero ingresado es par o impar

            cout << "Ingrese un numero: ";
            cin >> N;
            if (N % 2 == 0) cout << "El numero ingresado "<<N<< " es par."<< endl;
            else cout << "El numero ingresado: "<<N<< " es impar."<< endl;
            break;

        case 3:
            //Programa que pida dos números A y B e imprima en pantalla el mayor

            cout<<"Ingrese un numero A: "; cin >> A;
            cout<<"Ingrese un numero B: "; cin >>B;
            if(A>B) cout << "El numero ingresado: " << A << " es el mayor " << endl;
            else if (B>A) cout << "El numero ingresado: " << B << " es el mayor " << endl;
            else cout << "Ambos numeros son iguales..." << endl;
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
            //Programa que pida dos números A y B e imprima en pantalla la división A/B con redondeo

            cout<<"Ingrese un numero A: "; cin >> A;
            cout<<"Ingrese un numero B: "; cin >>B;
            if (B==0)cout<<"Indefinido"<< endl;
            else{
                if ((A>0&&B>0) || (A<0&&B<0 )){
                    if(2*(A%B)>=B) cout<<A<<'/'<<B<<" = "<<A/B+1<<endl;
                    else cout<<A<<'/'<<B<<" = "<<A/B<<endl;
                }
                else{
                    N=(-1)*(A%B);
                    if(2*N>=B) cout<<A<<'/'<<B<<" = - "<<(-1)*(A/B)+1<<endl;
                    else cout<<A<<'/'<<B<<" = "<<A/B<<endl;
                }
            }
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
            //Programa que pida un número e imprima en pantalla la suma de todos los números entre 0 y N (incluyéndose el mismo)
            //Tambien se puede usar la formula matematica ( (n)*(n+1) )/2

            cout<<"Ingrese un numero: "; cin >> a;
            if(a>=0){
                for(;cont<=a;cont++){
                    suma=cont+suma;
                }
                cout <<"La sumatoria desde 0 hasta "<< a <<" es: " << suma <<endl;
            }
            else cout<<"Ingrese numeros positivos"<<endl;
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
            //Programa que pida un número N e imprima el perímetro y área de un círculo con radio N
            //Nota: use 3.1416 como una aproximación de pi.

            do{
                cout << "Ingrese un numero: "; cin >> N;
                if (N<0){
                     cout << "Ingrese numero positivo "<< endl;
                }
                else{
                    band=false;
                    d=2*pi*N;
                    e=pi*(N*N);
                    cout << " El perimetro del circulo es: " << d<< endl;
                    cout << " El area del circulo es: " << e<< endl;
                }
            }while(band);
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
            //Programa que pida un número N e imprima en pantalla su tabla de multiplicar hasta 10xN.

            cout << "Ingrese un numero N: "; cin >> N;
            for (;cont<=10;cont++){
                a = (cont*N);
                cout << cont << " X " << N << " = " << a<< endl;
            }
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
            //Programa que pida un número N e imprima todos los divisores de N

            cout << "Ingrese un numero N: "; cin >> N;
            if (N>0){
                cout << "Los divisores del numero son: " << endl;
                while(cont<=N){
                    if (N%cont==0){
                            cout << cont << endl;
                    }
                    cont++;
                }
            }
            else if (N<0){
                cout << "Los divisores del numero son: " << endl;
                while(cont<=(-1)*N){
                    if (N%cont==0){
                            cout << "-" << cont << endl;
                    }
                    cont++;
                }
            }
            else cout <<"El cero tiene infinitos divisores"<< endl;
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
            //Programa que pida constantemente números hasta que se ingrese el número cero
            //Imprima en pantalla la suma de todos los números ingresados.

            do{
                cout << "Ingrese un numero: "; cin >> N;
                suma+=N;
            }while(N!=0);
            cout << "La suma de los numeros ingresados es: " << suma <<endl;
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
            //Programa que pida constantemente números hasta que se ingrese el número cero
            //Imprima en pantalla el mayor

            cout << "Ingrese un numero: "; cin >> a;
            if (a==0)cout <<"El programa termina al ingresar el cero"<<endl;
            else{
                    while(true){ //evita que al ingresar negativos el cero sea el mayor
                    cout << "Ingrese un numero: "; cin >> b;
                    if(b==0){
                        break;
                    }
                    if (b>a){
                        a=b;
                    }
                }
                cout << "El numero mayor de los numeros ingresados es: " << a <<endl;
            }
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
            //Programa que pida un número N e imprima si es o no un número primo.

            cout << "Ingrese un numero: "; cin >> N;
            if (N>1){
                while(cont!=N){
                    cont+=1;
                    if (N%cont==0){
                        c+=1;
                    }
                }
                if (c==1){
                    cout << "El numero ingresado es primo"<< endl;
                }
                else{
                    cout << "El numero ingresado NO es primo"<< endl;
                }
            }
            else cout << "Los numeros primos son naturales mayores a 1"<< endl;
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
            //Programa que pida un carácter C
            //Si es una letra la debe convertir de mayúscula a minúscula y viceversa e imprimirla

            cout<<"Ingrese un caracter: "; cin >> C;
            letra=C; //usar valores de la tabla ascii
            if ( letra>=65 && letra<=90){
                H=letra+32;
                cout << "Letra MAYUSCULA convertida a MINUSCULA: "<< H<< endl;
            }
            else if (letra>=97 && letra<=122 ){
               H=letra-32;
               cout << "Letra MINUSCULA convertida a MAYUSCULA: "<< H << endl;
            }
            else{
               cout << "El caracter ingresado NO es una letra" << endl;
            }
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
            //Programa que pida dos números A y B e imprima en pantalla el mínimo común múltiplo entre los dos
            //Si el producto de dos números lo dividimos por su máximo común divisor (MCD) dicho cociente es el mínimo común múltiplo.

            cout<<"Ingrese un numero A: "; cin >> A;
            cout<<"Ingrese un numero B: "; cin >>B;
            if (A==0 || B==0){
                 cout<<"El minimo comun multiplo es el numero mas pequeno diferente de cero que es multiplo de los numeros" << endl;
            }
            else{
                a=A; b=B;
                while ((cont<=a) && (cont<=b)){
                    if(a%cont==0){
                         if(b%cont==0){
                              if(cont>mul){ //mul=MCD
                                  mul=cont;
                              }
                         }
                    }
                    cont+=1;
                }
                cout <<mul;
                cout<<"El minimo comun multiplo de "<<A<< " y "<<B <<" es: "<< (A*B)/(mul) << endl;
            }
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
            //Programa que pida un número N e imprima en pantalla la cantidad de dígitos de N

            cout << "Ingrese un numero: "; cin >> a;
            if (a==0)  cout <<"0 tiene 1 digito" << endl;
            else{
                    B=a;
                    if (a<0){
                    a*=-1;
                }
                while(a>0){
                    a=a/10;
                    A++;
                }
                cout << B << " tiene "<< A << " digitos" << endl;
            }
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
            //Calculadora con operaciones de suma,resta, multiplicación y división
            //ingresar los operandos y la operación a realizar.

            cout<<"Ingrese un numero A: "; cin >> a;
            cout<<"Ingrese un numero B: "; cin >>b;
            cout<<"Ingrese la operacion a realizar [ + , - , * , / ]:  "; cin >>C;
            cout << endl;
            switch (C) {
                case '+':{
                    cout<< a<< " + " << b<< " = " <<a+b<< endl;
                    break;
                }
                case '-' :{
                    cout<< a<< " - " << b<<  " = " <<a-b <<  endl;
                    break;
                }
                case '*' :{
                    cout<< a<< " * " << b<<  " = " <<a*b <<  endl;
                    break;
                }
                case '/' :{
                    if (b==0){
                        cout<<"No se realizan divisiones entre cero"<<  endl;
                    }
                    else{
                        cout<< a<< " / " << b<<  " = " <<a/b <<  endl;
                    }
                    break;
                }
                default:{
                    cout<< "Operador no establecido" <<  endl;
                }
            }
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
            //Programa que adivine un número A (entre 0 y 100)
            cout<<"Seleccione un numero entre 0 y 100 y tengalo en mente para empezar el juego "<<endl;
            A=0; //lim inferior
            B=100; //lim superior
            do{
                F= (A+B)/2;    //busqueda binaria
                cout<<F<<" es mayor, menor o igual a su numero en mente [ > , < , = ]:  ";
                cin >>C; cout << endl;

                switch (C) {
                    case '>':{
                        B=F;
                        break;
                    }
                    case '<' :{
                        A=F;
                        break;
                    }
                    case '=' :{
                        cout<< "Su numero en mente es: " << F<< endl;
                        band=false;
                        break;
                    }
                    default:{
                        cout<< "Operador no establecido" <<  endl;
                    }
                }
            }while(band);
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
            //Programa que identique si un carácter ingresado es una vocal, una consonante o ninguna
            cout << "Ingrese un caracter: ";
            cin >> C;
            if (( C>='A' && C<='Z') || (C>='a' && C<='z')) {
                if( C == 'a' || C == 'A' || C == 'e' || C == 'E' || C == 'i' || C == 'I' ||C == 'o' || C == 'O' ||C == 'a' || C == 'U' ){
                cout << C<< " es una vocal " << endl;
                }
                else{
                    cout << "El caracter ingresado es una consonante" << endl;
                }
            }
            else{
               cout << "El caracter ingresado NO es ni una vocal ni consonante" << endl;
            }
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
                    n=n%h3;
                    acumulador=acumulador/h3;
                    cout << h3 << ": "<< acumulador << endl;
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
            //Programa que debe leer un mes y un día de dicho mes para luego decir si esa combinación de mes y día son válidos
            cout<< "Ingrese un dia:   "; cin>>dia;
            cout<< "Ingrese un mes:   ";  cin>>mes;
            if (dia>=1 && dia<=31 && mes>=1 && mes<=12){
                if (mes==2){
                    if(dia<=28) cout << dia<< "/"<<mes <<" Fecha valida"<<endl;
                    else if (dia==29)cout<<dia<< "/"<<mes<< " Fecha valida en bisiesto"<<endl;
                    else cout<< "Fecha invalida"<<endl;
                }
                else if(mes<=7){
                    if (mes%2==1)cout <<dia<< "/"<<mes<< " Fecha valida"<<endl;
                    else if (dia<=30)cout<<dia<< "/"<<mes << " Fecha valida"<<endl;
                    else cout<<"Fecha invalida"<<endl;
                }
                else {
                    if (mes%2==0) cout<<dia<< "/"<<mes<< " Fecha valida"<<endl;
                    else if (dia<=30) cout<<dia<< "/"<<mes<< " Fecha valida"<<endl;
                    else cout<< "Fecha invalida"<<endl;
                }
            }
            else cout<< "Fecha invalida"<<endl;
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
            //El tamaño del patrón estará determinado un número entero impar que ingrese el usuario
            //para la parte superior, diminuyen los espacios y aumentan los asteriscos
            //comparten la ultima linea, se le resta en la parte inferior

            cout << "Ingrese un numero entero impar: "; cin >> N;
            if (N%2==0){
            cout<< "Solo se admiten numeros enteros impares "<<endl;
            }

            else {
                if (N>0){

                    for (int filas=1;filas>N;filas++){ //triangulo superior
                        for (espacios=N/2;espacios>=filas;espacios--){
                            cout<<" ";
                        }
                        for (estrellas=1;2*filas-1>=estrellas;estrellas++){
                            cout<<"*";
                        }
                        cout<<endl;
                    }
                    for (int filas=1;filas-1>=N;filas++){ //triangulo inferior
                        for (espacios=1;espacios<=filas;espacios++){
                            cout<<" ";
                        }
                        for (estrellas=2*filas-1;2*filas-1<estrellas;estrellas--){
                            cout<<"*";
                        }
                        cout<<endl;
                    }
                }
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
            //Programa que reciba un número n y halle la suma de todos los números pares en la serie de Fibonacci menores a n.

            cout << "Ingrese un numero: "; cin >> N1;
            if (N1>0){
               while (cont1<N1){
                   z1=acum+acumulador_2;
                   acum=acumulador_2;
                   acumulador_2 = z1;
                   if (z1%2==0 && z1<N1){
                         s+=z1;
                   }
                   cont1+=1;
               }
               cout << "El resultado de la suma es: "<< s <<endl;
            }
            else cout << "Ingrese un numero positivo"<< endl;
            break;
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
            //Programa que pida un número entero N e imprima el resultado de la suma de todos sus dígitos elevados a sí mismos.

            cout << "Ingrese un numero: "; cin >> N;
            if (N<0){
                N*=-1;
            }
            while(N>0){
                A=N%10; //resto
                N=N/10;
                for(int i=1;i<=A;i++){
                    cont=cont*A;
                }
                suma+=cont;
                cont=1; //reinicio
            }
            cout << "El resultado de la suma es : "<<suma<< endl;
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
            //Programa que reciba un número y calcule el mínimo común múltiplo de todos los números enteros entre 1 y el número ingresado

            cout << "Ingrese un numero: ";cin >> N;
            if (N>0){
                for (int i=1; band2; i++){
                    mul=N*i;
                    band=true;
                     for (int j=N-1; band; j--){
                         if(mul%j != 0){
                             band=false;
                         }
                         if(j==1){
                             band=false;
                             band2=false;
                         }
                     }
                }
                cout<< "El minimo comun multiplo es: "<<mul<<endl;
            }
            else cout << "Ingresar numeros positivos";
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
            //Programa que reciba un número y calcule la suma de todos los primos menores que el número ingresado

            cout << "Ingrese un numero: "; cin >> N;
            if (N>1){
               for(k=2;k<N;k++){
                       while(cont!=k){
                           cont+=1;
                           if (k%cont==0){
                               c+=1;
                           }
                       }
                       if (c==1){
                           sum+=k;
                       }
                       cont=1;
                       c=0;
                   }
            cout << "El resultado de la suma es: "<< sum <<endl;
            }
            else cout << "Ingrese un numero positivo mayor a 1"<< endl;
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
            //suma de las pendientes

            //Programa que reciba un número impar y calcule la suma de los números en la diagonal de una espiral de nxn

            cout << "Ingrese un numero impar mayor a cero: "; cin >> N;
            cout <<endl;
            if ((N>0) && (N%2!=0)){
                for (int f=0;f<N;f++){
                    for (int c=0;c<N;c++){
                        if (f>c && f>=N-c-1){
                            n0=2*(1+f)-N;
                            cout<<n0*n0-2*(n0-1)-c+N-1-f << '\t';
                        }
                        else if (f<=c && f>N-c-1){
                            n0=N-1-c;
                            cout << (N-2*(1+n0))*(N-2*(1+n0))+1+f-(n0+1) << '\t';
                        }
                        else if(f<=c && f<=N-c-1){
                            cout<<(N-2*f)*(N-2*f-1)+1+c-f << '\t';
                        }
                        else {
                            cout<<(N-2*c)*(N-2*c-1)+1-f+c << '\t';
                        }
                    }
                    cout << endl << endl << endl;
            }

            //suma=
            cout<<"En una espiral de "<< N<<" x "<<N<<" la suma es: "<< suma<<endl;
            }
        else cout << "Solo se admite un numero impar mayor a cero "<<endl;
            break;

        case 16:
            cout << "Ingrese un numero: ";cin >> numerok;
            cout << endl;
            numeroI=numerok;

           cout<<"Para la semilla "<<numerok<<": "<<numerok<<", ";
           do {                                                 //Instrucciones que se leerán antes del ciclo while


                if (numerok%2==0){                              //Condicional que se ejecuta si numerok es par
                    numerok= numerok/2;                         //La variable numerok se divide entre 2

                    if (numerok==1){                            //Condicional que se ejecuta si numerok es igual a 1
                        cout << numerok;
                        contador++;                             //La variable contador se incrementa en 1, cuenta los elementos de la secuencia
                        break;}                                 //Termina el programa

                    cout << numerok << ", ";
                    contador++;                                 //La variable contador se incrementa en 1, cuenta los elementos de la secuencia
                }

                else {                                          //Condicional que se ejecuta si numerok es impar
                    numerok= (3*numerok)+1;                     //La variable numerok se le multiplica por 3 y se le suma 1
                    cout << numerok << ", ";
                    contador++;                                 //La variable contador se incrementa en 1, cuenta los elementos de la secuencia
                }
            }

            while (numerok!=1);                                 //Ciclo que se ejecutará mientras numerok sea diferente de 1
            cout << endl << endl;
            cout << "Esta es la serie mas larga con la semilla: "<< numeroI << ", teniendo "<< contador <<" términos." << endl << endl;
            break;

        case 17:
            //Programa que reciba un número N y calcule cual es el primer número triangular que tiene más de N divisores.
            cout << "Ingrese un numero: "; cin >> N;
            b=0;
            if (N>0){
                while(d<=N){
                    cont=1;
                    d=0; // reiniciar variables contador y d
                    b++; //incrementar 1 a 1
                    a=b*(b+1)/2; // enésimo número triangular
                    //cout<<a<<endl;
                    while(cont<=a){
                        if (a%cont==0){
                                d++; //suma si es divisor
                        }
                        cont++;
                    }
                }
                cout<<"El numero es: "<< a <<" que tiene "<< d <<" divisores"<< endl;
            }
            else cout << "Ingrese un numero positivo"<< endl;
            break;

            }
    }
    else cout << "El valor no es valido." << endl;
    return 0;
}

