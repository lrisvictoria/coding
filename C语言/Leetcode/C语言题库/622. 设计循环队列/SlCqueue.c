#define _CRT_SECURE_NO_WARNINGS 1 

typedef struct CQListNode
{
    struct CQListNode* next;
    int data;
}CQListNode;

typedef struct
{
    CQListNode* front;
    CQListNode* tail;
} MyCircularQueue;

bool myCircularQueueIsEmpty(MyCircularQueue* obj);
bool myCircularQueueIsFull(MyCircularQueue* obj);

CQListNode* buyNewnode()
{
    CQListNode* newnode = (CQListNode*)malloc(sizeof(CQListNode));
    newnode->next = NULL;
    return newnode;
}

MyCircularQueue* myCircularQueueCreate(int k)
{
    CQListNode* CQnode = NULL;
    CQListNode* tail = NULL; // 单向循环链表的尾

    int N = k + 1;
    while (N--)
    {
        CQListNode* newnode = buyNewnode();
        if (CQnode == NULL)
        {
            CQnode = newnode;
            tail = CQnode;
        }
        else
        {
            newnode->next = CQnode;
            CQnode = newnode;
        }
        tail->next = CQnode;
    }
    MyCircularQueue* cq = (MyCircularQueue*)malloc(sizeof(MyCircularQueue));
    cq->tail = cq->front = CQnode;
    return cq;
}

bool myCircularQueueEnQueue(MyCircularQueue* obj, int value)
{
    if (myCircularQueueIsFull(obj))
        return false;
    obj->tail->data = value;
    obj->tail = obj->tail->next;

    return true;
}

bool myCircularQueueDeQueue(MyCircularQueue* obj)
{
    if (myCircularQueueIsEmpty(obj))
        return false;
    obj->front = obj->front->next;

    return true;
}

int myCircularQueueFront(MyCircularQueue* obj)
{
    if (myCircularQueueIsEmpty(obj))
        return -1;
    return obj->front->data;
}

int myCircularQueueRear(MyCircularQueue* obj)
{
    if (myCircularQueueIsEmpty(obj))
        return -1;
    CQListNode* cur = obj->front;
    while (cur->next != obj->tail)
    {
        cur = cur->next;
    }
    return cur->data;
}

bool myCircularQueueIsEmpty(MyCircularQueue* obj)
{
    return obj->front == obj->tail;
}

bool myCircularQueueIsFull(MyCircularQueue* obj)
{
    return obj->tail->next == obj->front;
}
void myCircularQueueFree(MyCircularQueue* obj)
{
    CQListNode* cur = obj->front->next;

    while (cur != obj->front)
    {
        CQListNode* next = cur->next;
        free(cur);
        cur = next;
    }
    free(cur);
    free(obj);
}

/**
 * Your MyCircularQueue struct will be instantiated and called as such:
 * MyCircularQueue* obj = myCircularQueueCreate(k);
 * bool param_1 = myCircularQueueEnQueue(obj, value);

 * bool param_2 = myCircularQueueDeQueue(obj);

 * int param_3 = myCircularQueueFront(obj);

 * int param_4 = myCircularQueueRear(obj);

 * bool param_5 = myCircularQueueIsEmpty(obj);

 * bool param_6 = myCircularQueueIsFull(obj);

 * myCircularQueueFree(obj);
*/