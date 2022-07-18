#include <stdio.h>

int main(){

    int a[50], num, i, j, temp;    

    printf("Enter the Number of Elements  : ");

    scanf("%d", &num);    

    printf("Enter the Elements: ");

    for(i = 0; i < num; i++)

        scanf("%d", &a[i]);

    for(i = 0; i < num - 1; i++)
    {       
        for(j = 0; j < num - i - 1; j++)
        {          
            if(a[j] > a[j + 1]){               

                temp = a[j];

                a[j] = a[j + 1];

                a[j + 1] = temp;

            }

        }

    }

    printf("New array after bubble sorting : ");

    for(i = 0; i < num; i++){

        printf("%d  ", a[i]);

    }

    return 0;

}