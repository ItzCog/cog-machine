#include "front_end.h"
#include "machine.h"

/// This usually does not require any editing
int main()
{
    cog_machine::front_end::front_end::user_def();
    cog_machine::core::machine::init();
    while (true) {
        cog_machine::core::machine::tick();
    }
}
