#include <stdio.h>
#include <string.h>

int P = 0;
int R = 0;

void readDataFromFile(int available[], int max[][R], int alloc[][R], int need[][R]);

int main()
{
    FILE* in = fopen("data.txt", "r");
    fscanf(in, "%d", &P);
    fscanf(in, "%d", &R);
    int available[R];
    int max[P][R];
    int alloc[P][R];
    int need[P][R];

    readDataFromFile(available, max, alloc, need);
    printMatrixByName("\nMAXIMUM : \n", max);
    printMatrixByName("\nALLOCATION : \n", alloc);
    printMatrixByName("\nNEEDS : \n", need);
    printAvaliableMatrix( available);


    return 0;
}




void readDataFromFile(int available[], int max[][R], int alloc[][R], int need[][R])
{

    FILE* in = fopen("data.txt", "r");
    fscanf(in, "%d%d", &P, &R);


    printf("%d    %d\n", P, R);

    for (int i = 0; i < P; i++)
    {
        for (int j = 0; j < R; j++)
        {
            fscanf(in, "%d", &max[i][j]);
        }
    }

    for (int i = 0; i < P; i++)
    {
        for (int j = 0; j < R; j++)
        {
            fscanf(in, "%d", &alloc[i][j]);
        }
    }


    for (int i = 0; i < P; i++)
    {
        for (int j = 0; j < R; j++)
        {
            need[i][j] = max[i][j] - alloc[i][j];
        }
    }

    for (int i = 0; i < R; i++)
    {

        fscanf(in, "%d", &available[i]);

    }






    fclose(in);
}

printMatrixByName (char matrixName[], int matrix[][R] )
{
    puts("\n_____________________________________________________________");

    puts(matrixName) ;


    for (int i = 0 ; i < P ; i++)
    {
        for (int j = 0 ; j < R ; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    puts("_____________________________________________________________");


}


printAvaliableMatrix (int matrix [])
{
    puts("\n_____________________________________________________________");

    puts("\nAVAILABLE : \n") ;


    for (int i = 0 ; i < R ; i++)
    {
        printf("%d  ", matrix[i]);
    }
    puts("\n_____________________________________________________________");


}
