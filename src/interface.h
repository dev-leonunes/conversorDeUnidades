#ifndef INTERFACE_H
#define INTERFACE_H

// Funções de conversão
float conversor_comprimento(float comprimento, int escala, int nova_escala);
double conversaoMassa(double convertido, int origem, int destino);
float converterVolume(double valorConvertido, int unidadeOrigem, int unidadeDestino);
float conversor_temperatura(float temperatura, int escala, int nova_escala);
double conversaoVelocidade(double convertido, int origem, int destino);
float conversorPotencia(float valorPotencia, int opcaoOrigem, int opcaoDestino);
double conversaoArea(double valorArea, int opcaoOrigem, int opcaoDestino);
float conversaoTempo(float valorTempo, int opcaoOrigem, int opcaoDestino);
double converter_unidades(double valor, int unidade_origem, int unidade_destino);

// Interface de usuário
int menuPrincipal();
int menuComprimento();
int menuMassa();
int menuVolume();
int menuTemperatura();
int menuVelocidade();
int menuPotencia();
int menuArea();
int menuTempo();
int menuArmazenamento();

#endif