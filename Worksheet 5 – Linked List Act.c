#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define Max 50
#define str struct
#define Loop for(int i = 0; i < 3; i++)
#define p printf

str node {
    int student_id;
    char name[Max];
    str node *next;
};

str node *emptylist() {
    return NULL;
}

str node* createStudent(int id, const char* name) {
    str node *ptr = (str node*)malloc(sizeof(str node));

    if (ptr == NULL) {
        p("Memory allocation failed.\n");
        return NULL;
    }


    ptr->student_id = id;
    snprintf(ptr->name, Max, "%s", name);
    ptr->next = NULL;

    return ptr;
}

str node* input(str node* head, str node* ptr) {
    if (ptr == NULL) {
        return head;
    }

    ptr->next = head;
    return ptr;
}

str node* delete(str node* head) {
    if (head == NULL) {
        return NULL;
    }

    str node *temp = head;
    head = head->next;
    free(temp);

    return head;
}

str node* deleteAll(str node* head) {
    while (head != NULL) {
        str node *temp = head;
        head = head->next;
        free(temp);
    }

    return head;
}

void display(str node* head) {
    str node *temp = head;
    int i = 1;

    while (temp != NULL) {
        p("No %d - Student ID: %d, Name: %s\n",
          i, temp->student_id, temp->name);

        temp = temp->next;
        i++;
    }
}

int main() {
    str node *head = emptylist();

    head = input(head, createStudent(102, "Kishi"));
    head = input(head, createStudent(101, "Chathurika"));
    head = input(head, createStudent(100, "Gihan"));

    display(head);

    head = delete(head);

    p("\nAfter delete first Node:\n");
    display(head);

    head = input(head, createStudent(103, "Namal"));
    head = input(head, createStudent(104, "Rajapaksa"));

    p("\nAfter inserting two nodes:\n");
    display(head);

    head = deleteAll(head);

    p("\nAfter deleting all nodes:\n");
    display(head);

    return 0;
}
