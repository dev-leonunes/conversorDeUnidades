#include <stdio.h>
#include <math.h>

// 1. Unidades de comprimento
//
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
    /* Conversor de unidades de temperatura
    |   Recebe uma mediada de temepratura em Graus Celsius,Fahreheint ou Kelvin e converte para a outra escala
    |   Paramêtros:
    |               -> temperatura(float): o valor de temperatura a ser convertido
    |               -> escala(char): a escala de temperatura da medida
    |                   'F': escala Fahrenheit
    |                   'C': escala Celsius
    |                   'K': escala Kelvin
    |               -> nova_escala(string): a escala de temperatura a ser convertida
    |                   'F': escala Fahrenheit
    |                   'C': escala Celsius
    |                   'K': escala Kelvin
    |   Retorno:
    |               -> temperatura_convertida(float): o valor da medida na nova escala
    */
    float conversor_temperatura(float temperatura,char escala, char nova_escala){
        float temperatura_convertida = 0;
        // seleciona qual a escala atual da medida
        switch(escala){
            // Caso seja a conversão de uma medida em graus Celsius
            case 'C':
                // Converte de Celsius para Fahrenheit
                if(nova_escala == 'F'){
                    temperatura_convertida = ( temperatura*(9.0/5.0) )+ 32;
                }
                // Converte de Celsius para Kelvin
                else{
                    temperatura_convertida=temperatura+273.15;
                }
                break;
            // Caso seja a conversão de uma medida em graus Fahrenheit
            case 'F':
                // Converte de Fahrenheit para Celsius
                if(nova_escala == 'C'){
                    temperatura_convertida = (temperatura-32)*(5.0/9.0);
                }
                // Converte de Fahrenheit para Kelvin
                else{
                    temperatura_convertida=( (temperatura-32 ) *(5.0/9.0) )+ 273.15;
                }
                break;
            // Caso seja a conversão de uma medida em graus Kelvin
            case 'K':
                // Converte de Kelvin para Celsius
                if(nova_escala == 'C'){
                    temperatura_convertida =temperatura- 273.15;
                }
                // Converte de Kelvin para Fahrenheit
                else{
                    temperatura_convertida=( (temperatura-273.15)*(9.0/5.0) )+32;
                }
                break;
            default:
                break;
        }
        return temperatura_convertida;
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