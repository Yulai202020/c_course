#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    struct ListNode* next;
    int data;
};

typedef struct ListNode ListNode;

ListNode* init(int data) { // ok
    ListNode* ptr = (ListNode*) malloc(sizeof(ListNode));

    if (ptr == NULL) {
        return NULL;
    }

    ptr->data = data;
    ptr->next = NULL;

    return ptr;
}

void free_listnode(ListNode* first) { // ok
    ListNode* latest = first;

    while (latest != NULL) {
        ListNode* tmp = latest->next;
        free(latest);
        latest = tmp;
    }
}

int get_length(ListNode* first) { // ok
    int count = 1;
    ListNode* latest = first->next;

    while (latest != NULL) {
        latest = latest->next;
        count++;
    }

    return count;
}

ListNode* get_by_id(ListNode* first, int id) { // ok
    if (id < 0) {
        id = get_length(first) + id;
    }

    int count = 0;
    ListNode* latest = first;

    while (latest->next != NULL && count < id) {
        latest = latest->next;
        count++;
    }

    return latest;
}

int push_back(ListNode* first, int data) { // ok
    ListNode* latest = get_by_id(first, -1);

    // we got latest

    ListNode* ptr = (ListNode*) malloc(sizeof(ListNode));

    if (ptr == NULL) {
        return 1;
    }

    ptr->data = data;
    ptr->next = NULL;

    latest->next = ptr;

    return 0;
}

ListNode* delete_by_id(ListNode* first, int id) {
    if (id == 0) {
        ListNode* new_first = first;
        first = new_first->next;
        free(new_first);
        return first;
    } else {
        ListNode* to_delete = get_by_id(first, id);
        ListNode* prev = get_by_id(first, id-1);
        prev->next = to_delete->next;
        free(to_delete);
        return first;
    }

    return 0;
}

void printlist(ListNode* first) {
    int count = 0;
    ListNode* latest = first;

    while (latest != NULL) {
        printf("id: %d, value: %d\n", count, latest->data);
        latest = latest->next;
        count++;
    }
}

int main() {
    ListNode* tmp = init(100);
    push_back(tmp, 2);

    int size = get_length(tmp);
    printf("size: %d\n", size);

    printlist(tmp);
    free_listnode(tmp);
}