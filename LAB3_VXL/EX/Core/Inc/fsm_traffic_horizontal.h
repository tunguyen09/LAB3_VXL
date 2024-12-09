/*
 * fsm_traffic_horizontal.h
 *
 *  Created on: Nov 10, 2024
 *      Author: ACER
 */

#ifndef INC_FSM_TRAFFIC_HORIZONTAL_H_
#define INC_FSM_TRAFFIC_HORIZONTAL_H_

#define display_traffic_horizontal			5
#define modifying_led_red_horizontal		6
#define modifying_led_green_horizontal		7
#define modifying_led_yellow_horizontal		8

extern int status_traffic_horizontal;

void fsm_traffic_horizontal_run();

#endif /* INC_FSM_TRAFFIC_HORIZONTAL_H_ */
