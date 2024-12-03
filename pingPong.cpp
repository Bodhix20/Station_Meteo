#include "mbed.h"

namespace{
    #define PERIOD_MS 100ms
    #define PING_PONG_COUNT 100
}

DigitalOut led1(LED1,0);

void ping(){
    for(int i=0 ; i<PING_PONG_COUNT ; i++){
        printf("Ping!\n");
    }
}

void pong(){
    for(int i=0 ; i<PING_PONG_COUNT ; i++){
        printf("Pong!\n");
    }
}

int main(){
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