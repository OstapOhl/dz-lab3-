#include<stdio.h>

void func(int from, int to, int funcArr[]).  //func to sort
{
    int ARR[100];
    int checkArr[] = {5, 15, 25, 35, 45, 50, 55, 65, 75, 85, 95};
    int h = 0;   //variable of checkArr
    int size = 0;
    
    for(int i = from; i <= to; i++) {
        funcArr[i] = i;
    };

    for (int i = from; i <= to; i++)
    {
        if( funcArr[i] == checkArr[h] )
        {
            h++;
            funcArr[i] = 0;
    
        }
            ARR[i] = funcArr[i];
                       
                       printf("%d", ARR[i]);
                       printf("\n");
                       size++;
        };
    
    printf("Size:");
    printf("%d", size);
    printf("\n");
    };

int main()
{
    int From;
    int To;
    int Arr[100];

    printf("Enter interval(1 - 100)\n");
    printf("From:");
    scanf("%d", &From);

    printf("to:");
    scanf("%d", &To);

    func( From, To, Arr );
}
    
    
    printf("Size:");
    printf("%d", size);
    printf("\n");
    };


int main()
{
    int From;
    int To;
    int Arr[100];

    printf("Enter interval(1 - 100)\n");
    printf("From:");
    scanf("%d", &From);

    printf("to:");
    scanf("%d", &To);

//    func( From, To, Arr );
    

 
    int a = 1;
    int b = 5;
    
    int* A = &a;
    b = *A;
    
    printf("%d", b);


    
    
}


