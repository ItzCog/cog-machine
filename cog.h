//
// Created by ItzCog on 2023/2/2.
// Fuck♂you
//

#ifndef __COG_H__
#define __COG_H__

namespace cog_machine::core {
    /// The base class for everything
    class cog
    {
    public:
        cog();
        virtual ~cog();
        virtual void init();
        virtual void tick();
    };
}

#endif
