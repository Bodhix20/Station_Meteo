/*
#include "mbed.h"

namespace{
    #define PERIOD_MS 100ms
    #define PING_PONG_COUNT 100
}

DigitalOut led1(LED1,0);
Mutex stdio_mutex;

void ping(){
    for(int i=0 ; i<PING_PONG_COUNT ; i++){
        stdio_mutex.lock();
        printf("Ping!\n");
        stdio_mutex.unlock();
    }
}

void pong(){
    for(int i=0 ; i<PING_PONG_COUNT ; i++){
        stdio_mutex.lock();
        printf("Pong!\n");
        stdio_mutex.unlock();
    }
}

int main2(){
    Thread ping_thread;
    Thread pong_thread;

    ping_thread.start(ping);
    pong_thread.start(pong);


    while(true){
        led1 = !led1;
        //printf("Alive!\n");
        ThisThread::sleep_for(PERIOD_MS/2);
    }



}
*/