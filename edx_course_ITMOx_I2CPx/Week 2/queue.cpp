#include <stdio.h>
#include <stdlib.h>

typedef struct queue_t {
    struct queue_t *prev, *next;
    int value;
} queue_t;

void queue_destroy(queue_t **queue);

int queue_pop(queue_t *queue) {
    queue_t *del_entry = queue->prev;
    int rv = del_entry->value;
    del_entry->prev->next = del_entry->next;
    del_entry->next->prev = del_entry->prev;
    del_entry->prev = del_entry->next = del_entry;
    queue_destroy(&del_entry);
    return rv;
}

queue_t *queue_create(int value) {
    queue_t *rv = (queue_t*) (malloc(sizeof(queue_t)));
    rv->next = rv->prev = rv;
    rv->value = value;
    return rv;
}

void queue_destroy(queue_t **queue) {
    while ((*queue)->next != *queue) {
        queue_pop(*queue);
    }
    free(*queue);
    *queue = NULL;
}

void queue_push(queue_t *queue, int value) {
    queue_t *new_entry = queue_create(value);
    new_entry->next = queue->next;
    new_entry->prev = queue;
    new_entry->next->prev = new_entry;
    new_entry->prev->next = new_entry;
}


int main() {
    int n, i, val;
    char cmd[2];
    queue_t *entry = queue_create(0);

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    scanf("%d", &n);
    for (i = 0; i < n; ++i) {
        scanf("%s", cmd);
        if (cmd[0] == '-') {
            printf("%d\n", queue_pop(entry));
        } else {
            scanf("%d", &val);
            queue_push(entry, val);
        }
    }
    queue_destroy(&entry);
    return 0;
}