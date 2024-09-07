//Code by G V V Sharma
//February 7, 2021
//Released under GNU/GPL

#include "pico/stdlib.h"

int main() {
//Initialising the pins
    gpio_init(2);
    gpio_init(3);
    gpio_init(4);
    gpio_init(5);
    gpio_init(6);
    gpio_init(7);
    gpio_init(8);

//Declaring pins as output
    gpio_set_dir(2, GPIO_OUT);
    gpio_set_dir(3, GPIO_OUT);
    gpio_set_dir(4, GPIO_OUT);
    gpio_set_dir(5, GPIO_OUT);
    gpio_set_dir(6, GPIO_OUT);
    gpio_set_dir(7, GPIO_OUT);
    gpio_set_dir(8, GPIO_OUT);

//Generating numbers on the seven segment display
    while (true) {
gpio_put(2, 1);
gpio_put(3, 0);
gpio_put(4, 0);
gpio_put(5, 1);
gpio_put(6, 1);
gpio_put(7, 0);
gpio_put(8, 0);


    }
}

