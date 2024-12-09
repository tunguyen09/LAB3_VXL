/*
 * fsm_traffic_blink.c
 *
 *  Created on: Nov 10, 2024
 *      Author: ACER
 */
#include "fsm_traffic_blink.h"
#include "software_timer.h"
#include "traffic_buffer.h"
#include "traffic.h"
#include "global.h"
#include "control_7SEG.h"

int status_traffic_blink_horizontal = init_horizontal;
int status_traffic_blink_vertical = init_vertical;


void fsm_traffic_blink_horizontal_run(){
	switch(status_traffic_blink_horizontal){
		case init_horizontal:
			status_traffic_blink_horizontal = red_horizontal;
			traffic_buffer_horizontal[0] = time_red_horizontal*1000;
			setTimer1(traffic_buffer_horizontal[0]);//led red will turn on in traffic_buffer_horizontal[0]/1000 verticals
			setTimer3(1000);// count down as a clock
			break;
		case red_horizontal:
			setRed_horizontal();
			//update _7SEG_buffer_horizontal
			_7SEG_buffer_horizontal[0] = time_red_horizontal_temp/10;
			_7SEG_buffer_horizontal[1] = time_red_horizontal_temp%10;

			if(timer3_flag == 1){
				time_red_horizontal_temp--;
				if(time_red_horizontal_temp == 0){
					time_red_horizontal_temp = time_red_horizontal;
				}
				setTimer3(1000);
			}

			if(timer1_flag == 1){
				status_traffic_blink_horizontal = green_horizontal;
				traffic_buffer_horizontal[1] = time_green_horizontal*1000;
				setTimer1(traffic_buffer_horizontal[1]);
				setTimer3(1000);
			}
			break;
		case green_horizontal:
			setGreen_horizontal();
			//update _7SEG_buffer_horizontal
			_7SEG_buffer_horizontal[0] = time_green_horizontal_temp/10;
			_7SEG_buffer_horizontal[1] = time_green_horizontal_temp%10;

			if(timer3_flag == 1){
				time_green_horizontal_temp--;
				if(time_green_horizontal_temp == 0){
					time_green_horizontal_temp = time_green_horizontal;
				}
				setTimer3(1000);
			}

			if(timer1_flag == 1){
				status_traffic_blink_horizontal = yellow_horizontal;
				traffic_buffer_horizontal[2] = time_yellow_horizontal*1000;
				setTimer1(traffic_buffer_horizontal[2]);
				setTimer3(1000);
			}
			break;
		case yellow_horizontal:
			setYellow_horizontal();
			//update _7SEG_buffer_horizontal
			_7SEG_buffer_horizontal[0] = time_yellow_horizontal_temp/10;
			_7SEG_buffer_horizontal[1] = time_yellow_horizontal_temp%10;

			if(timer3_flag == 1){
				time_yellow_horizontal_temp--;
				if(time_yellow_horizontal_temp == 0){
					time_yellow_horizontal_temp = time_yellow_horizontal;
				}
				setTimer3(1000);
			}

			if(timer1_flag == 1){
				status_traffic_blink_horizontal = red_horizontal;
				traffic_buffer_horizontal[0] = time_red_horizontal*1000;
				setTimer1(traffic_buffer_horizontal[0]);
				setTimer3(1000);
			}
			break;
		default:
			break;
	}
}

void fsm_traffic_blink_vertical_run(){
	switch(status_traffic_blink_vertical){
		case init_vertical:
			status_traffic_blink_vertical = green_vertical;
			traffic_buffer_vertical[0] = time_green_vertical*1000;
			setTimer2(traffic_buffer_vertical[0]);
			setTimer5(1000);// count down as a clock
			break;
		case green_vertical:
			setGreen_vertical();
			//update _7SEG_buffer_vertical
			_7SEG_buffer_vertical[0] = time_green_vertical_temp/10;
			_7SEG_buffer_vertical[1] = time_green_vertical_temp%10;

			if(timer5_flag == 1){
				time_green_vertical_temp--;
				if(time_green_vertical_temp != 0) setTimer5(1000);
				if(time_green_vertical_temp == 0){
					time_green_vertical_temp = time_green_vertical;
				}
				setTimer5(1000);
			}

			if(timer2_flag == 1){
				status_traffic_blink_vertical = yellow_vertical;
				traffic_buffer_vertical[1] = time_yellow_vertical*1000;
				setTimer2(traffic_buffer_vertical[1]);
				setTimer5(1000);
			}
			break;
		case yellow_vertical:
			setYellow_vertical();
			//update _7SEG_buffer_vertical
			_7SEG_buffer_vertical[0] = time_yellow_vertical_temp/10;
			_7SEG_buffer_vertical[1] = time_yellow_vertical_temp%10;

			if(timer5_flag == 1){
				time_yellow_vertical_temp--;
				if(time_yellow_vertical_temp == 0){
					time_yellow_vertical_temp = time_yellow_vertical;
				}
				setTimer5(1000);
			}

			if(timer2_flag == 1){
				status_traffic_blink_vertical = red_vertical;
				traffic_buffer_vertical[2] = time_red_vertical*1000;
				setTimer2(traffic_buffer_vertical[2]);
				setTimer5(1000);
			}
			break;
		case red_vertical:
			setRed_vertical();
			//update _7SEG_buffer_vertical
			_7SEG_buffer_vertical[0] = time_red_vertical_temp/10;
			_7SEG_buffer_vertical[1] = time_red_vertical_temp%10;

			if(timer5_flag == 1){
				time_red_vertical_temp--;
				if(time_red_vertical_temp == 0){
					time_red_vertical_temp = time_red_vertical;
				}
				setTimer5(1000);
			}

			if(timer2_flag == 1){
				status_traffic_blink_vertical = green_vertical;
				traffic_buffer_vertical[0] = time_green_vertical*1000;
				setTimer2(traffic_buffer_vertical[0]);
				setTimer5(1000);
			}
			break;
		default:
			break;
	}
}

