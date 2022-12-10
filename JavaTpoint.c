#include <stdio.h>  
// Funktio, jolla vaihdetaan elementit
void swap(int *a, int *b) 
{ 
int temp = *a; 
*a = *b; 
*b = temp; 
}   
// Valintalajittelun vaiheet
void selectionSort(int array[], int n) 
{ 
int i, j, min_element; 
for (i = 0; i < n-1; i++) 
{
min_element = i; 
for (j = i+1; j < n; j++) 
if (array[j] < array[min_element]) 
min_element = j; 
swap(&array[min_element], &array[i]); 
} 
}   
// Funktio listan alkioiden printtaamiseen
void printArray(int array[], int size) 
{ 
int i; 
for (i=0; i < size; i++) 
printf("%d ", array[i]); 
}

// Main
int main() {

int numerot[] = {1,2,3,4,5};
int i = 0;

while (i < 5) {
// Väliaikaisen numeron tallennus
int myNum;

// Kysytään käyttäjän syöte
printf("Anna luku: \n");

// Talletetaan numero listaan
scanf("%d", &myNum);

numerot[i] = myNum;

i++;

    }
int size = sizeof(numerot)/sizeof(numerot[0]); 
printf("Alkuperainen lista: ");
printArray(numerot, size);
printf("\n");
selectionSort(numerot, size); 
printf("Jarjestetty lista: "); 
printArray(numerot, size); 
printf("\n");

int summa = 0;

for(i = 0; i < size; i++)
    summa = summa + numerot[i]; //Lisätään arvo summaan

    //Printataan tulos
    printf("Summa = %d\n",summa);
    


return 0; 
}