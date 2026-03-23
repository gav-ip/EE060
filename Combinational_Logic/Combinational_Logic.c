#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/gpio.h"
// Define GPIO Pins for Inputs
// Matches schematic: K=12, E=13, D=14, B=15
#define PIN_K 12
#define PIN_E 14
#define PIN_D 15
#define PIN_B 16
void setup_gpio()
{
    // Initialize standard I/O for printf
    stdio_init_all();
    // List of pins to initialize
    const uint pins[] = {PIN_K, PIN_E, PIN_D, PIN_B};
    for (int i = 0; i < 4; i++)
    {
        gpio_init(pins[i]);
        gpio_set_dir(pins[i], GPIO_OUT);
        gpio_put(pins[i], 0); // Start LOW
    }
}
int main()
{
    setup_gpio();
    while (true)
    {
        // Cycle through 0 to 15 (Binary 0000 to 1111)
        for (int i = 0; i < 16; i++)
        {
            // Extract bits using bitwise operations
            // (i >> N) & 1 shifts the bit to position 0 and masks it
            bool k = (i >> 3) & 1;
            bool e = (i >> 2) & 1;
            bool d = (i >> 1) & 1;
            bool b = (i >> 0) & 1;
            // set the physical pins
            gpio_put(PIN_K, k);
            gpio_put(PIN_E, e);
            gpio_put(PIN_D, d);
            gpio_put(PIN_B, b);
            // Wait 1 seconds before next state
            sleep_ms(1000);
        }
    }
    return 0;
}