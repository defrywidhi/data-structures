#include <stdio.h>
int main()
{
  int i, n, low, mid, high, search, array[50];

  printf("Enter number of elements you want ");
  scanf("%d", &n);

  printf("Enter value of %d integers \n",n );

  for (i = 0; i<n; i++)
    scanf("%d", &array[i]);

  printf("Enter value to find ");
  scanf("%d", &search);

  low = 0;
  high = n - 1;
  mid = (low+high)/2;
  while (low <= high) 
  {
    if (array[mid] < search)
      low = mid + 1;
    else if (array[mid] == search) 
	{
      printf("%d found at location %d.\n", search, mid+1);
      break;
    }
    else
    high = mid - 1;
    mid = (low + high)/2;
  }
  if (low > high)
    printf("Not found! %d isn't present in the list.\n", search);

  return 0;
}