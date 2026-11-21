#pragma once
#define TARGET_TIMESTEP 0.05
#include <cstdint>
#include <random>

namespace EcoCAR{
typedef struct state_times{
    double time_red;
    double time_yellow;
    double time_green;
} state_times_t;


typedef struct cur_state{
    uint8_t cur_state;
    uint8_t next_state;
    double time_to_next_state;
    double distance_to;
    bool is_valid;
} cur_state_t;

class Intersection{
    public:
        Intersection(double position_, double lead_distance, state_times_t init, uint8_t cur_state, double state_offset);
        void step(double xdot);
        bool should_pop() const;
        cur_state_t get_state() const;
        enum LightState {
            RED=0,
            YELLOW=1,
            GREEN=2
        };
        state_times_t states;
        double dist_to_valid() const;
    private:
        double position;
        double lead_distance;
        cur_state_t cur_state;
        constexpr static uint8_t state_transitions[] = {2, 0, 1};
};

};
