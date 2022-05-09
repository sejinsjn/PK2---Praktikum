#include <stdio.h>
#include "queue.h"

#define CAPACITY 2
#define increaseIndex(pointer) pointer = (pointer + 1) % CAPACITY;

int queue[CAPACITY];
int headIndex = 0;
int tailIndex = -1;
int currentSize = 0;

void enqueue(int i) {
  if (currentSize != CAPACITY) {
    increaseIndex(tailIndex);
    currentSize++;
  }

  queue[tailIndex] = i;
}

int dequeue() {
  if (currentSize != 0) {
    int result = queue[headIndex];
    increaseIndex(headIndex);
    currentSize--;

    return result;
  }

  return -1;
}