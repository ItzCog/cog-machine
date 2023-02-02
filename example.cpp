//
// Created by ItzCo on 2023/2/2.
//

#include <iostream>
#include "example.h"

namespace cog_machine::example {

    /// Custom constructor
    example::example(int hello_times) : cog() /// Important: remember to invoke the base class constructor
    {
        hello_times_ = hello_times;
        std::cout << "Constructed\n";
    }

    void example::tick()
    {
        /// Important: always remember to call the corresponding base class functions when creating
        /// new functions
        cog::tick();

        if (hello_times_ == 0) return;
        std::cout << "Hello\n";
        --hello_times_;
    }
}