#include <stdio.h>
void bubbleSort(int array[], int size) {
  for (int step = 0; step < size - 1; ++step) {
    for (int i = 0; i < size - step - 1; ++i) {
      if (array[i] > array[i + 1]) {
        int temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
      }
    }
  }
}

void printArray(int array[], int size) {
  for (int i=size-1;i>=0;i--) {
    printf("%d  ", array[i]);
  }
  printf("\n");
}

void insert(int m){
  int B[];
  
int main() {
  int size;
  printf("Number of students: ");
  scanf("%d",&size);
  int data[size];
  for (int i = 0; i < size; i++) {
    printf("enter marks of students ");
    scanf("%d",&data[i]);
    }
  
  bubbleSort(data, size);
  
  printf("Sorted marks in descending Order:\n");
  printArray(data, size);
  int m;
  printf("enter mark to be inserted : ");
  scanf("%d",&m);
  insert(m);
  
}


