 #include <stdio.h>
 /* int main()
  {
   float a = 12.5;
   printf("%lf\n", a);
   printf("%d\n", *(int *)&a);
   return 0;
  }*/
  
   #define SIZE 10
  void size(int arr[SIZE])
  {
          printf("size of array is:%d\n",sizeof(arr));
  }

  int main()
  {
          int arr[SIZE],j;
          char *ptr;
          ptr=&j;
         // ptr=arr;
                    printf("size of array is:%d\n",sizeof(ptr));
          size(arr);
          return 0;
  }
