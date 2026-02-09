#include <stdio.h>
#include <dlfcn.h>
#include "Aimbot.cpp"
#include "GUI.cpp"

int main() {
    setupGUI();

    while (true) {
        renderGUI();
        // Add a sleep or delay here to control the loop speed
    }

    return 0;
}
