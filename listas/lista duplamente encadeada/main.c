/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Aluno
 *
 * Created on 24 de Maio de 2022, 16:17
 */
#include <stdio.h>
#include <stdlib.h>
#include "funcoes.h"

int main() {
    NoLista* lista;
    lista = criarlista();
   // estavazia(&lista);
    insereElemento(&lista, 1);
    insereElemento(&lista, 2);
    insereElemento(&lista, 3);
    insereElemento(&lista, 4);
    insereElemento(&lista, 5);
    imprime(&lista);
    RemoveItem(&lista, 4);
    printf("-----------------");
    imprime(&lista);

    return 0;
}

