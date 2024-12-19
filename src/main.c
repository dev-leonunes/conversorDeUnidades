#include <stdio.h>
#include <math.h>

// 1. Unidades de comprimento
    // Recebe o valor em metros(float) e retorna o valor em centimetros
    float metro2cent(float medida){
        return medida*100;
    }
    // Recebe o valor em metros(float) e retorna o valor em milimetros
    float metro2mili(float medida){
        return medida*1000;
    }

    // Recebe o valor em centimetros(float) e retorna o valor em metros
    float cent2metro(float medida){
        return medida/100;
    }
    // Recebe o valor em centimetros(float) e retorna o valor em milimetros
    float cent2mili(float medida){
        return medida*10;
    }
    // Recebe o valor em milimetros(float) e retorna o valor em metros
    float mili2metro(float medida){
        return medida/1000;
    }
    // Recebe o valor em milimetros(float) e retorna o valor em centimetros
    float mili2cent(float medida){
        return medida/10;
    }
//
//
//
//
// 2. Unidades de massa
//
//
//
//
//
// 3. Unidades de volume
//
//
//
//
//
// 4. Unidades de temperatura
    float Cel2Fah(float temperatura);
    float Cel2Kelvin(float temperatura);

    float Fah2Cel(float temperatura);
    float Fah2Kelvin(float temperatura);

    float Kelvin2Cel(float temperatura);
    float Kelvin2Fah(float temperatura);
    
//
//
//
//
// 5. Unidades de velocidade
//
//
//
//
//
// 6. Unidades de potência
//
//
//
//
//
// 7. Unidades de área
//
//
//
//
//
// 8. Unidades de tempo (segundos, minutos, horas)
//
//
//
//
//
// 9. Unidades de armazenamento de dados (Bits, bytes, kilobytes (KB), megabytes (MB), gigabytes (GB), terabytes (TB))
//
//
//
//
//
// 10. Interface de usuário
//
//
//
//
//

int main()
{
    printf("Hello, World!\n");
    return 0;
}