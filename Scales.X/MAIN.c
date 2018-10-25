#include <stdio.h>
#include <stdlib.h>
#include <p18f452.h>
#include <spi.h>
#include <delays.h>
#include "TTS_CMD.h"
#include "ConfigRegs.h"
#include "tts.h"

char test[] = "test this string hello world bye world";
char test_two[] = "mechtronics 3700";
char test_three[] = "bye world";

void main(){

        tts_init();

        tts_run(test);
        tts_run(test_two);
        tts_run(test_three);
        while(1);

}
        
    

