//
// Created by conglb on 3/4/19.
//

#include "transaction_interface.h"

void transfer(int sender_id, int receiver_id, int amount) {
    pid_t pid = fork();
    if (pid == 0) {
        // a, b is min, max respectively
        int a = sender_id, b = receiver_id;
        if (sender_id > receiver_id) {
            a = receiver_id;
            b = sender_id;
        }
        // wait
        sem_wait(&sem[a]);
        sem_wait(&sem[b]);
        // critical section here
        subtract(sender_id, amount);
        add(receiver_id, amount);
        // signal
        sem_post(&sem[a]);
        sem_post(&sem[b]);
    }
    printf("\nsldkfjsl;df");
}

void info(int id) {

}

void withdraw(int id, int amount) {

}

void deposit(int id, int amount) {

}