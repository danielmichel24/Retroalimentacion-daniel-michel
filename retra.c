#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void arreglo()
{
    int i,total=0,prom=0,a[5];
    for (i=0;i<5;i++){
    printf("dime un numero ");
    scanf("%d",&a[i]);
    total=a[i]+total;
    system("cls");
    }
    for (i=0;i<5;i++){
    printf("%d \n",a[i]);
    }
    printf("total= %d\n",total);
    prom=total/i;
    printf("promedio= %d \n",prom);
    return(0);
}



    void mostrar() {
    int i,n;
    char arreglo[20];
	// Mostrar en pantalla n veces arreglo
	printf("dime una palabra ");
	scanf("%s",&arreglo);
	printf("cuantas veces las quieres ver??? \n");
	scanf("%i",&n);
	for(i=0;i<n;i++){
        printf("%sº\n",arreglo);
	}
    }



void menu(){
    printf("----------MENU---------\n");
    printf("PRESIONA 1 PARA ARREGLOS\n");
    printf("PRESIONA 2 PARA MOSTRAR\n");
    printf("PRESIONA 3 PARA REGISTRAR DATOS\n");
    printf("PRESIONA 4 PARA SALIR\n");

    }
    void main(){
    int opcm;
    do{
        system("cls");
        menu();
        scanf("%i",&opcm);
        switch(opcm)
        {
            case 1:
                arreglo();
                system("pause");
                system("cls");
                break;

            case 2:
                mostrar();
                system("pause");
                system("cls");
                break;
            case 3:
                datos();
                system("pause");
                system("cls");
                break;
            case 4:
                printf("Gracias jeje\n");
                system("pause");
                break;
            default:
                printf("Opcion no valida\n");
                system("pause");
            }
    }while(opcm!=4);
    }




