/* mbed Microcontroller Library
 * Copyright (c) 2019 ARM Limited
 * SPDX-License-Identifier: Apache-2.0
 */

#include "mbed.h"

#define WAIT_TIME_MS 500 
DigitalOut led1(LED1);
DigitalOut led3(LED3);
DigitalOut led2(LED2);
DigitalIn userbutt(BUTTON1);

int main()
{
    printf("This is the bare metal blinky example running on Mbed OS %d.%d.%d.\n", MBED_MAJOR_VERSION, MBED_MINOR_VERSION, MBED_PATCH_VERSION);

    while (true)
    {
        led1 = !led1;
        thread_sleep_for(WAIT_TIME_MS);
        if (userbutt)
        {
            led3 = 1;
            led2 =!led2;
        }else {
            led3 = 0;
            led2 =1;
        }
    }
}
