#include "pico/stdlib.h"
#include <iostream>

using namespace std;


int main(){
    stdio_init_all();

    //led rot
    gpio_init(19);
    gpio_set_dir(19, GPIO_OUT);

    //led weiss
    gpio_init(20);
    gpio_set_dir(20, GPIO_OUT);

    //led gruen
    gpio_init(21);
    gpio_set_dir(21, GPIO_OUT);

    char userinput;

    while (true)
    {
        // read userinput
        userinput = getchar();

        if (userinput == '0')
        {
            gpio_put(21, 0);
            gpio_put(19, 0);
            gpio_put(20, 0);
        }
        

        // fingercounter 1
        else if (userinput == '1')
        {
            gpio_put(21, 1);
            gpio_put(19, 0);
            gpio_put(20, 0);
        }

        // fingercounter 2
        else if (userinput == '2')
        {
            gpio_put(21, 1);
            gpio_put(19, 0);
            gpio_put(20, 1);
        }

        // fingercounter 3
        else if (userinput == '3')
        {
            gpio_put(21, 1);
            gpio_put(19, 1);
            gpio_put(20, 1);
        }
        
    }
    
}