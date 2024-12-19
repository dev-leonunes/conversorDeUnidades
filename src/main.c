#include <stdio.h>
#include <math.h>

// 1. Unidades de comprimento
    // Recebe o valor em metros(float) e retorna o valor em centimetros
    float metro2cent(float medida){
        return medida*100.0;
    }
    // Recebe o valor em metros(float) e retorna o valor em milimetros
    float metro2mili(float medida){
        return medida*1000.0;
    }

    // Recebe o valor em centimetros(float) e retorna o valor em metros
    float cent2metro(float medida){
        return medida/100.0;
    }
    // Recebe o valor em centimetros(float) e retorna o valor em milimetros
    float cent2mili(float medida){
        return medida*10.0;
    }
    // Recebe o valor em milimetros(float) e retorna o valor em metros
    float mili2metro(float medida){
        return medida/1000.0;
    }
    // Recebe o valor em milimetros(float) e retorna o valor em centimetros
    float mili2cent(float medida){
        return medida/10.;
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
    // Recebe uma medida de temperatura em Graus Celsius e converte para Graus em  Fahrenheit
    float Cel2Fah(float temperatura){
        return ( temperatura*(9.0/5.0) )+ 32;
    }
    // Recebe uma medida de temperatura em Graus Celsius e converte para Graus em Kelvin
    float Cel2Kelvin(float temperatura){
       return temperatura+273.15;
    }

    // Recebe uma medida de temperatura em Graus Fahrenheit e converte para Graus em Celsius
    float Fah2Cel(float temperatura){
        return (temperatura-32)*(5.0/9.0);
    }
    // Recebe uma medida de temperatura em Graus Fahrenheit e converte para Graus em Kelvin
    float Fah2Kelvin(float temperatura){
        return ( (temperatura-32 ) *(5.0/9.0) )+ 273.15;
    }

    // Recebe uma medida de temperatura em Graus Kelvin e converte para Graus em Celsius
    float Kelvin2Cel(float temperatura){
        return temperatura- 273.15;
    }
    // Recebe uma medida de temperatura em Graus Kelvin e converte para Graus em Fahrenheit
    float Kelvin2Fah(float temperatura){
        return  ( (temperatura-273.15)*(9.0/5.0) )+32;
    }

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
    //printf("Hello, World!\n");
    //return 0;
}