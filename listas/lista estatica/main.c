/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Aluno
 *
 * Created on 23 de Maio de 2022, 16:30
 */
#include "funcoes.h"


/*
 * 
 */



int main(int argc, char** argv) {
    Lista lista;
    criarLista(&lista);
    insereIten(&lista, 1);
    insereIten(&lista, 2);
    insereIten(&lista, 3);
    insereIten(&lista, 4);
    insereIten(&lista, 5);
    
    imprimeLista(&lista);
    
    removeLista(&lista, 3);
    
    imprimeLista(&lista);

    
    
    return 0;
}

