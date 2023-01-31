#include <iostream>
#include <vector>
#include <utility>
using namespace std;


class PriorityQueue {
private:
    vector<pair<int, int>> heap;

    int parent(int i) { return (i - 1) / 2; }
    int leftChild(int i) { return 2 * i + 1; }
    int rightChild(int i) { return 2 * i + 2; }

    void heapifyUp(int i) {
        while (i > 0 && heap[parent(i)].first < heap[i].first) {
            swap(heap[i], heap[parent(i)]);
            i = parent(i);
        }
    }

    void heapifyDown(int i) {
        int maxIndex = i;
        int left = leftChild(i);
        int right = rightChild(i);

        if (left < heap.size() && heap[left].first > heap[maxIndex].first)
            maxIndex = left;
        if (right < heap.size() && heap[right].first > heap[maxIndex].first)
            maxIndex = right;
        if (i != maxIndex) {
            swap(heap[i], heap[maxIndex]);
            heapifyDown(maxIndex);
        }
    }

public:
    void enqueue(int item, int priority) {
        heap.push_back(make_pair(priority, item));
        heapifyUp(heap.size() - 1);
    }

    pair<int, int> dequeue() {
        pair<int, int> result = heap[0];
        heap[0] = heap.back();
        heap.pop_back();
        heapifyDown(0);
        return result;
    }

    pair<int, int> top() {
        return heap[0];
    }

    bool empty() {
        return heap.empty();
    }
};

int main() {
    PriorityQueue pq;
    pq.enqueue(10, 1);
    pq.enqueue(5, 3);
    pq.enqueue(20, 2);
    pq.enqueue(30, 0);
    pq.enqueue(15, 4);
    while (!pq.empty()) {
        pair<int, int> top = pq.top();
        cout << top.second << " " << top.first << endl;
        pq.dequeue();
    }
    return 0;
}
