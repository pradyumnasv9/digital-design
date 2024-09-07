/*
Code by G V V Sharma
Feb 12, 2021
Released under GNU GPL
https://www.gnu.org/licenses/gpl-3.0.en.html
 */

#include "pico/stdlib.h"

int main() {
//initialize on board led (pin 25)
    gpio_init(25); 

//declaring pin 25 as output
    gpio_set_dir(25, GPIO_OUT);

//blink led
    while (true) {
        gpio_put(25, 1);
        sleep_ms(250);
        gpio_put(25, 0);
        sleep_ms(250);
    }
}
