#include <stdio.h>

int sudoku[9][9];

int Linha(int m){
    int l[10] = {0,0,0,0,0,0,0,0,0,0};

    for(int i = 0; i < 9; ++i){
        if(l[sudoku[m][i]])   return 0;
        l[sudoku[m][i]] += 1;
    }

    return 1;
}

int Coluna(int m){
    int c[10] = {0,0,0,0,0,0,0,0,0,0};

    for(int i = 0; i < 9; ++i){
        if(c[sudoku[i][m]])   return 0;
        c[sudoku[i][m]] += 1;
    }

    return 1;
}

int Bloco(int m){
    int b[10] = {0,0,0,0,0,0,0,0,0,0};

    for(int i = 0; i < 3; ++i){
        for(int j = 0; j < 3; ++j){
            if(b[sudoku[3*(m/3) + i][3*(m%3) + j]])  return 0;
            b[sudoku[3*(m/3) + i][3*(m%3) + j]] += 1;
        }
    }

    return 1;
}

int main(){
    int n;
    char* fim;

    scanf("%d", &n);

    for(int instancia = 1; instancia <= n; ++instancia){
        for(int i = 0; i < 9; ++i){
            for(int j = 0; j < 9; ++j){
                scanf("%d", &sudoku[i][j]);
            }
        }

        printf("Instancia %d\n", instancia);

        fim = "SIM";
        for(int i = 0; i < 9; ++i){
            if(Linha(i) == 0 || Coluna(i) == 0 || Bloco(i) == 0){
                fim = "NAO";
                break;
            }
        }

        printf("%s\n\n", fim);
    }

    return 0;
}
