/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Aluno
 *
 * Created on 12 de Julho de 2022, 16:33
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/*
 * 
 */
int main(int argc, char** argv) {
    FILE* arq =fopen("entrada.txt","r");
    FILE* mai =fopen("maiusculo.txt","w");
    if(arq!=NULL){
        printf("arquivo aberto com sucesso\n");
        int i;
        int nlinha=1;
        char nome[30];
        //int x = fscanf(arq,"%d\t%[^\n]\n",&i ,&nome);
        char c;
        while((c=fgetc(arq)) != EOF){
           printf("%c\n",c);
           if(c == '\n'){
               nlinha++;
               
           }
        }
        rewind(arq);
        for(c=fgetc(arq) ;c!=EOF ;c=fgetc(arq)){
            char newchar = toupper(c);
            fprintf(mai,"%c",newchar);
        }
        printf("numero de linhas:%d",nlinha);
        
        
        
        
        
        
        
        
        
        fclose(arq);
        fclose(mai);
    }else{
        printf("erro");
    }
    
    
    
    return (EXIT_SUCCESS);
}

