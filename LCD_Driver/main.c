/*
 * main.c
 *
 *  Created on: Aug 27, 2022
 *      Author: abdelrahman
 */

#include "LCD_interface.h"
#include <util/delay.h>
 int main()
 {
	 LCD_init();
	 while(1)
	 {
		 LCD_CMD(LCD_SET_CURSOR_1LINE);
		 LCD_Data('A');
		 LCD_Data('b');
		 LCD_Data('d');
		 LCD_Data('o');
		 LCD_CMD(LCD_SET_CURSOR_2LINE);
		 LCD_Data('T');
		 LCD_Data('a');
		 LCD_Data('r');
		 LCD_Data('e');
		 LCD_Data('k');
	 }
 }

