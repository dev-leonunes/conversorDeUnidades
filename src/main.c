#include <stdio.h>
#include <math.h>

// cria uma enumeração para a função de conversão de unidades de medida
enum Comprimentos{
    Km =1,
    Hm,
    Dam,
    M,
    Dm,
    Cm,
    Mm
};
// 1. Unidades de comprimento
    /* Conversor de unidades de comprimento
        |   Recebe uma medida de comprimento converte para outro multiplo ou submultiplo, ex Km->m
        |   Paramêtros:
        |               -> comprimento(float): o valor de compriemnto a ser convertido
        |               -> escala(int): a escala de comprimento da medida, os valores foram definidos em
        |                   em uma enumeração como mostrado abaixo
        |                   Km:  escala em quilomêtros
        |                   Hm:  escala em hectomêtros
        |                   Dam: escala decâmetros
        |                   M:   escala em metros
        |                   Dm:  escala e decómetros
        |                   Cm:  escala em centímetros 
        |                   mm:  escala em milimetros
        |               -> nova_escala(int): a escala de  comprimento  a ser convertida
        |                   Km:  escala em quilomêtros
        |                   Hm:  escala em hectomêtros
        |                   Dam: escala decâmetros
        |                   M:   escala em metros
        |                   Dm:  escala e decómetros
        |                   Cm:  escala em centímetros 
        |                   mm:  escala em milimetros
        |   Retorno:
        |               -> comprimento_convertido(float): o valor da medida na nova escala
        */
    float conversor_comprimento(float comprimento,int escala,int nova_escala){
        float comprimento_convertido=0;
        int diferenca =0; // recebe a diferença de posições entre as escalas
        // Determina o fator de conversão pelas potências de 10

        // se a escala atual tem um valor menor que a nova escala
        if(escala < nova_escala){
            diferenca = nova_escala - escala;
            comprimento_convertido = comprimento * (1.0*pow(10,diferenca));
        }
        // se a escala atual tem uma valor maior que a nova escala
        else if (escala > nova_escala){
            diferenca = escala- nova_escala;
            comprimento_convertido = comprimento /(1.0*pow(10,diferenca));
        }
        // caseo sejam as mesmas esalas então nada se altera
        else{
            comprimento_convertido = comprimento;
        }
        return comprimento_convertido;
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
//
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