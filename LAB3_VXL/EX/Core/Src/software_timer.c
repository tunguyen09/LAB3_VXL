/*
 * software_timer.c
 *
 *  Created on: Nov 10, 2024
 *      Author: ACER
 */
#include "software_timer.h"

int TICK = 10;//time cycle

int timer1_flag = 0;
int timer1_counter = 0;

// timer2 is used to update led 7-SEG
int timer2_flag = 0;
int timer2_counter = 0;

// timer3 is uesd to control LED-RED and DOT-LED
int timer3_flag = 0;
int timer3_counter = 0;

// timer4 is used to update led matrix
int timer4_flag = 0;
int timer4_counter = 0;

// timer5 is used to update buffer led matrix
int timer5_flag = 0;
int timer5_counter = 0;

int timer6_flag = 0;
int timer6_counter = 0;

int timer7_flag = 0;
int timer7_counter = 0;

int timer8_flag = 0;
int timer8_counter = 0;

int timer9_flag = 0;
int timer9_counter = 0;

int timer10_flag = 0;
int timer10_counter = 0;

//timer for update clockbuffer
void setTimer1(int duration){
	timer1_counter = duration/TICK;
	timer1_flag = 0;
}

//timer for update 7SEG led
void setTimer2(int duration){
	timer2_counter = duration/TICK;
	timer2_flag = 0;
}

//timer for control LED-RED and DOT-LED
void setTimer3(int duration){
	timer3_counter = duration/TICK;
	timer3_flag = 0;
}

//timer for update led matrix
void setTimer4(int duration){
	timer4_counter = duration/TICK;
	timer4_flag = 0;
}

//timer for update buffer led matrix
void setTimer5(int duration){
	timer5_counter = duration/TICK;
	timer5_flag = 0;
}

void setTimer6(int duration){
	timer6_counter = duration/TICK;
	timer6_flag = 0;
}

void setTimer7(int duration){
	timer7_counter = duration/TICK;
	timer7_flag = 0;
}

void setTimer8(int duration){
	timer8_counter = duration/TICK;
	timer8_flag = 0;
}

void setTimer9(int duration){
	timer9_counter = duration/TICK;
	timer9_flag = 0;
}

void setTimer10(int duration){
	timer10_counter = duration/TICK;
	timer10_flag = 0;
}

void timerRun(){
	if(timer1_counter > 0) timer1_counter--;
	if(timer1_counter == 0){
		timer1_flag = 1;
	}

	if(timer2_counter > 0) timer2_counter--;
	if(timer2_counter == 0){
		timer2_flag = 1;
	}

	if(timer3_counter > 0) timer3_counter--;
	if(timer3_counter == 0){
		timer3_flag = 1;
	}

	if(timer4_counter > 0) timer4_counter--;
	if(timer4_counter == 0){
		timer4_flag = 1;
	}

	if(timer5_counter > 0) timer5_counter--;
	if(timer5_counter == 0){
		timer5_flag = 1;
	}

	if(timer6_counter > 0) timer6_counter--;
	if(timer6_counter == 0){
		timer6_flag = 1;
	}

	if(timer7_counter > 0) timer7_counter--;
	if(timer7_counter == 0){
		timer7_flag = 1;
	}

	if(timer8_counter > 0) timer8_counter--;
	if(timer8_counter == 0){
		timer8_flag = 1;
	}

	if(timer9_counter > 0) timer9_counter--;
	if(timer9_counter == 0){
		timer9_flag = 1;
	}

	if(timer10_counter > 0) timer10_counter--;
	if(timer10_counter == 0){
		timer10_flag = 1;
	}
}

