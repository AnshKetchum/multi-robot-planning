#ifndef _DISPLAY_H
#define _DISPLAY_H
#include "include/core/reactor.h"
#ifndef TOP_LEVEL_PREAMBLE_134048221_H
#define TOP_LEVEL_PREAMBLE_134048221_H
#include <pico/stdlib.h>
#include <display.h>        // Do not use "display.h". Doesn't work.
#endif
typedef struct {
    token_type_t type;
    lf_token_t* token;
    size_t length;
    bool is_present;
    lf_port_internal_t _base;
    string value;
    #ifdef FEDERATED
    #ifdef FEDERATED_DECENTRALIZED
    tag_t intended_tag;
    #endif
    interval_t physical_time_of_arrival;
    #endif
} _display_line0_t;
typedef struct {
    token_type_t type;
    lf_token_t* token;
    size_t length;
    bool is_present;
    lf_port_internal_t _base;
    string value;
    #ifdef FEDERATED
    #ifdef FEDERATED_DECENTRALIZED
    tag_t intended_tag;
    #endif
    interval_t physical_time_of_arrival;
    #endif
} _display_line1_t;
typedef struct {
    token_type_t type;
    lf_token_t* token;
    size_t length;
    bool is_present;
    lf_port_internal_t _base;
    string value;
    #ifdef FEDERATED
    #ifdef FEDERATED_DECENTRALIZED
    tag_t intended_tag;
    #endif
    interval_t physical_time_of_arrival;
    #endif
} _display_line2_t;
typedef struct {
    token_type_t type;
    lf_token_t* token;
    size_t length;
    bool is_present;
    lf_port_internal_t _base;
    string value;
    #ifdef FEDERATED
    #ifdef FEDERATED_DECENTRALIZED
    tag_t intended_tag;
    #endif
    interval_t physical_time_of_arrival;
    #endif
} _display_line3_t;
typedef struct {
    struct self_base_t base;
    
    
    #line 27 "/home/foobar/EECS149Proj/PololuCharacterization/src/lib/Display.lf"
    _display_line0_t* _lf_line0;
    #line 27 "/home/foobar/EECS149Proj/PololuCharacterization/src/lib/Display.lf"
    // width of -2 indicates that it is not a multiport.
    #line 27 "/home/foobar/EECS149Proj/PololuCharacterization/src/lib/Display.lf"
    int _lf_line0_width;
    #line 27 "/home/foobar/EECS149Proj/PololuCharacterization/src/lib/Display.lf"
    // Default input (in case it does not get connected)
    #line 27 "/home/foobar/EECS149Proj/PololuCharacterization/src/lib/Display.lf"
    _display_line0_t _lf_default__line0;
    #line 28 "/home/foobar/EECS149Proj/PololuCharacterization/src/lib/Display.lf"
    _display_line1_t* _lf_line1;
    #line 28 "/home/foobar/EECS149Proj/PololuCharacterization/src/lib/Display.lf"
    // width of -2 indicates that it is not a multiport.
    #line 28 "/home/foobar/EECS149Proj/PololuCharacterization/src/lib/Display.lf"
    int _lf_line1_width;
    #line 28 "/home/foobar/EECS149Proj/PololuCharacterization/src/lib/Display.lf"
    // Default input (in case it does not get connected)
    #line 28 "/home/foobar/EECS149Proj/PololuCharacterization/src/lib/Display.lf"
    _display_line1_t _lf_default__line1;
    #line 29 "/home/foobar/EECS149Proj/PololuCharacterization/src/lib/Display.lf"
    _display_line2_t* _lf_line2;
    #line 29 "/home/foobar/EECS149Proj/PololuCharacterization/src/lib/Display.lf"
    // width of -2 indicates that it is not a multiport.
    #line 29 "/home/foobar/EECS149Proj/PololuCharacterization/src/lib/Display.lf"
    int _lf_line2_width;
    #line 29 "/home/foobar/EECS149Proj/PololuCharacterization/src/lib/Display.lf"
    // Default input (in case it does not get connected)
    #line 29 "/home/foobar/EECS149Proj/PololuCharacterization/src/lib/Display.lf"
    _display_line2_t _lf_default__line2;
    #line 30 "/home/foobar/EECS149Proj/PololuCharacterization/src/lib/Display.lf"
    _display_line3_t* _lf_line3;
    #line 30 "/home/foobar/EECS149Proj/PololuCharacterization/src/lib/Display.lf"
    // width of -2 indicates that it is not a multiport.
    #line 30 "/home/foobar/EECS149Proj/PololuCharacterization/src/lib/Display.lf"
    int _lf_line3_width;
    #line 30 "/home/foobar/EECS149Proj/PololuCharacterization/src/lib/Display.lf"
    // Default input (in case it does not get connected)
    #line 30 "/home/foobar/EECS149Proj/PololuCharacterization/src/lib/Display.lf"
    _display_line3_t _lf_default__line3;
    #line 33 "/home/foobar/EECS149Proj/PololuCharacterization/src/lib/Display.lf"
    reaction_t _lf__reaction_0;
    #line 44 "/home/foobar/EECS149Proj/PololuCharacterization/src/lib/Display.lf"
    reaction_t _lf__reaction_1;
    trigger_t _lf__startup;
    reaction_t* _lf__startup_reactions[1];
    #line 27 "/home/foobar/EECS149Proj/PololuCharacterization/src/lib/Display.lf"
    trigger_t _lf__line0;
    #line 27 "/home/foobar/EECS149Proj/PololuCharacterization/src/lib/Display.lf"
    reaction_t* _lf__line0_reactions[1];
    #ifdef FEDERATED
    
    #endif // FEDERATED
    #line 28 "/home/foobar/EECS149Proj/PololuCharacterization/src/lib/Display.lf"
    trigger_t _lf__line1;
    #line 28 "/home/foobar/EECS149Proj/PololuCharacterization/src/lib/Display.lf"
    reaction_t* _lf__line1_reactions[1];
    #ifdef FEDERATED
    
    #endif // FEDERATED
    #line 29 "/home/foobar/EECS149Proj/PololuCharacterization/src/lib/Display.lf"
    trigger_t _lf__line2;
    #line 29 "/home/foobar/EECS149Proj/PololuCharacterization/src/lib/Display.lf"
    reaction_t* _lf__line2_reactions[1];
    #ifdef FEDERATED
    
    #endif // FEDERATED
    #line 30 "/home/foobar/EECS149Proj/PololuCharacterization/src/lib/Display.lf"
    trigger_t _lf__line3;
    #line 30 "/home/foobar/EECS149Proj/PololuCharacterization/src/lib/Display.lf"
    reaction_t* _lf__line3_reactions[1];
    #ifdef FEDERATED
    
    #endif // FEDERATED
} _display_self_t;
_display_self_t* new__display();
#endif // _DISPLAY_H
