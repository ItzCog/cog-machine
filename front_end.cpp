/**
 * The Cog Machine
 * written by itzCog, on Feb 2, 2023
 *
 * @Overview
 * Cog Machine is a super simple & lightweight (& lazy) framework.
 *
 * It is made to contain only the most basic functionality - to have the script executed at the right timing.
 * It does not come with a GUI, nor any complicated features like physics simulation. It's decent in some
 * university assignments / projects where more powerful and famous framework systems are not allowed for use.
 * (very sus indeed)
 *
 * @Quickstarter
 * The fundamental of this system is the "Cog" class. It's the base class for every instance that needs event
 * loop handling. By inheriting from this class and overriding the functions, it's possible to achieve complex
 * logic and develop wonderful projects. (only a possibility, I can't guarantee anything)
*/

#include "front_end.h"

#include "example.h"

namespace cog_machine::front_end {
    /// The function called at the beginning of the game, for the preparatory work
    /// (mainly to instantiate the classes)
    void front_end::user_def()
    {
        /// Since there's no GUI system where you can instantiate classes by placing them
        /// into the scene, you'll have to do it ♂with your hand♂
        auto example_instance = new example::example(3);

        /// Make sure to check example.h & example.cpp to learn how to work with cog classes
    }
}