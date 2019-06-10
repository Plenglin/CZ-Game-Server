#pragma once

#include <Box2D/Box2D.h>
#include <Box2D/Common/b2Math.h>
#include <vector>
#include "util/log.hpp"

#include "Player.hpp"

#define TIME_STEP 0.05

namespace snowplowderby {

    class Arena {
        private:
            static util::Logger logger;
            b2World phys_world;
            std::vector<Player*> players;
        public:
            Arena();
            ~Arena();

            Player* create_player();

            void update();
    };

}
