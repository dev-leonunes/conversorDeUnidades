# conversorDeUnidades

## Descrição do Projeto
Programa Conversor de Unidades em Linguagem C.

Para assegurar a assimilação dos conceitos iniciais de versionamento e do uso do Git e GitHub, propõe-se a criação de um repositório colaborativo. O objetivo principal é desenvolver habilidades práticas nessas ferramentas, com ênfase no trabalho em equipe e na colaboração. A atividade consistirá na configuração de um projeto simples, permitindo a simulação de um fluxo de trabalho real com versionamento.

## Pré-requisitos
- [MinGW](http://www.mingw.org/) (para compilação no Windows)
- [Git](https://git-scm.com/)

## Funcionalidades
- Conversão de comprimento
- Conversão de massa
- Conversão de volume
- Conversão de temperatura
- Conversão de velocidade
- Conversão de potência
- Conversão de área
- Conversão de tempo
- Conversão de armazenamento de dados

## Instalação
1. Clonar o repositório:

```
git clone git@github.com:dev-leonunes/conversorDeUnidades.git
```

ou

```
git clone https://github.com/dev-leonunes/conversorDeUnidades.git
```

2. Navegar até o diretório do projeto:

```
cd conversorDeUnidades
```

3. Criar o diretório de saída (se não existir):

```
mkdir -p ./src/output
```

4. Compilar o programa:

```
gcc src/main.c -o ./src/output/main.exe
```

Ou use o compilador do proprio IDE. Apertando o `F6` no VScode.

## Como utilizar

1. Executar o programa:

```
./src/output/main.exe
```

Ou use o compilar com o `F6` do VScode para já iniciar automaticamente.

4. Siga as instruções no terminal para selecionar as unidades e realizar as conversões.

## Exemplo de uso

```
Seja bem-vindo ao conversor de unidades!

--------------------------------
Menu Principal
0. Sair
1. Unidades de comprimento
2. Unidades de massa
3. Unidades de volume
4. Unidades de temperatura
5. Unidades de velocidade
6. Unidades de potência
7. Unidades de área
8. Unidades de tempo
9. Unidades de armazenamento de dados
--------------------------------
Digite a opção desejada: 3

Escolha a unidade de origem
--------------------------------
Unidades de volume
1. Litro (L)
2. Mililitro (mL)
3. Metro cúbico (m³)
0. Voltar
--------------------------------
Digite a opção desejada: 2
Digite o valor a ser convertido: 1000
Escolha a unidade de destino
--------------------------------
Unidades de volume
1. Litro (L)
2. Mililitro (mL)
3. Metro cúbico (m³)
0. Voltar
--------------------------------
Digite a opção desejada: 1
O valor 1000.00 convertido para a unidade desejada é 1.00
```

## Contribuição

1. Faça um fork do projeto.
2. Crie uma branch para sua feature (git checkout -b feature/nova-feature).
3. Commit suas mudanças (git commit -m 'Adiciona nova feature').
4. Faça o push para a branch (git push origin feature/nova-feature).
5. Abra um Pull Request.