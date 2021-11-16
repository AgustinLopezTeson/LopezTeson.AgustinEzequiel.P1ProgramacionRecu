#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 3

typedef struct
{

    int id;
    char nombre[20];
    int infectados;
    int recuperados;
    int muertos;

} ePais;

void actualizarRecuperados(ePais unPais,int recuperadosXdia);
int invertirCadena(char cadena[]);
int ordenar(char cadena[]);
int main()
{
    ePais unPais;
    unPais.recuperados=100;
    int recuperadosxDia = 50 ;
    char cadena[20]="agustin";

    printf("%d\n\n",unPais.recuperados);

    actualizarRecuperados(unPais,recuperadosxDia);

  //  invertirCadena(cadena[20]);


    return 0;
}

void actualizarRecuperados(ePais unPais,int recuperadosXdia)
{
    int recuperadosAct;

    recuperadosAct = unPais.recuperados+recuperadosXdia;
        printf("%d",recuperadosAct);
    unPais.recuperados=recuperadosAct;
        printf("%d",unPais.recuperados);
}

int invertirCadena(char cadena[])
{
    int todoOk=0;
    int largo = strlen(cadena);
    char auxCadena;
    for (int i = 0; i <largo-1 ;i++)
    {
        for(int j = i+1 ; j = largo; j++)
        {
            auxCadena = cadena[i];
            cadena[i] = cadena[j];
            cadena[j] = auxCadena;
        }
    }
    return todoOk;
}

