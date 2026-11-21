#include "intersection.hpp"
#include <stdexcept>


using namespace EcoCAR;

constexpr uint8_t Intersection::state_transitions[];

Intersection::Intersection(double pos, double lt, state_times_t init, uint8_t cur, double state_offset){
    position = pos;
    lead_distance = lt;
    states = init;
    cur_state.cur_state = cur;
    cur_state.next_state = state_transitions[cur];
    switch(cur_state.cur_state){
        case LightState::RED:
            cur_state.time_to_next_state = states.time_red;
            break;
        case LightState::YELLOW:
            cur_state.time_to_next_state = states.time_yellow;
            break;
        case LightState::GREEN:
            cur_state.time_to_next_state = states.time_green;
            break;
        default:
            fprintf(stderr, "unreachable intersection constructor\n");
            exit(1);
    };
    cur_state.time_to_next_state -= state_offset;
    if(cur_state.time_to_next_state <= 0){
        throw std::runtime_error("internal error in calculating the initial conditions of the connected corridor");
        exit(1);
    } 
    cur_state.distance_to = position;
    cur_state.is_valid = dist_to_valid() <= 0;
}

bool Intersection::should_pop() const{
    return cur_state.distance_to <= 0;
}

void Intersection::step(double xdot){
    cur_state.time_to_next_state -= TARGET_TIMESTEP;
    cur_state.distance_to = position - xdot;
    if(cur_state.time_to_next_state <= 0){
        cur_state.cur_state = cur_state.next_state;
        cur_state.next_state = state_transitions[cur_state.cur_state];
        switch(cur_state.cur_state){
            case LightState::RED:
                cur_state.time_to_next_state = states.time_red;
                break;
            case LightState::YELLOW:
                cur_state.time_to_next_state = states.time_yellow;
                break;
            case LightState::GREEN:
                cur_state.time_to_next_state = states.time_green;
                break;
            default:
                fprintf(stderr, "unreachable\n");
                exit(1);
                break;
        }
    }
    cur_state.is_valid = dist_to_valid() <= 0;
}

cur_state_t Intersection::get_state() const{
    return cur_state;
}

double Intersection::dist_to_valid() const{
    return cur_state.distance_to - lead_distance;
}
