// F11X Tutorial 09 - part3_linked_list_exercises.c
//
// Solutions to the Linked List Exercises

enum bool {
    TRUE = 1,
    FALSE = 0
};

// Given a linked list, return TRUE if there is a node with data that is even.
enum bool list_has_evens(struct node *head) {
    current = head;
    while (current != NULL) {
        if (current->data % 2 == 0) {
            return TRUE;
        }
        current = current->next;
    }
    return FALSE;
}

// Given two linked lists:
//  - return 0, if neither list contains even numbers.
//  - return 1, if one list contains even numbers, but the other does not.
//  - return -1, if both lists contain even numbers.
int list_evens(struct node *head1, struct node *head2) {
    enum bool head1_even = list_has_evens(head1);
    enum bool head2_even = list_has_evens(head2);

    if (head1_even == FALSE && head2_even == FALSE) {
        return 0;
    } else if (head1_even == TRUE && head2_even == TRUE) {
        return -1;
    } else {
        return 1;
    }
}

// Given a linked list that is ordered in ascending order and a value to
// insert, insert the value into the list that will allow the list to remain
// in ascending order.
struct node *list_ordered_insert(struct node *head, int data) {
    struct node *new_node = create_node(data);
    if (head == NULL) {
        return new_node;
    }

    struct node *current = head;
    while (current->next->data < data) {
        current = current->next;
    }
    // current here is last node smaller than data (4)
    //           current
    // head -> 1 -> 3 -> 5 -> 7 -> NULL
    new_node->next = current->next;
    current->next = new_node;
    return head;
}

// Alternate solution using previous node rather than checking next node
// struct node *list_ordered_insert(struct node *head, int value) {
//     struct node *new_node = malloc(sizeof(struct node));
//     new_node->data = value;
//
//     struct node *prev = NULL;
//     struct node *curr = head;
//     while (curr != NULL && curr->data < value) {
//         prev = curr;
//         curr = curr->next;
//     }
//
//     if (prev == NULL) {
//         new_node->next = head;
//         head = new_node;
//     } else {
//         prev->next = new_node;
//         new_node->next = curr;
//     }
//
//     return head;
// }

// Given a non-empty linked list, find the minimum.
int find_min(struct node *head) {
    struct node *current = head;
    int min = head->data;
    while (current != NULL) {
        if (current->data < min) {
            min = current->data;
        }
        current = current->next;
    }
    return min;
}

// Given a linked list, remove the node with the smallest value from the
// linked list and return the new head of the list.
struct node *list_delete_smallest(struct node *head) {
    if (head == NULL || head->next == NULL) {
        free(head);
        return NULL;
    }
    int min = find_min(head);
    struct node *current = head;
    while (current->next->data != min) {
        current = current->next;
    }
    struct node *to_delete = current->next;
    current->next = current->next->next;
    free(to_delete);
    return head;
}

// Given a linked list, make a copy of the list and free the old list and
// return the new head of the list.
struct node *list_copy(struct node *head1) {
    struct node *new_head = NULL;
    struct node *current = head1;
    while (current != NULL) {
        // Use `list_insert_tail` to create new node and insert at end of new list
        new_head = list_insert_tail(new_head, current->data);

        // Delete current node and move to next
        struct node *to_delete = current;
        current = current->next;
        free(to_delete);
    }

    return new_head;
}

// Given two linked lists, append `list2` to `list1`.
// That is, move all elements from `list2` to the end of `list1` in the same
// order.
struct node *list_append(struct node *head1, struct node *head2) {
    // If `list1` is empty, appended is just `list2`
    if (head1 == NULL) {
        return head2;
    }

    // Otherwise just set last node in `list1` to point to `list2`
    struct node *current = head1;
    while (current->next != NULL) {
        current = current->next;
    }
    current->next = head2;
    return head1;
}

// Given a linked list, reverse the list and return the new head of the list.
struct node *list_reverse(struct node *head) {
    struct node *previous = NULL;
    struct node *next = NULL;

    struct node *current = head;
    while (current != NULL) {
        next = current->next;
        current->next = previous;
        previous = current;
        current = next;
    }

    return previous;
}

// Returns TRUE if data is in the linked list pointed to by `head`
enum bool exists_in_list(struct node *head, int data) {
    struct node *current = head;
    while (current != NULL) {
        if (current->data == data) {
            return TRUE;
        }
        current = current->next;
    }
    return FALSE;
}

// Given two linked lists, return a new list that is constructed of nodes
// containing any values that appear in both lists.
struct node *list_find_intersection(struct node *head1, struct node *head2) {
    struct node *intersection = NULL;

    struct node *current = head1;
    while (current != NULL) {
        // If the current node's data exists in the other list + not already
        // seen, then add to intersection
        if (exists_in_list(head2, current->data) == TRUE &&
            exists_in_list(intersection, current->data) == FALSE) {
            intersection = list_insert_tail(intersection, current->data);
        }
        current = current->next;
    }

    return intersection;
}

// Given a linked list and a value, count the number of times that value
// appears in the linked list.
int list_count_occurrences(struct node *head, int data) {
    int count = 0;
    struct node *current = head;
    while (current != NULL) {
        if (current->data == data) {
            count++;
        }
    }
    return count;
}
