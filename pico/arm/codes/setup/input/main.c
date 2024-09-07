/*
This program tests PICO GPIO input using GP2
Code by G V V Sharma
Feb 13, 2021
Released under GNU GPL
https://www.gnu.org/licenses/gpl-3.0.en.html
 */

#include "pico/stdlib.h"

int main() {

//Initialising the pins
    gpio_init(25);
    gpio_init(2);

//Declaring pins as input/output
    gpio_set_dir(25, GPIO_OUT);
    gpio_set_dir(2, GPIO_IN);

    // The following command is to ensure that GP2 is by default 1

    gpio_pull_up(2);

    while (true) {

//If GP2 = 0, LED off, otherwise on
	if (gpio_get(2)) {
        	gpio_put(25, 1);
	}	else {
        	gpio_put(25, 0);
	}
    }
}

