// @File		MAIN.C		 		
// @Author		JOSIMAR PEREIRA LEITE
// @country		BRAZIL
// @Date		11/05/23
//
//
// Copyright (C) 2023 JOSIMAR PEREIRA LEITE
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
#include <REG51.H>               
#include <stdio.h>
#include "max7219.h"

void main (void) 
{
	P0 = 0x00;
	P1 = 0x00;
	P2 = 0x00;

	MAX7219_init();

	MAX7219_cmd(1, MAX7219_font[0]);
	MAX7219_cmd(2, MAX7219_font[1]);
	MAX7219_cmd(3, MAX7219_font[2]);
	MAX7219_cmd(4, MAX7219_font[3]);

	while(1)
	{
		
	}
	
}



