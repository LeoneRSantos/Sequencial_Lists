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

#define MAX 1000
#include <stdio.h>

// List struct

typedef struct list2{
    int first;
    int last;
    int array[MAX];
    int tam;
    
} list;

// Method header

list create();
int end(list *l, int enter);
int add(list *l, int enter, int position);
void printList(list *l);
void removel(list* l, int position);


// Methods

// In order to create a new list

list create(){
    list newList;
    newList.first = 0;
    newList.last = 0;
    newList.tam = 0;

    return newList;
}

// To add an end

int end(list *l, int enter){
    
    if (l->tam < MAX){
        l->array[l->last] = enter;
        l->tam++;
        l->last++;
        return 1;
    }
    
    else{
        return 0;
    }
}

// To add an element

int add(list *l, int enter, int position){
    
    for (int i = 0; l->last, i < position; i--){
        l->array[i] = l->array[i-1];
    }

    l->array[position] = enter;
    l->tam++;
    l->last++;
    
    return 1;

}

// To print the list 

void printList(list *l){

    for (int i = l->first; i < l->last; i++){
        printf("\n\n%dº elemento: %d\n", i+1, l->array[i]);
    }
    
}

// To remove an element

void removel(list* l, int position){

    for (int i = position; i < l->last; i++){
        l->array[i] = l->array[i+1];
    }
    
    l->tam--;
    l->last--;
}
