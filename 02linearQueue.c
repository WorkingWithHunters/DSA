#include<stdio.h>

#define MAX 5
int front=0;
int back=-1;
int queue[MAX];

int isQueueFull()
{
    if(back==MAX-1)
        return 1;
    else
        return 0;   
}

int isQueueEmpty()
{
    if(back<front)
        return 1;
    else
        return 0;   
}

int enqueue(int element)
{
    if(isQueueFull()==1)
        {
        printf("Overflow %d\n",element);
        return 1;
        }
    else
        {
        back++;
        queue[back]=element;
        return queue[back];
        }
}

int dequeue()
{
    int tempE;
    if(isQueueEmpty()==1)
        return 1;
    else
        {
        tempE=queue[front];
        front++;
        return tempE;
        }
}

void display()
{
    if(isQueueEmpty()==1)
        printf("Queue is empty\n");
    else
        for (int i = front; i <= back; i++)
        {
            printf("%d \t",queue[i]);
        }
        printf("\n");
    
}

int main()
{
    /* adding elements on QUEUE */
    printf("enqueue operation \n");
    enqueue(5);
    enqueue(9);
    enqueue(50);
    enqueue(99);
    enqueue(55);
    enqueue(90);
    /* displaying elements of QUEUE after adding elements on it */
    display();

    /* removing elements from QUEUE */
    printf("dequeue operation \n");
    dequeue();
    dequeue();
    /* displaying elements of QUEUE after removing elements*/
    display();
    return 0;
}