#include <stdio.h>

void inputMatrix(int arr[][3])
{

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter element %d %d: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
}
void printMatrix(int arr[][3])
{

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

void addMatrix(int a[][3],int b[][3], int c[3][3]){
     for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
           c[i][j]=a[i][j]+b[i][j];
        }
      
    }
}

void multiplyMatrix(int a[][3],int b[][3],int c[][3]){

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
           c[i][j]=0;
            for(int k=0;k<3;k++){
                c[i][j]+=a[i][k]*b[k][j];
            }

        }
    }
}

int solve(int a[][4]){

    int rowSum =0;
    int maxSum =-1;
    int maxRow=-1;
    for(int i=0;i<4;i++){
        rowSum =0;
        for(int j=0;j<4;j++){
            rowSum+=a[i][j];
        }

        //Row completes
        if(rowSum>maxSum){
            maxSum=rowSum;
            maxRow=i;
        }
    }
}
int main()
{

    // Take input for matrix A and B

    int a[3][3];
    int b[3][3];

    inputMatrix(a);
    inputMatrix(b);
    int c[3][3];
    multiplyMatrix(a,b,c);
    printMatrix(c);
}