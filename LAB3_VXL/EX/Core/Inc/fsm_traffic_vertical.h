/*
 * fsm_traffic_vertical.h
 *
 *  Created on: Nov 10, 2024
 *      Author: ACER
 */

#ifndef INC_FSM_TRAFFIC_VERTICAL_H_
#define INC_FSM_TRAFFIC_VERTICAL_H_

#define display_traffic_vertical	9
#define modifying_led_red_vertical	30
#define modifying_led_green_vertical	31
#define modifying_led_yellow_vertical	32

extern int status_traffic_vertical;

void fsm_traffic_vertical_run();

#endif /* INC_FSM_TRAFFIC_VERTICAL_H_ */
