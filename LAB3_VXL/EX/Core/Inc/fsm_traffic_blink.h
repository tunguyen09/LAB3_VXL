/*
 * fsm_traffic_blink.h
 *
 *  Created on: Nov 10, 2024
 *      Author: ACER
 */

#ifndef INC_FSM_TRAFFIC_BLINK_H_
#define INC_FSM_TRAFFIC_BLINK_H_

#define init_horizontal		19
#define red_horizontal		20
#define green_horizontal	21
#define yellow_horizontal	22

#define	init_vertical		23
#define red_vertical		24
#define green_vertical		25
#define yellow_vertical		26

extern int status_traffic_blink_horizontal;
extern int status_traffic_blink_vertical;

void fsm_traffic_blink_horizontal_run();
void fsm_traffic_blink_vertical_run();

#endif /* INC_FSM_TRAFFIC_BLINK_H_ */
