#include <stdio.h>
#include <stdbool.h>
#include<assert.h>

bool linear_search(int a[], int size, int x){
  bool match_found = false;
  
  for(int i = 0; i < size; i++){
    if(a[i] == x){
      match_found = true;
      break;
    }
  }

  return match_found;
}

int main(){
  int a[] = {2, 3, 4, 6, 8, 9};
  int size = sizeof elements / sizeof elements[0];
 

  if(linear_search(a, size, 6))
    printf("Element found number %d is present in the array\n", x);
  else
    printf("Element not found number %d is not present in the array\n", x);

  //assert(linear_search(elements, size, 4) == true);
  //assert(linear_search(elements, size, 1) == false);
  return 0;
}