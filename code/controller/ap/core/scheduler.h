/*
 * scheduler.h
 *
 *  Created on: 2025. 5. 22.
 *      Author: USER
 */

#ifndef AP_CORE_SCHEDULER_H_
#define AP_CORE_SCHEDULER_H_

#include "hw_def.h"

#ifdef _USE_HW_SCHEDULER

typedef struct
{
        uint8_t u8nu_scheduling_1ms_flag;
        uint8_t u8nu_scheduling_50ms_flag;
        uint8_t u8nu_scheduling_100ms_flag;
}scheduling_flag_t;


extern scheduling_flag_t st_scheduling_info;
void scheduler_init();



#endif


#endif /* AP_CORE_SCHEDULER_H_ */
