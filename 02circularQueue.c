#include<stdio.h>

#define MAX 5
int front=0;
int back=-1;
int queue[MAX];

int isQueueFull()
{
    if((back+2)%MAX==front)
        {
            printf("True\n");
            return 1;
        }
    else
    {
        printf("False\n");
        return 0;   
    }
}

int isQueueEmpty()
{
    if(front==(back+1)%MAX)
    {
        printf("True\n");
        return 1;
    }
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
        back=(back+1)%MAX;
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
        front=(front+1)%MAX;
        return tempE;
        }
}

void display()
{
    int count;
    if(isQueueEmpty()==1)
        printf("Queue is empty\n");
    else
        count=((back+MAX-front)%MAX)+1;
        for (int i = count; i <=0; i++)
        {
            printf("%d \t",queue[(front+i)%MAX]);
        }
        
        
        printf("\n");
    
}

int main()
{
    if (front ==0 && back==-1)
    {
        back=0;
    }
    
    isQueueEmpty();
    /* adding elements on QUEUE */
    printf("enqueue operation 1\n");
    enqueue(5);
    isQueueEmpty();
    isQueueFull();
    /* enqueue(9);
    enqueue(50);
    enqueue(99);
    enqueue(55);
    enqueue(90); */
    /* displaying elements of QUEUE after adding elements on it */
    display();

    /* removing elements from QUEUE */
    printf("dequeue operation \n");
    dequeue();
    dequeue();
    dequeue();
    isQueueEmpty();
    /* displaying elements of QUEUE after removing elements*/
    display();
    /*again adding elements on QUEUE */
    printf("enqueue operation 2\n");
    enqueue(10);
    enqueue(9);
    display();
    return 0;
}