//
// Created by conglb on 3/4/19.
//

#ifndef UNTITLED_TRANSACTION_INTERFACE_H
#define UNTITLED_TRANSACTION_INTERFACE_H

#include <semaphore.h>
#include <unistd.h>
#include <stdio.h>
#include "db_interface.c"

const int MAX_NUM_ACCOUNT = 1e5+3;
sem_t sem[MAX_NUM_ACCOUNT];

void transfer(int sender_id, int receiver_id, int amount);
void info(int id);
void withdraw(int id, int amount);
void deposit(int id, int amount);

#endif //UNTITLED_TRANSACTION_INTERFACE_H
