#include "MinQueue.h"

#include <iostream>
#include <string>

using namespace std;

int main(){
	MinQueue<int> queue;
	cout << "Queue0 isEmpty: " << queue.isEmpty() << endl; 
	queue.enqueue(3);
	queue.enqueue(1);
	queue.enqueue(6);
	queue.enqueue(4);
	queue.enqueue(9);
	queue.enqueue(34);
	queue.enqueue(24);
	queue.enqueue(356);
	queue.enqueue(11);
	cout << "Queue0: " << queue << endl;
	cout << "Queue0 min: " << queue.min() << endl;
	cout << "Queue0 dequeue: " << queue.dequeue() << endl;
	cout << "Queue0 dequeue: " << queue.dequeue() << endl;
	cout << "Queue0 dequeue: " << queue.dequeue() << endl;
	cout << "Queue0: " << queue << endl;
	cout << "Queue0 min: " << queue.min() << endl;
	cout << "Queue0 size: " << queue.size() << endl;
	cout << "Queue0 isEmpty: " << queue.isEmpty() << endl; 

	MinQueue<string> queue1;
	cout << "\n\nQueue1 isEmpty: " << queue1.isEmpty() << endl; 
	queue1.enqueue("g");
	queue1.enqueue("adfa");
	queue1.enqueue("hgf");
	queue1.enqueue("er");
	queue1.enqueue("vfd");
	queue1.enqueue("zzz");
	queue1.enqueue("wer");
	queue1.enqueue("aaa");
	queue1.enqueue("bbb");
	queue1.enqueue("baa");
	queue1.enqueue("qec");
	queue1.enqueue("gfdsssss");
	cout << "Queue1: " << queue1 << endl;
	cout << "Queue1 min: " << queue1.min() << endl;
	cout << "Queue1 dequeue: " << queue1.dequeue() << endl;
	cout << "Queue1 dequeue: " << queue1.dequeue() << endl;
	cout << "Queue1 dequeue: " << queue1.dequeue() << endl;
	cout << "Queue1: " << queue1 << endl;
	cout << "Queue1 min: " << queue1.min() << endl;
	cout << "Queue1 size: " << queue1.size() << endl;
	cout << "Queue1 isEmpty: " << queue1.isEmpty() << endl; 
	return 0;
}