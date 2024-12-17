#ifndef _TRAPEZOIDALINTEGRATOR_H
#define _TRAPEZOIDALINTEGRATOR_H
#include "include/core/reactor.h"
#ifndef TOP_LEVEL_PREAMBLE_984519159_H
#define TOP_LEVEL_PREAMBLE_984519159_H
#include <pico/stdlib.h>
#include <imu.h>
#endif
typedef struct {
    token_type_t type;
    lf_token_t* token;
    size_t length;
    bool is_present;
    lf_port_internal_t _base;
    float value;
    #ifdef FEDERATED
    #ifdef FEDERATED_DECENTRALIZED
    tag_t intended_tag;
    #endif
    interval_t physical_time_of_arrival;
    #endif
} _trapezoidalintegrator_in_t;
typedef struct {
    token_type_t type;
    lf_token_t* token;
    size_t length;
    bool is_present;
    lf_port_internal_t _base;
    float value;
    #ifdef FEDERATED
    #ifdef FEDERATED_DECENTRALIZED
    tag_t intended_tag;
    #endif
    interval_t physical_time_of_arrival;
    #endif
} _trapezoidalintegrator_out_t;
typedef struct {
    struct self_base_t base;
    
    #line 93 "/home/foobar/EECS149Proj/PololuCharacterization/src/lib/IMU.lf"
    float s;
    #line 94 "/home/foobar/EECS149Proj/PololuCharacterization/src/lib/IMU.lf"
    float prev_in;
    #line 95 "/home/foobar/EECS149Proj/PololuCharacterization/src/lib/IMU.lf"
    instant_t prev_time;
    #line 91 "/home/foobar/EECS149Proj/PololuCharacterization/src/lib/IMU.lf"
    _trapezoidalintegrator_in_t* _lf_in;
    #line 91 "/home/foobar/EECS149Proj/PololuCharacterization/src/lib/IMU.lf"
    // width of -2 indicates that it is not a multiport.
    #line 91 "/home/foobar/EECS149Proj/PololuCharacterization/src/lib/IMU.lf"
    int _lf_in_width;
    #line 91 "/home/foobar/EECS149Proj/PololuCharacterization/src/lib/IMU.lf"
    // Default input (in case it does not get connected)
    #line 91 "/home/foobar/EECS149Proj/PololuCharacterization/src/lib/IMU.lf"
    _trapezoidalintegrator_in_t _lf_default__in;
    #line 92 "/home/foobar/EECS149Proj/PololuCharacterization/src/lib/IMU.lf"
    _trapezoidalintegrator_out_t _lf_out;
    #line 92 "/home/foobar/EECS149Proj/PololuCharacterization/src/lib/IMU.lf"
    int _lf_out_width;
    #line 97 "/home/foobar/EECS149Proj/PololuCharacterization/src/lib/IMU.lf"
    reaction_t _lf__reaction_0;
    #line 91 "/home/foobar/EECS149Proj/PololuCharacterization/src/lib/IMU.lf"
    trigger_t _lf__in;
    #line 91 "/home/foobar/EECS149Proj/PololuCharacterization/src/lib/IMU.lf"
    reaction_t* _lf__in_reactions[1];
    #ifdef FEDERATED
    
    #endif // FEDERATED
} _trapezoidalintegrator_self_t;
_trapezoidalintegrator_self_t* new__trapezoidalintegrator();
#endif // _TRAPEZOIDALINTEGRATOR_H
