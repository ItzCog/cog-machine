#ifndef __MACHINE_H__
#define __MACHINE_H__

#include <vector>

namespace cog_machine::core {
    /// Class responsible for basic script execution.
    class machine
    {
        friend class cog;

    public:
        static void init();
        static void tick();

    private:
        static std::vector<class cog *> cogs;

        static void add_cog(class cog* new_cog);
        static void remove_cog(class cog* removed_cog);
    };
}

#endif //__MACHINE_H__
