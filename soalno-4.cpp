#include <iostream>

const int MAX_SIZE=5;

class Queue {
    private:
        int elements[MAX_SIZE];
        int front;
        int rear;
        int count;

    public:
        Queue() {
            front = 0;
            rear = -1;
            count = 0;

        }
        bool isFull() {
            return count == MAX_SIZE;
        }

        bool isEmpty() {
            return count == 0;
        }

        void enqueue(int value) {
            if(isFull()) {
                std::cout << "Queue Penuh. Tidak ada element yang dapat ditambahkan!";
                return;
            }

            rear = (rear + 1) % MAX_SIZE;
            elements[rear] = value;
            count++;
        }

        int dequeue() {
            if(isEmpty()) {
                std::cout << "Queue kosong. Tidak ada yang dapat dihapus!";
                return -1;
            }

            int value = elements[front];
            front = (front + 1) % MAX_SIZE;
            count--;

            return value;
        }

        void display() {
            int index = front;
            for(int i = 0; i < count; i++) {
                std::cout << elements[index] << " ";
                index = (index + 1) % MAX_SIZE;
            }
            std::cout << std::endl;
        }
};

int main() {
    Queue queue1;

    queue1.enqueue(3);
    queue1.enqueue(7);
    queue1.dequeue();
    queue1.enqueue(2);
    queue1.enqueue(4);
    queue1.enqueue(1);
    queue1.dequeue();
    queue1.enqueue(6);
    queue1.dequeue();
    queue1.enqueue(5);

    queue1.display();
}