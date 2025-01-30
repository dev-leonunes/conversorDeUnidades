#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <conio.h>
#include "interface.h"

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
            if (opcaoOrigem == 0 || opcaoOrigem == -1)
                break;

            printf("\nDigite o valor a ser convertido: ");
            scanf("%f", &valorComprimento);

            printf("\nEscolha a unidade de destino\n");
            int opcaoDestino = menuComprimento();
            if (opcaoDestino == 0 || opcaoDestino == -1)
                break;

            valorConvertido = conversor_comprimento(valorComprimento, opcaoOrigem, opcaoDestino);
            printf("O valor %.2f convertido para a unidade desejada é %.2f\n", valorComprimento, valorConvertido);
            goto finally;
        }
        case 2:
        {
            double valorMassa, valorConvertido;

            printf("Escolha a unidade de origem\n");
            int opcaoOrigem = menuMassa();
            if (opcaoOrigem == 0 || opcaoOrigem == -1)
                break;

            printf("\nDigite o valor a ser convertido: ");
            scanf("%lf", &valorMassa);

            printf("\nEscolha a unidade de destino\n");
            int opcaoDestino = menuMassa();
            if (opcaoDestino == 0 || opcaoDestino == -1)
                break;

            valorConvertido = conversaoMassa(valorMassa, opcaoOrigem, opcaoDestino);
            printf("O valor %.2lf convertido para a unidade desejada é %.2lf\n", valorMassa, valorConvertido);
            goto finally;
        }
        case 3:
        {
            float valorVolume, valorConvertido;

            printf("Escolha a unidade de origem\n");
            int opcaoOrigem = menuVolume();
            if (opcaoOrigem == 0 || opcaoOrigem == -1)
                break;

            printf("\nDigite o valor a ser convertido: ");
            scanf("%f", &valorVolume);

            printf("\nEscolha a unidade de destino\n");
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
            if (opcaoOrigem == 0 || opcaoOrigem == -1)
                break;

            printf("\nDigite o valor a ser convertido: ");
            scanf("%f", &valorTemperatura);

            printf("\nEscolha a unidade de destino\n");
            int opcaoDestino = menuTemperatura();
            if (opcaoDestino == 0 || opcaoDestino == -1)
                break;

            valorConvertido = conversor_temperatura(valorTemperatura, opcaoOrigem, opcaoDestino);
            printf("O valor %.2f convertido para a unidade desejada é %.2f\n", valorTemperatura, valorConvertido);
            goto finally;
        }
        case 5:
        {
            double valorVelocidade, valorConvertido;

            printf("Escolha a unidade de origem\n");
            int opcaoOrigem = menuVelocidade();
            if (opcaoOrigem == 0 || opcaoOrigem == -1)
                break;

            printf("\nDigite o valor a ser convertido: ");
            scanf("%lf", &valorVelocidade);

            printf("\nEscolha a unidade de destino\n");
            int opcaoDestino = menuVelocidade();
            if (opcaoDestino == 0 || opcaoDestino == -1)
                break;

            valorConvertido = conversaoVelocidade(valorVelocidade, opcaoOrigem, opcaoDestino);
            printf("O valor %.2f convertido para a unidade desejada é %.2f\n", valorVelocidade, valorConvertido);
            goto finally;
        }
        case 6:
        {
            float valorPotencia, valorConvertido;

            printf("Escolha a unidade de origem\n");
            int opcaoOrigem = menuPotencia();
            if (opcaoOrigem == 0 || opcaoOrigem == -1)
                break;

            printf("\nDigite o valor a ser convertido: ");
            scanf("%f", &valorPotencia);

            printf("\nEscolha a unidade de destino\n");
            int opcaoDestino = menuPotencia();
            if (opcaoDestino == 0 || opcaoDestino == -1)
                break;

            valorConvertido = conversorPotencia(valorPotencia, opcaoOrigem, opcaoDestino);
            printf("O valor %.2f convertido para a unidade desejada é %.2f\n", valorPotencia, valorConvertido);
            goto finally;
        }
        case 7:
        {
            float valorArea, valorConvertido;

            printf("Escolha a unidade de origem\n");
            int opcaoOrigem = menuArea();
            if (opcaoOrigem == 0 || opcaoOrigem == -1)
                break;

            printf("\nDigite o valor a ser convertido: ");
            scanf("%f", &valorArea);
            printf("\nEscolha a unidade de destino\n");
            int opcaoDestino = menuArea();
            if (opcaoDestino == 0 || opcaoDestino == -1)
                break;

            valorConvertido = conversaoArea(valorArea, opcaoOrigem, opcaoDestino);
            printf("O valor %.2f convertido para a unidade desejada é %.2f\n", valorArea, valorConvertido);
            goto finally;
        }
        case 8:
        {
            float valorTempo, valorConvertido;

            printf("Escolha a unidade de origem\n");
            int opcaoOrigem = menuTempo();
            if (opcaoOrigem == 0 || opcaoOrigem == -1)
                break;

            printf("\nDigite o valor a ser convertido: ");
            scanf("%f", &valorTempo);

            printf("\nEscolha a unidade de destino\n");
            int opcaoDestino = menuTempo();
            if (opcaoDestino == 0 || opcaoDestino == -1)
                break;

            valorConvertido = conversaoTempo(valorTempo, opcaoOrigem, opcaoDestino);
            printf("O valor %.2f convertido para a unidade desejada é %.2f\n", valorTempo, valorConvertido);
            goto finally;
        }
        case 9:
        {
            double valorArmazenamento, valorConvertido;

            printf("Escolha a unidade de origem\n");
            int opcaoOrigem = menuArmazenamento();
            if (opcaoOrigem == 0 || opcaoOrigem == -1)
                break;

            printf("\nDigite o valor a ser convertido: ");
            scanf("%lf", &valorArmazenamento);

            printf("\nEscolha a unidade de destino\n");
            int opcaoDestino = menuArmazenamento();
            if (opcaoDestino == 0 || opcaoDestino == -1)
                break;

            valorConvertido = converter_unidades(valorArmazenamento, opcaoOrigem, opcaoDestino);
            printf("O valor %lf convertido para a unidade desejada é %lf\n", valorArmazenamento, valorConvertido);
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
