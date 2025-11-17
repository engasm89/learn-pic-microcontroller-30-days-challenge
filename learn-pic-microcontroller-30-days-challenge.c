#include <stdio.h> // Include I/O for challenge logs
#include <unistd.h> // Include POSIX sleep for timing

// Simulate daily tasks for PIC microcontroller learning
static int day = 1; // Initialize day counter

// Program entry simulating a sequence of tasks
int main(void) { // Begin main function
  printf("Learn PIC Microcontroller with this 30 Days Challenge (IoT Microcontrollers)\n"); // Header
  for (day = 1; day <= 10; ++day) { // Simulate first 10 days
    printf("Day %d: GPIO, Timers, ADC, UART\n", day); // Print tasks summary
    usleep(400000); // Delay 400 ms
  } // End loop
  return 0; // Exit success
} // End main

