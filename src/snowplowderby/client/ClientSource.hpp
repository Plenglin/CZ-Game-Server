#pragma once

#include <memory>

#include "snowplowderby/game/Arena.hpp"

namespace snowplowderby::client {
    
    class ClientSource {
    private:
        ArenaPtr arena;
    public:
        ClientSource();
        void set_arena(ArenaPtr arena);
        virtual void update() = 0;
    };

    typedef std::shared_ptr<ClientSource> ClientSourcePtr;

}