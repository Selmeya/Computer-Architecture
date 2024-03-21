#include <stdlib.h>
#include <stdio.h>
#include <signal.h>

void interrupt_handler(int device) {
    printf("Device %d Interrupt Handler\n", device);
    // Handle interrupt for the specified device
}

void manage_interrupt(int device, void (*handler)(int)) {
    signal(SIGINT, handler);
}

int main() {
    // Enable interrupts for both devices
    manage_interrupt(1, interrupt_handler);
    manage_interrupt(2, interrupt_handler);

    printf("Interrupts enabled for both devices. Press Ctrl+C to trigger interrupts.\n");

    // Loop indefinitely to simulate device operations
    while (1) {
        // Perform other tasks or wait for interrupts
    }

    // Disable interrupts before exiting
    signal(SIGINT, SIG_DFL);

    return 0;
}
