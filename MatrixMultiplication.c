#include<stdio.h>
int main()
{
    //taking the number of rows and columns of two matrix
    int n,m ;
    printf("Enter the number of row & column for first matrix:" );
    scanf("%d%d",&n,&m);
    int o,p;
    printf("Enter the number of row & column for second matrix:" );
    scanf("%d%d",&o,&p);
    //checking condition for matrix multiplication
    //if & only if the number of columns is equal to the number of rows of second matrix
    //multiplication is possible ,otherwise not possible
    if(m != o)
    {
        printf("Multiplication of this two matrix is not possible.");
    }
    else
    {
    //taking first matrix
    int matrix1[100][100];
    int i, j;
    printf("Enter First Matrix: \n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            printf("Matrix1[%d %d]:",i,j);
            scanf("%d", &matrix1[i][j]);
        }
    }
    //printing user entered first matrix
    printf("Your first matrix is:\n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            printf("%d ", matrix1[i][j]);
            if(j==m-1)
            {
                printf("\n");
            }
        }
    }
    //taking second matrix
    int matrix2[100][100];
    int k,l;
    printf("Enter Second Matrix: \n");
    for(k=0; k<o; k++)
    {
        for(l=0; l<p; l++)
        {
            printf("Matrix2[%d %d]:",k,l);
            scanf("%d", &matrix2[k][l]);
        }
    }
    //printing user entered second matrix
    printf("Your second matrix is:\n");
    for(k=0; k<o; k++)
    {
        for(l=0; l<p; l++)
        {
            printf("%d ", matrix2[k][l]);
            if(l==p-1)
            {
                printf("\n");
            }
        }
    }
    //calculating multiplication
        int a,b,c;
        int d[100][100];
        for(a=0; a<=n; a++)
        {
            for(b=0; b<=p; b++)
            {
                //d[a][b]=0;
                for(c=0; c<=m; c++)
                {
                    d[a][b]=d[a][b]+matrix1[a][c]*matrix2[c][b];
                }
            }
        }
        //printing multiplication matrix of first and second matrix
        printf("Your multiplication matrix is( matrix1 X matrix2):\n");
        for(a=0; a<n; a++)
        {
            for(b=0; b<p; b++)
            {
                printf("%d ", d[a][b]);
                if(b==p-1)
                {
                    printf("\n");
                }
            }
        }

    }
    printf("\n\n\n\n\n");

    return 0;
}
