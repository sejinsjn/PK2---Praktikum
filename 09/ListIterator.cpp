#include "ListIterator.h"
#include "node.h"

using namespace fhdo_pk2;

template <typename T>
ListIterator<T>::ListIterator(node<T>* head) : current{head} {};

template <typename T>
bool ListIterator<T>::hasNext() {
  if (current != nullptr) return true;
  return false;
}

template <typename T>
const T* ListIterator<T>::next() {
  const T* data = current->data;
  current = current->next;
  return data;
}