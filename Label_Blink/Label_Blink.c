#include "pico/stdlib.h"
int main(){

// PART A 

//     // 1. specific to the onboard LED
//     const uint LED_PIN = PICO_DEFAULT_LED_PIN;
//     // 2. Initialize the GPIO
//     gpio_init(LED_PIN);
//     // 3. Set the pin direction to OUTPUT
//     gpio_set_dir(LED_PIN, GPIO_OUT);
    
//     while (true) {
//         gpio_put(LED_PIN, 1); // Turn ON
//         sleep_ms(500); // Wait 500ms
//         gpio_put(LED_PIN, 0); // Turn OFF
//         sleep_ms(500); // Wait 500ms
//     }

// PART B
    // 1. specific to the onboard LED
    const uint LED_PIN = 15;
    // 2. Initialize the GPIO
    gpio_init(LED_PIN);
    // 3. Set the pin direction to OUTPUT
    gpio_set_dir(LED_PIN, GPIO_OUT);
    while (true)
    {
        gpio_put(LED_PIN, 1); // Turn ON
        sleep_ms(250);        // Wait 500ms
        gpio_put(LED_PIN, 0); // Turn OFF
        sleep_ms(250);        // Wait 500ms
    }

    // PART C
    // 1. Define the pins for our 2-bit counter
    // const uint LED_LSB = 15; // Decimal 1, Binary 01
    // const uint LED_MSB = 14; // Decimal 2, Binary 10

    // // 2. Initialize both GPIOs
    // gpio_init(LED_LSB);
    // gpio_init(LED_MSB);

    // // 3. Set both pin directions to OUTPUT
    // gpio_set_dir(LED_LSB, GPIO_OUT);
    // gpio_set_dir(LED_MSB, GPIO_OUT);

    // while (true)
    // {
    //     // State 0: 00 (Both OFF)
    //     gpio_put(LED_MSB, 0);
    //     gpio_put(LED_LSB, 0);
    //     sleep_ms(1000);

    //     // State 1: 01 (MSB OFF, LSB ON)
    //     gpio_put(LED_MSB, 0);
    //     gpio_put(LED_LSB, 1);
    //     sleep_ms(1000);

    //     // State 2: 10 (MSB ON, LSB OFF)
    //     gpio_put(LED_MSB, 1);
    //     gpio_put(LED_LSB, 0);
    //     sleep_ms(1000);

    //     // State 3: 11 (Both ON)
    //     gpio_put(LED_MSB, 1);
    //     gpio_put(LED_LSB, 1);
    //     sleep_ms(1000);
    // }
}