#include "cog.h"
#include "machine.h"

namespace cog_machine::core {
    cog::cog()
    {
        machine::add_cog(this);
    }

    cog::~cog()
    {
        machine::remove_cog(this);
    }

    /// Invoked when the script starts running, after the constructor is called
    /// This will NOT be called if the cog is instantiated after the start of
    /// the game (this behaviour is subject to change in the future)
    void cog::init()
    {

    }

    /// Invoked every frame
    void cog::tick()
    {

    }
} // cog_machine