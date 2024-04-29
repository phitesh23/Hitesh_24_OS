
#include <iostream>
#include <thread>
#include <mutex>
#include <semaphore.h>
#include <queue>

const int BUFFER_SIZE = 5;
std::queue<int> buffer;
sem_t empty, full;
std::mutex mtx;

void producer() {
    for (int i = 0; i < 10; ++i) {
        sem_wait(&empty);
        mtx.lock();
        buffer.push(i);
        std::cout << "Produced: " << i << std::endl;
        mtx.unlock();
        sem_post(&full);
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
    }
}

void consumer() {
    for (int i = 0; i < 10; ++i) {
        sem_wait(&full);
        mtx.lock();
        int item = buffer.front();
        buffer.pop();
        std::cout << "Consumed: " << item << std::endl;
        mtx.unlock();
        sem_post(&empty);
        std::this_thread::sleep_for(std::chrono::milliseconds(700));
    }
}

int main() {
    sem_init(&empty, 0, BUFFER_SIZE);
    sem_init(&full, 0, 0);

    std::thread producerThread(producer);
    std::thread consumerThread(consumer);

    producerThread.join();
    consumerThread.join();

    sem_destroy(&empty);
    sem_destroy(&full);

    return 0;
}

