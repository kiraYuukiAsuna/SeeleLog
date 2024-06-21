#include <Log.h>

int main() {
    SeeleLog::Create();

    SeeleTrace("Hello World!");
    SeeleInfo("Hello World!");
    SeeleWarn("Hello World!");
    SeeleError("Hello World!");
    SeeleFatal("Hello World!");
}
