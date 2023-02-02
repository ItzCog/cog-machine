#include "machine.h"
#include "cog.h"

namespace cog_machine::core {
    void machine::init()
    {
        for (auto& cog : cogs) {
            cog->init();
        }
    }

    void machine::tick()
    {
        for (auto& cog : cogs) {
            cog->tick();
        }
    }

    std::vector<cog*> machine::cogs = std::vector<cog*>();

    void machine::add_cog(cog *new_cog)
    {
        cogs.push_back(new_cog);
    }

    void machine::remove_cog(cog *removed_cog)
    {
        /// I've been too lazy :-(
    }

} // cog_machine