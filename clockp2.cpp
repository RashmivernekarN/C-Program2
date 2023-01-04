// A digital clock using C

// Import the header files
#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <stdlib.h>

int main() {
   int hour = 0;
   int minute = 0;
   int second = 0;
   while(1) {
       // Clear the output on screen
       // for windows use system("cls")
       system("clear"); 
       
       // Print the time in HH : MM : SS format
       printf("%02d : %02d : %02d ",hour,minute,second);
       
       // Clear the output buffer in gcc
       fflush(stdout);
       
       // Increment second
       second++;

       // Update hour, minute and second
       if(second == 60) {
           minute += 1;
           second = 0;
       }
    
       if(minute == 60) {
           hour += 1;
           minute = 0;
       }
    
       if(hour == 24) {
           hour = 0;
           minute = 0;
           second = 0;
       }

       // Wait for 1 second
       sleep(1);  
   }
   return 0;
}