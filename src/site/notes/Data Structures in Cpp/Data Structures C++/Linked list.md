---
{"dg-publish":true,"permalink":"/data-structures-in-cpp/data-structures-c/linked-list/"}
---

---
A linked list is a sequence of nodes that contain two fields: data (an integer value here as an example) and a link to the next node. The last node is linked to a terminator used to signify the end of the list. [^1]

![Linked_list.png](/img/user/Data%20Structures%20in%20Cpp/Reference%20images/Linked_list.png)
### Implementation in C++

```C++
// Each node in a linked list is a structure. The head node is the first node in the list.
Node* addNodeToTail(Node* head, int value) {
    // declare Node pointer and initialize to point to the new Node (i.e., it will have the new Node's memory address) being added to the end of the list.
    Node *temp  = malloc(sizeof *temp); /// 'malloc' in stdlib.
    temp->value = value; // Add data to the value field of the new Node.
    temp->next  = NULL; // initialize invalid links to nil.
    
    if (head == NULL) {
        head = temp;     // If the linked list is empty (i.e., the head node pointer is a null pointer), then have the head node pointer point to the new Node.
    }
    else {
        Node *p = head;   // Assign the head node pointer to the Node pointer 'p'.
        while (p->next != NULL) {
            p = p->next;    // Traverse the list until p is the last Node. The last Node always points to NULL.
        }
        p->next = temp; // Make the previously last Node point to the new Node.
    }
    
    return head;    // Return the head node pointer.
}
```

[^1]: [Linked list - Wikipedia](https://en.wikipedia.org/wiki/Linked_list)