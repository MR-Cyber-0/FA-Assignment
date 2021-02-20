//IT19001180
//Rodrigo K. A. M.

#include <stdio.h>

int main()
{
    int n;   //array size
    int m;   //the searching element
    int index = -1;   //initialize the variable index to -1
    
    printf ("\n");
    printf ("------------------------------------------------------------\n");
    printf ("\n");
    
    printf ("Enter a number for n: ");   
    scanf ("%d", &n);   //get a number as the size of the array
   
    printf ("\n");
    printf ("------------------------------------------------------------\n");
    printf ("\n");
   
    int ar[n];   //create the array & set the variable n as the array size
    
    for (int i = 0; i < n; i++){   //input elements to the array
        printf ("Enter a number for the array: ");
        scanf ("%d", &ar[i]);
    }
    
    printf ("\n");
    printf ("------------------------------------------------------------\n");
    printf ("\n");
    
    printf ("--- The array, you have created is below ---\n");
    
    for (int i = 0; i < n; i++){   //display the array that has been created
        printf ("%d ", ar[i]);
    }
    
    printf ("\n");
    printf ("\n");
    printf ("------------------------------------------------------------\n");
    printf ("\n");
    
    printf ("Enter the number you are searching: ");   
    scanf ("%d", &m);   //enter the searching element 
    
    printf ("\n");
    printf ("------------------------------------------------------------\n");
    printf ("\n");
    
    for (int r = 0; r < n; r++){   
        if (m == ar[r])   //searching whether the searching element is in the array or not
            index = r;   //if the searching element found in the array, set that element index as the variable called index
    }
    
    
    if (index == -1)   //check whether the index == -1
       printf ("%d is not in the array. Index = %d", m, index);   //print index = -1
    
    
    else
       printf ("Index of the value that you searched is %d", index+1);   //print the index
    
    
    printf ("\n");
    printf ("\n");
    printf ("------------------------------------------------------------\n");
    printf ("\n");
    
    return 0;
}











