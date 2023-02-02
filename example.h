//
// just lube it up
//

#ifndef __EXAMPLE_H__
#define __EXAMPLE_H__

#include "cog.h"

namespace cog_machine::example {
    /// An example of working with this system.
    /// To start with, we create a class that is a public inherit of the cog class.
    class example : public core::cog
    {
    public:
        /// The constructor can have any argument
        example(int hello_times_);

        /// Overriding the base class
        void tick() override;

    private:
        /// You can define any member variable as you like
        int hello_times_;
    };
} // cog_machine

#endif
