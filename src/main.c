#include <stdio.h>
#include <string.h>

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
double converterVolume(double valorConvertido, int unidadeOrigem, int unidadeDestino) {

    // l = litros
    // m = mililitros
    // c = metros cubicos

    // validação de erro de entrada
    if ((unidadeOrigem != 'l' && unidadeOrigem != 'm' && unidadeOrigem != 'c') ||
        (unidadeDestino != 'l' && unidadeDestino != 'm' && unidadeDestino != 'c')) {
        return -1; 
    }

    // usando litros como valor base
    double litros;

    if (unidadeOrigem == 'l') {
        litros = valorConvertido;
    } else if (unidadeOrigem == 'm') {
        litros = valorConvertido / 1000.0;
    } else if (unidadeDestino == 'c') {
        litros = valorConvertido * 1000.0;
    }

    if (unidadeDestino == 'l') {
        return litros;
    } else if (unidadeDestino == 'm') {
        return litros * 1000.0;
    } else if (unidadeDestino == 'c') {
        return litros / 1000.0;
    }

    return -1;
}

int main() {
// Testes 
    printf("5 litros = %.2f mililitros\n", converterVolume(5, 'l', 'm'));
    printf("3000 mililitros = %.2f litros\n", converterVolume(3000, 'm', 'l'));
}

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

//int main()
//{
//    printf("Hello, World!\n");
//    return 0;
//}