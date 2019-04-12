#include <vector>
#include "queue.hpp"
#include <iostream>
using namespace std;

void init_queue(Queue & pq){
	pq.v = {};
	pq.head = 0;
	pq.tail = -1;
}

void enqueue(Queue & pq, float data){
	pq.v.push_back(data);
	pq.tail++;
}

float dequeue(Queue & pq){
	if(pq.head <= pq.tail){
		cout << "error";
		while(1);
	}
	float tmp = pq.v[pq.head];
	pq.v.erase(pq.v.begin());
	pq.tail--;
	return tmp;
}

float show(const Queue & pq){
	return pq.v[pq.head];
}