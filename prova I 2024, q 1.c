#include <stdio.h>

void main()
{
    // dada a distância total, em quilômetros, percorrida por uma certa partícula trafegando do emissor até algum sensor
    //calcule e informe qual será o sensor atingido pela partícula.
    // 1 emissor, 3 sensores
    // do emissor ao acelerador 3km
    // a circunferência do acelerador tem 8 quilômetros
    
    int emissor = 3,sensor1,sensor2,sensor3, circunferencia = 8, distanciaTotal;
    
    printf("Insira a distancia total (em KM) percorrida\n");
    scanf("%d", &distanciaTotal);
    
    distanciaTotal = distanciaTotal - emissor;
    distanciaTotal = distanciaTotal % 8;
    
    if(distanciaTotal == 3){
        printf("Sensor 1");
    }
    else if(distanciaTotal == 4){
        printf("Sensor 2");
    }
    else if(distanciaTotal == 5) {
        printf("Sensor 3");
    }
    else{
        printf("error");
    }
    

    return;
}