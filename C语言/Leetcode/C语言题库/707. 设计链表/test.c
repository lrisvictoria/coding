#define _CRT_SECURE_NO_WARNINGS 1 

/*
设计链表的实现。您可以选择使用单链表或双链表。单链表中的节点应该具有两个属性：val 和 next。
val 是当前节点的值，next 是指向下一个节点的指针/引用。如果要使用双向链表，则还需要一个属性 prev 以指示链表中的上一个节点。
假设链表中的所有节点都是 0-index 的。

在链表类中实现这些功能：

get(index)：获取链表中第 index 个节点的值。如果索引无效，则返回-1。
addAtHead(val)：在链表的第一个元素之前添加一个值为 val 的节点。插入后，新节点将成为链表的第一个节点。
addAtTail(val)：将值为 val 的节点追加到链表的最后一个元素。
addAtIndex(index,val)：在链表中的第 index 个节点之前添加值为 val  的节点。
如果 index 等于链表的长度，则该节点将附加到链表的末尾。如果 index 大于链表长度，则不会插入节点。
如果index小于0，则在头部插入节点。
deleteAtIndex(index)：如果索引 index 有效，则删除链表中的第 index 个节点。
 

示例：

MyLinkedList linkedList = new MyLinkedList();
linkedList.addAtHead(1);
linkedList.addAtTail(3);
linkedList.addAtIndex(1,2);   //链表变为1-> 2-> 3
linkedList.get(1);            //返回2
linkedList.deleteAtIndex(1);  //现在链表是1-> 3
linkedList.get(1);            //返回3

*/

typedef struct MyLinkedList_t
{
    struct MyLinkedList_t* next;
    int val;
} MyLinkedList;

// 创建新节点
MyLinkedList* BuyListNode(int val)
{
    MyLinkedList* newnode = (MyLinkedList*)malloc(sizeof(MyLinkedList));
    newnode->next = NULL;
    newnode->val = val;
    return newnode;
}

// 初始化哨兵位
MyLinkedList* myLinkedListCreate()
{
    MyLinkedList* head = (MyLinkedList*)malloc(sizeof(MyLinkedList));
    head->next = NULL;
    return head;
}

// 取元素
int myLinkedListGet(MyLinkedList* obj, int index)
{
    // 非法索引 或 链表只有哨兵位
    if (index < 0 || obj->next == NULL)
        return -1;
    int count = 0;
    // 找到 index 位置
    MyLinkedList* cur = obj->next;
    while (count < index)
    {
        if (cur == NULL)
            return -1;
        cur = cur->next;
        ++count;
    }
    if (cur != NULL)
        return cur->val;
    else
        return -1;
}

// 头插
void myLinkedListAddAtHead(MyLinkedList* obj, int val)
{
    MyLinkedList* next = obj->next;
    MyLinkedList* newnode = BuyListNode(val);
    obj->next = newnode;
    newnode->next = next;
}

// 尾插
void myLinkedListAddAtTail(MyLinkedList* obj, int val)
{
    MyLinkedList* newnode = BuyListNode(val);
    MyLinkedList* cur = obj;
    // 从哨兵位开始遍历，遍历截止条件为到尾结点
    // 如果链表只有哨兵位，那么就相当于在哨兵位后插入
    while (cur->next)
    {
        cur = cur->next;
    }
    cur->next = newnode;
}

// 在 index 个节点前插入
void myLinkedListAddAtIndex(MyLinkedList* obj, int index, int val)
{
    // index 小于等于0，为头插
    if (index <= 0)
    {
        myLinkedListAddAtHead(obj, val);
        return;
    }
    /*
    // 其他位置插入
    MyLinkedList* cur = obj->next;
    int count = 0;
    // 如果 index 大于链表长度，则遍历到尾结点时会停止
    // 平常控制停止的条件则是 count < index，找到 index 位置

    while (cur->next)
    {
        if (count == index - 1)
            break;
        cur = cur->next;
        ++count;
    }

    // 说明 index > 链表长度
    if (count != index - 1)
    {
        return;
    }
    MyLinkedList* newnode = BuyListNode(val);
    newnode->next = cur->next;
    cur->next = newnode;
    */
    // 这里这种方法不可行，因为可能链表为空时在不存在的节点插入元素

    // 改版
    MyLinkedList* cur = obj; // 从哨兵位开始遍历
    while (cur && index--)
    {
        cur = cur->next;
    }
    // 这就说明不是因为 index 结束的，而是走到尾了，说明无法插入
    if (cur == NULL)
        return;
    MyLinkedList* newnode = BuyListNode(val);
    MyLinkedList* next = cur->next; // 第 index 个节点的位置
    cur->next = newnode;
    newnode->next = next;
}

void myLinkedListDeleteAtIndex(MyLinkedList* obj, int index)
{
    // 索引 index 非法，或者链表只有哨兵位
    if (index < 0 || obj->next == NULL)
        return;
    // 处理头删情况
    if (index == 0)
    {
        MyLinkedList* del = obj->next;
        obj->next = del->next;
        free(del);
        return;
    }
    // 这是从第0个节点开始遍历
    /*
    MyLinkedList* cur = obj->next;
    int count = 0;
    /*   链表遍历：
     *   循环终止条件： 当前节点已经是最后一个节点，它的next是NULL
     *   break条件：   当前节点是index位置的前一个节点： now == index - 1
     *   循环结束后：   需满足当前节点既不是最后一个节点，也是index位置的前一个位置，才进行删除操作

    while (cur->next)
    {
        if (count == index - 1)
            break;
        cur = cur->next;
        ++count;
    }
    // 当前 cur 为 index 前一个节点
    if (count == index - 1 && cur->next != NULL)
    {
        MyLinkedList* del = cur->next; // 删除的 index 节点
        cur->next = del->next;
        free(del);
    }
    */

    // 这是从第一个节点开始遍历
    MyLinkedList* cur = obj;
    // 找到 index 节点的前一个位置
    // 最多找到尾结点前一个
    while (cur->next && index--)
    {
        cur = cur->next;
    }
    // 此情况说明是因为走到尾结点停止的
    // 说明删除位置非法
    if (cur->next == NULL)
        return;
    MyLinkedList* del = cur->next;
    cur->next = del->next;
    free(del);
}

void myLinkedListFree(MyLinkedList* obj)
{
    // 首先释放有效节点
    MyLinkedList* cur = obj->next;
    while (cur)
    {
        MyLinkedList* next = cur->next;
        free(cur);
        cur = next;
    }
    // 再释放哨兵位
    free(obj);
}


/**
 * Your MyLinkedList struct will be instantiated and called as such:
 * MyLinkedList* obj = myLinkedListCreate();
 * int param_1 = myLinkedListGet(obj, index);

 * myLinkedListAddAtHead(obj, val);

 * myLinkedListAddAtTail(obj, val);

 * myLinkedListAddAtIndex(obj, index, val);

 * myLinkedListDeleteAtIndex(obj, index);

 * myLinkedListFree(obj);
*/