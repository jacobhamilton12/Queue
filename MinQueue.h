#include "../../Part1/TemplateDoublyLinkedList/TemplateDoublyLinkedList.h"

#include <iostream>
#include <string>

using namespace std;



template <class F>
class MinQueue{
private:
	DoublyLinkedList<F> dll;
public: 
	void enqueue(F var);
	F dequeue();
	F min();
	bool isEmpty();
	int size();
	DoublyLinkedList<F> get() const;
};

template <class F>
void MinQueue<F>::enqueue(F var){
	DListNode<F> *node = dll.getFirst();
    if(!dll.isEmpty()){
      while (node->next != NULL && var > node->obj) {
        node = node->next;
      }
      dll.insertBefore(*node, var);
    }else{
    	dll.insertFirst(var);
    }
}

template <class F>
F MinQueue<F>::dequeue(){
	return dll.removeFirst();
}

template <class F>
F MinQueue<F>::min(){
	return dll.first();
}

template <class F>
bool MinQueue<F>::isEmpty(){
	return dll.isEmpty();
}

template <class F>
int MinQueue<F>::size(){
	return DoublyLinkedListLength(dll);
}

template <class F>
DoublyLinkedList<F> MinQueue<F>::get() const{
	return dll;
}

template <class F>
ostream& operator<<(ostream& out, const MinQueue<F>& mq){
	out << mq.get();
	return out;
}








