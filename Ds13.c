#include <stdio.h>
#include <stdbool.h>
bool is_symm(int matrix[][6], int size);
void is_equiv(bool c1, bool c2, bool c3);
bool is_trans(int matrix[][6], int size);
bool is_refl(int matrix[][6], int size);
int main()
{
    int matrix[6][6];
    int A[6];
    int size = 6;

    printf("Enter elements of set A:\n");
    for (int i = 0; i < size; i++)
        scanf("%d", &A[i]);

    printf("R1 = {(a, b) E A | (a * b) > 0}\n");
    printf("R2 = {(a, b) E A | (a > b)}\n\n");

    printf("Matrix representing relation R1 on set A:\n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            matrix[i][j] = (A[i] * A[j] > 0) ? 1 : 0;
            printf("[%d]\t", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    is_equiv(is_trans(matrix, size), is_symm(matrix, size), is_refl(matrix, size));

    printf("\nMatrix representing relation R2 on set A:\n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            matrix[i][j] = (A[i] > A[j]) ? 1 : 0;
            printf("[%d]\t", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    is_equiv(is_trans(matrix, size), is_symm(matrix, size), is_refl(matrix, size));

    for (int i = 0; i < size; i++)
    {
        if (i == (size - 1))
        {
            printf ("%d",  A[i]);

        }
        else
        {
             printf ("%d,",  A[i]);
        }
    }
    
    
    
    return 0;
}


bool is_refl(int matrix[][6], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (matrix[i][i] != 1)
            return false;
    }
    return true;
}

bool is_symm(int matrix[][6], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (matrix[i][j] != matrix[j][i])
                return false;
        }
    }
    return true;
}

bool is_trans(int matrix[][6], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            for (int k = 0; k < size; k++)
            {
                if (matrix[i][j] && matrix[j][k] && !matrix[i][k])
                    return false;
            }
        }
    }
    return true;
}

void is_equiv(bool c1, bool c2, bool c3)

{
	if(c1)
	{
		printf("1.Transitive\n");
		
	}
	else
	{
		printf("1.Non Trasitive\n");
	}
		if(c2)
	{
		printf("2.Reflexive\n");
		
	}
	else
	{
		printf("2.Non Reflexive\n");
	}
		if(c3)
	{
		printf("3.Symmetric\n");
		
	}
	else
	{
		printf("3.Non Symmetric\n");
	}
	
    if (c1 && c2 && c3)
        printf("4.Equivalence Relation\n");
    else
        printf("4.Non-Equivalence Relation\n");
}
