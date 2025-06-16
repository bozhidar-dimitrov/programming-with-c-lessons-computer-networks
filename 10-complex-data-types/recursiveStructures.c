#include <stdio.h>

typedef struct Node {
  int value;
  struct Node * next;
} Node;

int main(void) {

  Node node1 = {5, NULL};
  Node node2 = {15, NULL};

  node1.next = &node2;

  return 0;
}