#include <stdio.h>
#include "interface.h"
#include <math.h>
#include <string.h>

// Funções de conversão

// 1. Unidades de comprimento
float conversor_comprimento(float comprimento, int escala, int nova_escala)
{
    // 1 = Metro
    // 2 = Centimetro
    // 3 = Milimetro

    float comprimento_convertido = 0;
    int diferenca = 0; // recebe a diferença de posições entre as escalas
    // Determina o fator de conversão pelas potências de 10

    // se a escala atual tem um valor menor que a nova escala
    if (escala < nova_escala)
    {
        diferenca = nova_escala - escala;
        if (escala == 1)
            diferenca++;
        comprimento_convertido = comprimento * (1.0 * pow(10, diferenca));
    }
    // se a escala atual tem uma valor maior que a nova escala
    else if (escala > nova_escala)
    {
        diferenca = escala - nova_escala;
        if (nova_escala == 1)
            diferenca++;
        comprimento_convertido = comprimento / (1.0 * pow(10, diferenca));
    }
    // caso sejam as mesmas escalas então nada se altera
    else
    {
        comprimento_convertido = comprimento;
    }

    return comprimento_convertido;
}

// 2. Unidades de massa
double conversaoMassa(double convertido, int origem, int destino)
{
    // 1 = gramas
    // 2 = quilos
    // 3 = toneladas

    switch (origem)
    {
        break;
    case 1:
        switch (destino)
        {
        case 1:
            convertido = convertido;
            break;
        case 2:
            convertido = convertido / 1000;
            break;
        case 3:
            convertido = convertido * 1000000;
            break;
        }
    case 2:
        switch (destino)
        {
        case 1:
            convertido = convertido * 1000;
            break;
        case 2:
            convertido = convertido;
            break;
        case 3:
            convertido = convertido / 1000;
            break;
        }
        break;
    case 3:
        switch (destino)
        {
        case 1:
            convertido = convertido * 1000000;
            break;
        case 2:
            convertido = convertido * 1000;
            break;
        case 3:
            convertido = convertido;
            break;
        }
        break;
    }

    return convertido;
}

// 3. Unidades de volume
float converterVolume(double valorConvertido, int unidadeOrigem, int unidadeDestino)
{
    // 1 = litro
    // 2 = mililitro
    // 3 = metro cubico

    // validação de erro de entrada
    if ((unidadeOrigem < 1 || unidadeOrigem > 3) || (unidadeDestino < 1 || unidadeDestino > 3))
    {
        return -1;
    }

    // usando litros como valor base
    double litros;

    if (unidadeOrigem == 1)
    {
        litros = valorConvertido;
    }
    else if (unidadeOrigem == 2)
    {
        litros = valorConvertido / 1000.0;
    }
    else if (unidadeDestino == 3)
    {
        litros = valorConvertido * 1000.0;
    }

    if (unidadeDestino == 1)
    {
        return litros;
    }
    else if (unidadeDestino == 2)
    {
        return litros * 1000.0;
    }
    else if (unidadeDestino == 3)
    {
        return litros / 1000.0;
    }

    return -1;
}

// 4. Unidades de temperatura
float conversor_temperatura(float temperatura, int escala, int nova_escala)
{
    // 1 = Celsius
    // 2 = Fahrenheit
    // 3 = Kelvin

    float temperatura_convertida = 0;
    // seleciona qual a escala atual da medida
    switch (escala)
    {
    case 1:
        // Converte de Celsius para Fahrenheit
        if (nova_escala == 2)
        {
            temperatura_convertida = (temperatura * (9.0 / 5.0)) + 32;
        }
        // Converte de Celsius para Kelvin
        else
        {
            temperatura_convertida = temperatura + 273.15;
        }
        break;
    case 2:
        // Converte de Fahrenheit para Celsius
        if (nova_escala == 1)
        {
            temperatura_convertida = (temperatura - 32) * (5.0 / 9.0);
        }
        // Converte de Fahrenheit para Kelvin
        else
        {
            temperatura_convertida = ((temperatura - 32) * (5.0 / 9.0)) + 273.15;
        }
        break;
    case 3:
        // Converte de Kelvin para Celsius
        if (nova_escala == 1)
        {
            temperatura_convertida = temperatura - 273.15;
        }
        // Converte de Kelvin para Fahrenheit
        else
        {
            temperatura_convertida = ((temperatura - 273.15) * (9.0 / 5.0)) + 32;
        }
        break;
    default:
        break;
    }

    return temperatura_convertida;
}

// 5. Unidades de velocidade
double conversaoVelocidade(double convertido, int origem, int destino)
{
    // 1 = m/s
    // 2 = km/h
    // 3 = mph

    switch (origem)
    {
        break;
    case 1:
        switch (destino)
        {
        case 1:
            convertido = convertido;
            break;
        case 2:
            convertido = convertido * 3.6;
            break;
        case 3:
            convertido = convertido * 2.236;
            break;
        }
    case 2:
        switch (destino)
        {
        case 1:
            convertido = convertido / 3.6;
            break;
        case 2:
            convertido = convertido;
            break;
        case 3:
            convertido = convertido * 1.609;
            break;
        }
        break;
    case 3:
        switch (destino)
        {
        case 1:
            convertido = convertido / 2.236;
            break;
        case 2:
            convertido = convertido / 1.609;
            break;
        case 3:
            convertido = convertido;
            break;
        }
        break;
    }

    return convertido;
}

// 6. Unidades de potência
float conversorPotencia(float valorPotencia, int opcaoOrigem, int opcaoDestino)
{
    // 1. Watt (W)
    // 2. Kilowatt (kW)
    // 3. Cavalo-vapor (cv)

    switch (opcaoOrigem)
    {
    case 1:
        switch (opcaoDestino)
        {
        case 1:
            valorPotencia = valorPotencia;
            break;
        case 2:
            valorPotencia = valorPotencia / 1000;
            break;
        case 3:
            valorPotencia = valorPotencia / 0.7355;
            break;
        }
    case 2:
        switch (opcaoDestino)
        {
        case 1:
            valorPotencia = valorPotencia * 1000;
            break;
        case 2:
            valorPotencia = valorPotencia;
            break;
        case 3:
            valorPotencia = valorPotencia * 1.3596;
            break;
        }
        break;
    case 3:
        switch (opcaoDestino)
        {
        case 1:
            valorPotencia = valorPotencia * 0.7355;
            break;
        case 2:
            valorPotencia = valorPotencia / 1.3596;
            break;
        case 3:
            valorPotencia = valorPotencia;
            break;
        }
        break;
    }

    return valorPotencia;
}

// 7. Unidades de área
double conversaoArea(double valorArea, int opcaoOrigem, int opcaoDestino)
{
    // 1 - Metro quadrado
    // 2 - Centímetro quadrado

    // Validação de erro
    if ((opcaoOrigem < 1 || opcaoOrigem > 2) || (opcaoDestino < 1 || opcaoDestino > 2))
    {
        return -1;
    }
    // Convertendo para m²
    double area;
    if (opcaoOrigem == 1)
    {
        area = valorArea;
    }
    else if (opcaoOrigem == 2)
    {
        area = valorArea / 10000.0;
    }
    // Convertendo para unidade final
    if (opcaoDestino == 1)
    {
        return area;
    }
    else if (opcaoDestino == 2)
    {
        return area * 10000.0;
    }

    return -1;
}

// 8. Unidades de tempo (segundos, minutos, horas)
float conversaoTempo(float valorTempo, int opcaoOrigem, int opcaoDestino)
{
    // 1 = Segundos
    // 2 = Minutos
    // 3 = Horas

    switch (opcaoOrigem)
    {
        break;
    case 1:
        switch (opcaoDestino)
        {
        case 1:
            valorTempo = valorTempo;
            break;
        case 2:
            valorTempo = valorTempo / 60;
            break;
        case 3:
            valorTempo = valorTempo / 3600;
            break;
        }
    case 2:
        switch (opcaoDestino)
        {
        case 1:
            valorTempo = valorTempo * 60;
            break;
        case 2:
            valorTempo = valorTempo;
            break;
        case 3:
            valorTempo = valorTempo / 60;
            break;
        }
        break;
    case 3:
        switch (opcaoDestino)
        {
        case 1:
            valorTempo = valorTempo * 3600;
            break;
        case 2:
            valorTempo = valorTempo * 60;
            break;
        case 3:
            valorTempo = valorTempo;
            break;
        }
        break;
    }

    return valorTempo;
}

// 9. Unidades de armazenamento de dados (Bits, bytes, kilobytes (KB), megabytes (MB), gigabytes (GB), terabytes (TB))
double converter_unidades(double valor, int unidade_origem, int unidade_destino)
{
    double valor_em_bytes;
    switch (unidade_origem)
    {
    case 1: // bits
        valor_em_bytes = valor / 8;
        break;
    case 2: // bytes
        valor_em_bytes = valor;
        break;
    case 3: // kilobytes
        valor_em_bytes = valor * 1024;
        break;
    case 4: // megabytes
        valor_em_bytes = valor * 1024 * 1024;
        break;
    case 5: // gigabytes
        valor_em_bytes = valor * 1024 * 1024 * 1024;
        break;
    case 6: // terabytes
        valor_em_bytes = valor * 1024 * 1024 * 1024 * 1024;
        break;
    }

    double valor_final;
    switch (unidade_destino)
    {
    case 1: // bits
        valor_final = valor_em_bytes * 8;
        break;
    case 2: // bytes
        valor_final = valor_em_bytes;
        break;
    case 3: // kilobytes
    case 4: // megabytes
    case 5: // gigabytes
    case 6: // terabytes
        for (int i = 0; i < unidade_destino - 2; i++)
        {
            valor_em_bytes = valor_em_bytes / 1024;
        }
        valor_final = valor_em_bytes;
        break;
    }

    return valor_final;
}

// Funções de menu

int menuPrincipal()
{
    int opcao;
    printf("\n");
    printf("--------------------------------\n");
    printf("Menu Principal\n");
    printf("0. Sair\n");
    printf("1. Unidades de comprimento\n");
    printf("2. Unidades de massa\n");
    printf("3. Unidades de volume\n");
    printf("4. Unidades de temperatura\n");
    printf("5. Unidades de velocidade\n");
    printf("6. Unidades de potência\n");
    printf("7. Unidades de área\n");
    printf("8. Unidades de tempo\n");
    printf("9. Unidades de armazenamento de dados\n");
    printf("--------------------------------\n");
    printf("Digite a opção desejada: ");

    if (scanf("%d", &opcao) != 1)
    {
        while (getchar() != '\n')
            ;
        printf("Entrada inválida! Por favor, digite um número.\n");
        return -1;
    }

    return opcao;
}

int menuComprimento()
{
    int opcao;
    printf("--------------------------------\n");
    printf("Unidades de comprimento\n");
    printf("1. Metro (m)\n");
    printf("2. Centímetro (cm)\n");
    printf("3. Milímetro (mm)\n");
    printf("0. Voltar\n");
    printf("--------------------------------\n");
    printf("Digite a opção desejada: ");

    if (scanf("%d", &opcao) != 1)
    {
        while (getchar() != '\n')
            ;
        printf("Entrada inválida! Por favor, digite um número.\n");
        return -1;
    }

    if (opcao < 0 || opcao > 3)
    {
        printf("Opção inválida!\n");
        return -1;
    }
    else
    {
        return opcao;
    }
}

int menuMassa()
{
    int opcao;
    printf("--------------------------------\n");
    printf("Unidades de massa\n");
    printf("1. Quilograma (kg)\n");
    printf("2. Grama (g)\n");
    printf("3. Tonelada (t)\n");
    printf("0. Voltar\n");
    printf("--------------------------------\n");
    printf("Digite a opção desejada: ");

    if (scanf("%d", &opcao) != 1)
    {
        while (getchar() != '\n')
            ;
        printf("Entrada inválida! Por favor, digite um número.\n");
        return -1;
    }

    if (opcao < 0 || opcao > 3)
    {
        printf("Opção inválida!\n");
        return -1;
    }
    else
    {
        return opcao;
    }
}

int menuVolume()
{
    int opcao;
    printf("--------------------------------\n");
    printf("Unidades de volume\n");
    printf("1. Litro (L)\n");
    printf("2. Mililitro (mL)\n");
    printf("3. Metro cúbico (m³)\n");
    printf("0. Voltar\n");
    printf("--------------------------------\n");
    printf("Digite a opção desejada: ");

    if (scanf("%d", &opcao) != 1)
    {
        while (getchar() != '\n')
            ;
        printf("Entrada inválida! Por favor, digite um número.\n");
        return -1;
    }

    if (opcao < 0 || opcao > 3)
    {
        printf("Opção inválida!\n");
        return -1;
    }
    else
    {
        return opcao;
    }
}

int menuTemperatura()
{
    int opcao;
    printf("--------------------------------\n");
    printf("Unidades de temperatura\n");
    printf("1. Celsius (°C)\n");
    printf("2. Fahrenheit (°F)\n");
    printf("3. Kelvin (K)\n");
    printf("0. Voltar\n");
    printf("--------------------------------\n");
    printf("Digite a opção desejada: ");

    if (scanf("%d", &opcao) != 1)
    {
        while (getchar() != '\n')
            ;
        printf("Entrada inválida! Por favor, digite um número.\n");
        return -1;
    }

    if (opcao < 0 || opcao > 3)
    {
        printf("Opção inválida!\n");
        return -1;
    }
    else
    {
        return opcao;
    }
}

int menuVelocidade()
{
    int opcao;
    printf("--------------------------------\n");
    printf("Unidades de velocidade\n");
    printf("1. Quilômetros por hora (km/h)\n");
    printf("2. Metros por segundo (m/s)\n");
    printf("3. Milhas por hora (mph)\n");
    printf("0. Voltar\n");
    printf("--------------------------------\n");
    printf("Digite a opção desejada: ");

    if (scanf("%d", &opcao) != 1)
    {
        while (getchar() != '\n')
            ;
        printf("Entrada inválida! Por favor, digite um número.\n");
        return -1;
    }

    if (opcao < 0 || opcao > 3)
    {
        printf("Opção inválida!\n");
        return -1;
    }
    else
    {
        return opcao;
    }
}

int menuPotencia()
{
    int opcao;
    printf("--------------------------------\n");
    printf("Unidades de potência\n");
    printf("1. Watt (W)\n");
    printf("2. Kilowatt (kW)\n");
    printf("3. Cavalo-vapor (cv)\n");
    printf("0. Voltar\n");
    printf("--------------------------------\n");
    printf("Digite a opção desejada: ");

    if (scanf("%d", &opcao) != 1)
    {
        while (getchar() != '\n')
            ;
        printf("Entrada inválida! Por favor, digite um número.\n");
        return -1;
    }

    if (opcao < 0 || opcao > 3)
    {
        printf("Opção inválida!\n");
        return -1;
    }
    else
    {
        return opcao;
    }
}

int menuArea()
{
    int opcao;
    printf("--------------------------------\n");
    printf("Unidades de área\n");
    printf("1. Metro quadrado (m²)\n");
    printf("2. Centímetro quadrado (cm²)\n");
    printf("0. Voltar\n");
    printf("--------------------------------\n");
    printf("Digite a opção desejada: ");

    if (scanf("%d", &opcao) != 1)
    {
        while (getchar() != '\n')
            ;
        printf("Entrada inválida! Por favor, digite um número.\n");
        return -1;
    }

    if (opcao < 0 || opcao > 2)
    {
        printf("Opção inválida!\n");
        return -1;
    }
    else
    {
        return opcao;
    }
}

int menuTempo()
{
    int opcao;
    printf("--------------------------------\n");
    printf("Unidades de tempo\n");
    printf("1. Segundo (s)\n");
    printf("2. Minuto (min)\n");
    printf("3. Hora (h)\n");
    printf("0. Voltar\n");
    printf("--------------------------------\n");
    printf("Digite a opção desejada: ");

    if (scanf("%d", &opcao) != 1)
    {
        while (getchar() != '\n')
            ;
        printf("Entrada inválida! Por favor, digite um número.\n");
        return -1;
    }

    if (opcao < 0 || opcao > 3)
    {
        printf("Opção inválida!\n");
        return -1;
    }
    else
    {
        return opcao;
    }
}

int menuArmazenamento()
{
    int opcao;
    printf("--------------------------------\n");
    printf("Unidades de armazenamento de dados\n");
    printf("1. Bit (b)\n");
    printf("2. Byte (B)\n");
    printf("3. Kilobyte (KB)\n");
    printf("4. Megabyte (MB)\n");
    printf("5. Gigabyte (GB)\n");
    printf("6. Terabyte (TB)\n");
    printf("0. Voltar\n");
    printf("--------------------------------\n");
    printf("Digite a opção desejada: ");

    if (scanf("%d", &opcao) != 1)
    {
        while (getchar() != '\n')
            ;
        printf("Entrada inválida! Por favor, digite um número.\n");
        return -1;
    }

    if (opcao < 0 || opcao > 6)
    {
        printf("Opção inválida!\n");
        return -1;
    }
    else
    {
        return opcao;
    }
}