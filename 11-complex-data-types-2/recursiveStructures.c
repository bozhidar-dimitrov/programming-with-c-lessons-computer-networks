#include <stdio.h>

//Recursive structures
struct ListNode {
  double value;
  struct ListNode * next;
};

int main(void) {

  struct ListNode node1 = {
    .value = 10, 
    .next=NULL
  };

  struct ListNode node2 = {
    .value = 8, 
    .next = &node1
  };

  struct ListNode node3 = {
    .value = 7, 
    .next=NULL
  };

  node1.next = &node3;

  return 0;
}