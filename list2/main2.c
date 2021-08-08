/**
 * @file list2.h
 * @author Leone Rodrigues Santos
 * @brief 
 * @version 0.1
 * @date 2021-08-07
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "list2.h"

int main(int argc, char const *argv[]){

    // Variables

    list listExecution = create();
    int choice;
    bool op = true;
    int numberAdd;
    int pos;
    
    //Interactions with the list

    while (op){

        // List data 
        
        printf("\n\n---------- Lista de numeros inteiros ----------\n");
        printf("Posicao do primeiro elemento: %d\n", listExecution.first);
        printf("Posicao do ultimo elemento: %d\n", listExecution.last);
        printf("Quantidade de elementos: %d\n", listExecution.tam);

        // Interactions

        printf("\nOpcoes de intercao:");
        printf("\n1 - Adicionar numero");
        printf("\n2 - Remover numero");
        printf("\n3 - Mostrar a lista");
        printf("\n0 - Sair\n");

        // Colecting the option

        printf("\nQual opcao voce escolhe? ");
        scanf("%d", &choice);

        // Conditions to execute the program

        if (choice == 0){
            printf("\nFim da execucao do programa.\n");
            break;
        }
        
        else{
            switch (choice){    
            
                case 1:     // Add
                    printf("\nInsira o numero que voce deseja adcionar na lista: ");
                    scanf("%d", &numberAdd);
                    
                    if (end(&listExecution, numberAdd) == 1){
                        printf("\nElemento adicionado com sucesso.\n");
                        
                    }

                    else{
                        printf("\nA lista ja esta cheia, nao foi possivel adicionar o numero inserido.\n");
                    }
                    
                    break;

                case 2:     // Remove

                    if (listExecution.tam == 0){
                        printf("\nA lista esta vazia, portanto nao e possivel remover nenhum elemento.\n");
                    }
                    

                    else{
                        printf("\nInsira a posicao do numero que voce deseja remover na lista: ");
                        scanf("%d", &pos);

                        if(pos > listExecution.tam){
                            printf("\nPosicao invalida, verifique a posicao do ultimo elemento da lista.\n");
                        }
                        
                        else{
                            removel(&listExecution, pos);
                            printf("\nNumero removido com sucesso.\n");
                        }
                    }
                    
                    break;

                
                case 3:     // Print list

                    if (listExecution.tam == 0){
                        printf("\nA lista esta vazia no momento.\n");
                        break;
                    }
                    
                    else{
                        printList(&listExecution);
                        break;
                    }

                default:
                    printf("\nOpcao inserida invalida.\n");
                    break;
            }
        }
        
    }
    

    return 0;
}
