/*
 @autor:       Alexandr Haidamaka
 @file:        config.c
 @description: config driver functionality
 */

/*******************************************************************************
 *** INCLUDES
 ******************************************************************************/
#include "main.h"

/*******************************************************************************
 *** DEFENITIONS
 ******************************************************************************/
#if (NUM_BT_RELAY_O > 0)
in_out_t bt_relay_pin_map[NUM_BT_RELAY_O] =
	{
		{ .in = D1, .out = D5 },
		{ .in = D2, .out = D6 } };
#endif

/*******************************************************************************
 *** VARIABLES
 ******************************************************************************/