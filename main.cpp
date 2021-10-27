#include<stdio.h>
#include<iostream>
#include<math.h>
#include <vector>


void func(int from, int to, int arr[])
{
    int ARR[100];
    int checkArr[] = {5, 15, 25, 35, 45, 50, 55, 65, 75, 85, 95};
    int h = 0;
    int size = 0;
    
    
    for(int i = from; i <= to; i++) {
        arr[i] = i;
    };

    
    for (int i = from; i <= to; i++)
    {
            
        
        if( arr[i] == checkArr[h] )
        {
            h++;
            arr[i] = 0;
    
        }
//        else
            ARR[i] = arr[i];
                       
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

//    func( From, To, Arr );
    

 
    int a = 1;
    int b = 5;
    
    int* A = &a;
    b = *A;
    
    printf("%d", b);


    
    
}


