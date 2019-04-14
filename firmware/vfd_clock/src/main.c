#include <avr/io.h>
#include <avr/delay.h>

#include "rtc.h"
#include "vfd.h"

rtc_t* rtc;

int main(){
    // Init
    rtc_init(rtc);

    // Main loop
    while(1){
        _delay_ms(1);
    }

    return 0;
}