#include <stdio.h>
#include <math.h>

//Programa que evalua un numero. Si el numero es 15, muestra su nombre en letras
//Si no es 15, muestra la potencia al cubo de dicho numero

int main()
{
    //Inicializar variables
    int num, numcubo;
    const int exp=3;

    printf("Ingrese un numero: ");
    scanf("%d", &num);

    //Si el numero es 15
    if(num == 15){
        printf("Quince");
    }
    //Si el numero NO es 15
    else{
        numcubo= pow(num,exp); //POW se utiliza para elevar un "num" al "exp"
        printf("Numero elevado al cubo: %d\n",numcubo);
    }

    return 0;
}