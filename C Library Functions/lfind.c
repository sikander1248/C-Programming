#include <stdio.h>
#include <search.h>

int compare(const void *key,const void *ele)
{
  printf(" %d %d \n",*(int *)key , *(int *)ele);
  return *(int *)key == *(int *)ele ? 0 : 1;
}
int main() {
  int arr[] = {12,23,21,56,43,89};
  size_t n = sizeof(arr) / sizeof(int);
  int key = 2;
  
  int *ptr = lfind(&key, arr , &n, sizeof(int), compare );
  
  if(ptr != NULL)
  {
    printf("Element found at index %ld \n",ptr - arr);
  }
  else
    printf("Element not found \n");

  return 0;
}
