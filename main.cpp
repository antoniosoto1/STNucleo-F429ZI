/* mbed Microcontroller Library
 * Copyright (c) 2019 ARM Limited
 * SPDX-License-Identifier: Apache-2.0
 */

#include "mbed.h"

BufferSerial pc(USBTX,USBRX,9600)
int cycle=0;

int main()
{
    while (true)
    {
        printf("This is the bare metal Serail Comm Loop\n\r",cycle);
        thread_sleep_for(WAIT_TIME_MS);
        cycle++;
    }
}
