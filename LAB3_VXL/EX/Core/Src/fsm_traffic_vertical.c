/*
 * fsm_traffic_vertical.c
 *
 *  Created on: Nov 10, 2024
 *      Author: ACER
 */
#include "fsm_traffic_vertical.h"
#include "software_timer.h"
#include "traffic.h"

int status_traffic_vertical = display_traffic_vertical;

void fsm_traffic_vertical_run(){
	switch(status_traffic_vertical){
		case display_traffic_vertical:
			fsm_traffic_blink_vertical_run();
			break;
		case modifying_led_red_vertical:
			offGreenYellow_vertical();
			if(timer7_flag == 1){
				toggleRed_vertical();
				setTimer7(500);
			}
			break;
		case modifying_led_yellow_vertical:
			offGreenRed_vertical();
			if(timer7_flag == 1){
				toggleYellow_vertical();
				setTimer7(500);
			}
			break;
		case modifying_led_green_vertical:
			// turn off red and yellow led
			offRedYellow_vertical();
			if(timer7_flag == 1){
				//toggle green led with frequency 2Hz
				toggleGreen_vertical();
				setTimer7(500);
			}
			break;
		default:
			break;
	}
}

