#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <conio.h>
#include <math.h>
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
double conversaoVelocidade(double convertido, int origem, int destino){
    int escolha1,escolha2;

    // 1 = m/s
    // 2 = km/h
    // 3 = mph

    switch(origem){
            break;
        case 1:
        switch(destino){
            case 1: convertido = convertido;
                break;
            case 2: convertido = convertido*3.6;
                break;
            case 3: convertido = convertido*2.236;
                break;
        }
        case 2: 
        switch(destino){ 
            case 1: convertido = convertido/3.6;
                break;
            case 2: convertido = convertido;
                break;
            case 3: convertido = convertido*1.609;
                break;
        }
            break;
        case 3:
        switch(destino){
            case 1: convertido = convertido/2.236;
                break;
            case 2: convertido = convertido/1.609;
                break;
            case 3: convertido = convertido;
                break;
        }
            break;
    }
    return convertido;
}
// 6. Unidades de potência
void MenuPot() {
    int opcao;
    float valor, resultado;
    printf("Escolha uma opcao:\n");
    printf("1 - Converter de kW para CV\n");
    printf("2 - Converter de CV para kW\n");
    printf("3 - Converter de kW para HP\n");
    printf("4 - Converter de HP para kW\n");
    printf("0 - Sair\n");
        printf("Digite a sua opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite o valor em kW: ");
                scanf("%f", &valor);
                resultado = valor * 1.36;
                printf("%.2f kW equivalente a %.2f CV.\n\n", valor, resultado);
                break;
            case 2:
                printf("Digite o valor em CV: ");
                scanf("%f", &valor);
                resultado = valor / 1.36;
                printf("%.2f CV equivalente a %.2f kW.\n\n", valor, resultado);
                break;
            case 3:
                printf("Digite o valor em kW: ");
                scanf("%f", &valor);
                resultado = valor * 1.341;
                printf("%.2f kW equivalente a %.2f HP.\n\n", valor, resultado);
                break;
            case 4:
                printf("Digite o valor em HP: ");
                scanf("%f", &valor);
                resultado = valor / 1.341;
                printf("%.2f HP equivalente a %.2f kW.\n\n", valor, resultado);
                break;
            case 0:
                printf("Retornando ao menu principal.\n");
                break;
            default:
                printf("Escolha invalida! Tente novamente.\n\n");

        }
}
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
//
// 9. Unidades de armazenamento de dados (Bits, bytes, kilobytes (KB), megabytes (MB), gigabytes (GB), terabytes (TB))
//
//
//
//
//
// 10. Interface de usuário
int menuPrincipal();
int menuComprimento();
int menuMassa();
int menuVolume();
int menuTemperatura();
int menuVelocidade();
int menuArea();
int menuTempo();
int menuArmazenamento();

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);

    printf("Seja bem-vindo ao conversor de unidades!\n");

    while (1)
    {
        int opcao = menuPrincipal();
        switch (opcao)
        {
        case 0:
            printf("\nObrigado por usar o conversor de unidades!\nAté mais!\n");
            return 0;
        case 1:
        {
            float valorComprimento, valorConvertido;

            printf("Escolha a unidade de origem\n");
            int opcaoOrigem = menuComprimento();
            if (opcaoOrigem == 0)
                break;

            printf("Digite o valor a ser convertido: ");
            scanf("%f", &valorComprimento);

            printf("Escolha a unidade de destino\n");
            int opcaoDestino = menuComprimento();
            if (opcaoDestino == 0)
                break;

            // valorConvertido = conversaoComprimento(valorComprimento, opcaoOrigem, opcaoDestino);
            // printf("O valor %.2f convertido para a unidade desejada é %.2f\n", valorComprimento, valorConvertido);
            goto finally;
        }
        case 2:
        {
            float valorMassa, valorConvertido;

            printf("Escolha a unidade de origem\n");
            int opcaoOrigem = menuMassa();
            if (opcaoOrigem == 0)
                break;

            printf("Digite o valor a ser convertido: ");
            scanf("%f", &valorMassa);

            printf("Escolha a unidade de destino\n");
            int opcaoDestino = menuMassa();
            if (opcaoDestino == 0)
                break;

            // valorConvertido = conversaoMassa(valorMassa, opcaoOrigem, opcaoDestino);
            // printf("O valor %.2f convertido para a unidade desejada é %.2f\n", valorMassa, valorConvertido);
            goto finally;
        }
        case 3:
        {
            float valorVolume, valorConvertido;

            printf("Escolha a unidade de origem\n");
            int opcaoOrigem = menuVolume();
            if (opcaoOrigem == 0 || opcaoOrigem == -1)
                break;

            printf("Digite o valor a ser convertido: ");
            scanf("%f", &valorVolume);

            printf("Escolha a unidade de destino\n");
            int opcaoDestino = menuVolume();
            if (opcaoDestino == 0 || opcaoDestino == -1)
                break;

            valorConvertido = converterVolume(valorVolume, opcaoOrigem, opcaoDestino);
            printf("O valor %.2f convertido para a unidade desejada é %.2f\n", valorVolume, valorConvertido);
            goto finally;
        }
        case 4:
        {
            float valorTemperatura, valorConvertido;

            printf("Escolha a unidade de origem\n");
            int opcaoOrigem = menuTemperatura();
            if (opcaoOrigem == 0)
                break;

            printf("Digite o valor a ser convertido: ");
            scanf("%f", &valorTemperatura);

            printf("Escolha a unidade de destino\n");
            int opcaoDestino = menuTemperatura();
            if (opcaoDestino == 0)
                break;

            // valorConvertido = (valorTemperatura, opcaoOrigem, opcaoDestino);
            // printf("O valor %.2f convertido para a unidade desejada é %.2f\n", valorTemperatura, valorConvertido);
            goto finally;
        }
        case 5:
        {
            double valorVelocidade, valorConvertido;

            printf("Escolha a unidade de origem\n");
            int opcaoOrigem = menuVelocidade();
            if (opcaoOrigem == 0)
                break;

            printf("Digite o valor a ser convertido: ");
            scanf("%lf", &valorVelocidade);

            printf("Escolha a unidade de destino\n");
            int opcaoDestino = menuVelocidade();
            if (opcaoDestino == 0)
                break;

            // valorConvertido = conversaoVelocidade(valorVelocidade, opcaoOrigem, opcaoDestino);
            // printf("O valor %.2f convertido para a unidade desejada é %.2f\n", valorVelocidade, valorConvertido);
            goto finally;

        }
        case 6:
        {
           MenuPot();
                break;

            // valorConvertido = (valorPotencia, opcaoOrigem, opcaoDestino);
            // printf("O valor %.2f convertido para a unidade desejada é %.2f\n", valorPotencia, valorConvertido);
            goto finally;
        }
        case 7:
        {
            float valorArea, valorConvertido;

            printf("Escolha a unidade de origem\n");
            int opcaoOrigem = menuArea();
            if (opcaoOrigem == 0)
                break;

            printf("Digite o valor a ser convertido: ");
            scanf("%f", &valorArea);
            printf("Escolha a unidade de destino\n");
            int opcaoDestino = menuArea();
            if (opcaoDestino == 0)
                break;

            // valorConvertido = conversaoArea(valorArea, opcaoOrigem, opcaoDestino);
            // printf("O valor %.2f convertido para a unidade desejada é %.2f\n", valorArea, valorConvertido);
            goto finally;
        }
        case 8:
        {
            float valorTempo, valorConvertido;

            printf("Escolha a unidade de origem\n");
            int opcaoOrigem = menuTempo();
            if (opcaoOrigem == 0)
                break;

            printf("Digite o valor a ser convertido: ");
            scanf("%f", &valorTempo);

            printf("Escolha a unidade de destino\n");
            int opcaoDestino = menuTempo();
            if (opcaoDestino == 0)
                break;

            // valorConvertido = conversaoTempo(valorTempo, opcaoOrigem, opcaoDestino);
            // printf("O valor %.2f convertido para a unidade desejada é %.2f\n", valorTempo, valorConvertido);
            goto finally;
        }
        case 9:
        {
            float valorArmazenamento, valorConvertido;

            printf("Escolha a unidade de origem\n");
            int opcaoOrigem = menuArmazenamento();
            if (opcaoOrigem == 0)
                break;

            printf("Digite o valor a ser convertido: ");
            scanf("%f", &valorArmazenamento);

            printf("Escolha a unidade de destino\n");
            int opcaoDestino = menuArmazenamento();
            if (opcaoDestino == 0)
                break;

            // valorConvertido = conversaoArmazenamento(valorArmazenamento, opcaoOrigem, opcaoDestino);
            // printf("O valor %.2f convertido para a unidade desejada é %.2f\n", valorArmazenamento, valorConvertido);
            goto finally;
        }
        default:
            printf("Opção inválida!\n");
            continue;
        }

    finally:
        printf("\nPressione qualquer tecla para continuar...");
        getch();
        printf("\n");
        continue;
    }

    return 0;
}

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
    printf("\n");
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
    printf("\n");
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
    printf("\n");
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
    printf("\n");
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
    printf("\n");
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


int menuArea()
{
    int opcao;
    printf("\n");
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
    printf("\n");
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
    printf("\n");
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
