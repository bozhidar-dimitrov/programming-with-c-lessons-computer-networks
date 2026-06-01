#include <stdio.h>

struct Node {
  int value;
  struct Node * next;
};

int main(void) {

  struct Node node1 = {5, NULL};
  struct Node node2 = {7, NULL};

  node1.next = &node2;

  return 0;
}