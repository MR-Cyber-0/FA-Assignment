//IT19001180
//Rodrigo K. A. M.
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int merge_sort(int A[], int temp[], int left, int right); 
int merge(int A[], int temp[], int left, int mid, int right); 


int MergeSort(int A[], int array_size)   //sort the input array & return the number of inversions in the array
{ 
	int* temp = (int*)malloc(sizeof(int) * array_size); 
	return merge_sort(A, temp, 0, array_size - 1);
	
} 


int merge_sort(int A[], int temp[], int left, int right)   //sort the input array & return the number of inversions in the array (a recursive function) 
{ 
	int mid, inv_count = 0; 
	if (right > left) {   //divide the array into two parts 
		mid = (right + left) / 2; 

	
		inv_count += merge_sort(A, temp, left, mid);   //count the number of pairs  
		inv_count += merge_sort(A, temp, mid + 1, right);   //count the number of pairs  

	
		inv_count += merge(A, temp, left, mid + 1, right);   //merge two parts 
	} 
	return inv_count; 
} 


int merge(int A[], int temp[], int left, int mid, int right)   //merge the sorted arrays & return the number of pairs 
{ 
	int i, j, k; 
	int inv_count = 0; 

	i = left;   //index for left sub array
	j = mid;   //index for right sub array
	k = left;   //index for merged sub array 
	while ((i <= mid - 1) && (j <= right)) { 
		if (A[i] <= A[j]) { 
			temp[k++] = A[i++]; 
		} 
		else { 
			temp[k] = A[j];

			for(int x = i;x<mid; x++)
				printf("\n(%d,%d)", A[x],temp[k]);

			
			inv_count = inv_count + (mid - i);
			
			
			k++;
			j++;	
		} 
	} 
	

	while (i <= mid - 1)   //copy the remaining elements of left sub array to temp* 
		temp[k++] = A[i++]; 


	while (j <= right)   //copy the remaining elements of right sub array to temp* 
		temp[k++] = A[j++]; 


	for (i = left; i <= right; i++)   //copy the merged elements to the original array 
		A[i] = temp[i]; 

	return inv_count; 
} 


int main(int argv, char** args) 
{
	int n;   //create the variable n
    
    printf ("------------------------------------------------------------------------------");
    printf ("\n");
    printf ("\n");
    printf ("Enter a number for n: ");   //getting input to set the array size
    scanf ("%d", &n);
    printf ("\n");
    printf ("------------------------------------------------------------------------------");
    
    int A[n];   //create the array & set the variable n as the array size   
    
    printf ("\n");
    printf ("\n");
    
    for (int i = 0; i < n; i++){
        printf ("Enter a number for the array: ");
        scanf ("%d", &A[i]);   //input elements to the array
    }
    
    printf ("\n");
    printf ("------------------------------------------------------------------------------");
    
    printf ("\n");
    
    printf ("\nNumber of ordered pairs = %d \n", MergeSort(A, n));   //calling MergeSort function & display the number of pairs 
    printf ("\n");
    printf ("------------------------------------------------------------------------------");
    printf ("\n");
    
	return 0; 
}
