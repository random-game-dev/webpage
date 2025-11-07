#include <windows.h>

int spamtof = 1; // Set this to 1 to enable spamming

void spamMessageBoxes() {
    if (spamtof == 1) {
            MessageBoxA(NULL, "why", "why", MB_OK | MB_ICONQUESTION);
    }
}

// You can call spamMessageBoxes() from your main or other function


// fix - alkonsafe
int main() {
    while (true){
        spamMessageBoxes();
    }
}
