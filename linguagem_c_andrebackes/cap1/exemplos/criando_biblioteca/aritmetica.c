/*
 * exemplo de como criar uma bibloteca
 * arquivo com extensao .c
 * aqui vai a definição das funções prototipadas no arquivo .h
 */

#include "aritmetica.h" /* o arquivo .c deve incluir o arquivo .h */

int soma(int a, int b)
{
	return a + b;
}

int diferenca(int a, int b)
{
	return a - b;
}

int divisao(int a, int b)
{
	return a / b;
}

int multiplicacao(int a, int b)
{
	return a * b;
}