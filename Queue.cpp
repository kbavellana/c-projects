#include <stdio.h>
#include <conio.h>
#define MAX 5
int intArray[MAX];
int front = 0;
int rear = -1;
int itemCount = 0;

	bool isEmpty()
 	{
		return itemCount == 0;
	}

	bool isFull() 
	{
	return itemCount == MAX;
	}

	int size() 
	{
		return itemCount;
	}

	void insert(int data) 
	{
		if(!isFull()) 
		{
			if(rear == MAX-1) 
			{
				rear = -1;
			}
			
			intArray[++rear] = data;
			itemCount++;
		}
	}
	int removeData() 
	{
		int data = intArray[front++];
		if(front == MAX) 
			{
			front = 0;
			}
		itemCount--;
		return data;
	}
int main() 
{
		/* insert 5 items */
		insert(3);
		insert(5);
		insert(9);
		insert(1);
		insert(12);
		insert(15); // not inserted
		// remove one item
		removeData();
		// insert more items
		insert(16); // inserted
		// As queue is full, elements will not be inserted.
		insert(17);
		insert(18);
		
			if(isFull())
			{
				printf("Queue is full!\n");
			}
			else
				printf("Queue is not full!\n");
				
		printf("-------------------\n");
		printf("Queue: ");
		
		while(!isEmpty()) 
		{
			int n = removeData();
			printf("%d ",n);
		}
		printf("\n-------------------\n");
		getch();
		return 0;
}
