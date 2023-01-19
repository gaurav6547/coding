/*#include<stdio.h>

void DisplayNonFactors(int iNo)
{
    int iCnt = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt < iNo ; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            printf("%d\n",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    DisplayNonFactors(iValue);
    return 0;
}

// Time Complexity : O(N/2)



/*
Input : 10
iNo = 10

if((iNo % 1) == 0)
{}
if((iNo % 2) == 0)
{}
if((iNo % 3) == 0)
{}
if((iNo % 4) == 0)
{}
if((iNo % 5) == 0)
{}
if((iNo % 6) == 0)
{}
if((iNo % 7) == 0)
{}
if((iNo % 8) == 0)
{}
if((iNo % 9) == 0)
{}




















#include<stdio.h>
#include<stdlib.h>

int iCnt = 0;
void kSmallest(int Arr1[],int no, int K1)
{
 	   for(iCnt = 0; iCnt < no; iCnt++)
		{
		   	if(k <= 3)
		   	{
			   printf("(k-1)Smallest is %d",Arr[iCnt])	
		    } 
		    else
		    {
		       printf("(k+1)Greatest is %d",Arr[i]) 
			}
		}	
}

int main()
{
    int Arr[] = {3,2,6,4,9,5};
	int k = 3;
    int n = sizeof(Arr) / sizeof(Arr[0]);
    kSmallest(Arr, n, k);
	return 0;
}

*/

#include<stdio.h>
#include<stdlib.h>
#include<mpi.h>

int main(int argc, char *argv[])
{
	int comm_sz = 4,my_rank;
	MPI_Init(NULL,NULL);
	MPI_Comm_size(MPI_COMM_WORLD,&comm_sz);
	MPI_Comm_rank(MPI_COMM_WORLD,&my_rank);
	
	printf("\n Hello from process %d of %d\n",my_rank,comm_sz);
	
	MPI_Finalize();
}


















