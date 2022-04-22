#include <stdio.h>
#include <time.h>
//#include <omp.h>

int thread_count = 4;



int solveSudoku(int x, int y);
void printSudoku();
int sameColumn(int x, int y, int number);
int sameRow(int x, int y, int number);
int sameSquare(int x, int y, int number);

int sudoku[9][9] = {  
            {0, 2, 4, 5, 3, 9, 1, 8, 7},
            {5, 1, 0, 7, 2, 8, 0, 3, 4},
            {8, 3, 7, 6, 1, 4, 2, 9, 5},
            {1, 0, 3, 8, 6, 0, 7, 2, 9},
            {9, 5, 8, 2, 4, 7, 3, 6, 1},
            {7, 6, 2, 3, 9, 1, 4, 0, 8},
            {3, 7, 1, 0, 5, 6, 8, 4, 2},
            {4, 9, 6, 1, 8, 2, 5, 7, 0},
            {0, 8, 5, 4, 0, 0, 0, 1, 6}
        };



int main(){
    clock_t start, end;
    double cpu_time_taken;
    start = clock();
    int x = 0;
    int y = 0;

    printSudoku();
    solveSudoku(x,y);
    printf("Done:\n");
    printSudoku();
    end = clock();
    cpu_time_taken = ((double)end-start)/CLOCKS_PER_SEC;
    printf("%lf\n",cpu_time_taken);
    FILE *fp;
    fp =fopen("adatok.csv","a");
    fprintf(fp,"%lf\n",cpu_time_taken);
    return 0;
}

void printSudoku(){
    for(int i = 0; i< 9; i++){
        for(int j = 0; j< 9; j++){
            printf("%d ", sudoku[i][j]);
        }
        printf("\n");
    }
    printf("\n\n\n");
}



int sameColumn(int x, int y, int number){
    for(int i = 0; i < 9; i++){
        if (sudoku[x][i] == number){
            return 1;
        }
    }
    return 0;
}

int sameRow(int x, int y, int number){
    for(int i = 0; i < 9; i++){
        if (sudoku[i][y] == number){
            return 1;
        }
    }
    return 0;
}

int sameSquare(int x, int y, int number){
    if(x<3){
        x = 0;
    }else if(x<6){
        x = 3;
    }else{
        x = 6;
    }

    if(y<3){
        y = 0;
    }else if(y<6){
        y = 3;
    }else{
        y = 6;
    }

    for(int i = x; i < x+3; i++){
        for (int j = y; j < y+3; j++){
            if (sudoku[i][j] == number){
                return 1;
            }
        }
    }
    return 0;
}

int solveSudoku(int x, int y){
    int number = 1;
    int tx = 0;
    int ty = 0;
    if(sudoku[x][y] != 0){
        if(x == 8 && y == 8){
            return 1;
        }
        if(x < 8){
            x++;
        }else{
            if(y<8){
                x=0;
                y++;
            }
        }
        if(solveSudoku(x,y)){
            return 1;
        }else{
            return 0;
        }
    }
    if (sudoku[x][y] == 0){
        while (number < 10){
            if(!sameSquare(x,y,number) && !sameRow(x,y,number) && !sameColumn(x,y,number)){
                sudoku[x][y] = number;
                if(x==8&&y==8){
                    return 1;
                }
                if(x<8){
                    tx = x+1;
                }else{
                if(x<8){
                    tx = 0;
                    ty = y+1;
                }
            }
            if(solveSudoku(tx,ty)){
                return 1;
            }
        }
        
        //ide kell majd a thread azért hogy kirajzoljam a változásokat
        number++;
    }
    sudoku[x][y] = 0;
    return 0;
}
}
