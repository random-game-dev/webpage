#include <windows.h>

int spamtof = 1; // Set this to 1 to enable spamming

void spamMessageBoxes() {
    if (spamtof == 1) {
        for (int i = 0; i < 100; ++i) {
            MessageBoxA(NULL, "why", "why", MB_OK | MB_ICONQUESTION);
        }
    }
}

// You can call spamMessageBoxes() from your main or other function
