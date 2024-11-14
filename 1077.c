//1077 - Infixa para Posfixa

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>

struct Pilha_N{
    char valor;
    struct Pilha_N* abaixo;
};

struct Pilha{
    int tam;
    struct Pilha_N* acima;
};

void push (struct Pilha* p, char valor){
    p->tam += 1;
    struct Pilha_N* acima2 = (struct Pilha_N*) malloc(sizeof(struct Pilha_N));

    acima2->valor = valor;
    acima2->abaixo = p->acima;
    p->acima = acima2;
}

void pop(struct Pilha* p){
    if(p->tam > 0){
        p->tam -= 1;
        struct Pilha_N* acima0 = p->acima;
        p->acima = p->acima->abaixo;
        free(acima0);
    }
}

char top(struct Pilha* p){
    return p->acima->valor;
}

int size(struct Pilha* p){
    return p->tam;
}

int empty(struct Pilha* p){
    return p->tam == 0;
}

void inicia(struct Pilha* p){
    p->tam = 0;
    p->acima = NULL;
}

void apaga(struct Pilha* p){
    while(!empty(p)){
        pop(p);
    }
}

int precedencia(char operador){
    switch(operador){
        case '+':
        case '-':   return 1;
        case '*':
        case '/':   return 2;
    }
}

int main(){
    int N, tam;
    struct Pilha p;
    char conta[301];

    scanf("%d\n", &N);

    for(int k = 0; k < N; ++k){
        scanf("%s\n", &conta);

        inicia(&p);

        tam = strlen(conta);
        for(int i = 0; i < tam; ++i){
            if(isalpha(conta[i]) || isdigit(conta[i])){
                printf("%c", conta[i]);
            }else if(conta[i] == '(' || conta[i] == '^'){
                push(&p, conta[i]);
            }else if(conta[i] == ')'){
                while(!empty(&p) && top(&p) != '('){
                    printf("%c", top(&p));
                    pop(&p);
                }

                if(!empty(&p))  pop(&p);
            }else{
                while(!empty(&p) && top(&p) != '(' && precedencia(conta[i]) <= precedencia(top(&p))){
                    printf("%c", top(&p));
                    pop(&p);
                }

                push(&p, conta[i]);
            }
        }

        while(!empty(&p)){
            printf("%c", top(&p));
            pop(&p);
        }
        printf("\n");
    }

    return 0;
}

