#include <stdio.h>
#include <conio.h>

int main()
{
	int x,y,temp, storage[]={10,5,4,8,16,12,0,6,9},j=9;
	
	
	for(x=0;x<j;x++)
				{
					for(y=x+1;y<j;y++)
					{
						if (storage[x] > storage[y])
						{
							temp = storage[x];
							storage[x] = storage [y];
							storage[y] = temp;
						}
					}
				}
					
	for(x=0;x<9;x++)
	{
		printf("%d   ",storage[x]);
	}
		
	getch();
	return 0;
	
}
