#ifndef __DRIVER_H__
#define __DRIVER_H__

/*******************************************************************************
 *** COMMON TYPEDEF
 ******************************************************************************/
typedef struct
{
	void (*off_callback)(int i);
	void (*on_callback)(int i);
	int pin;
	int iot_ind;
	bool state;
} drv_input_t;

typedef struct
{
	int in;
	int out;
} drv_in_out_t;

#endif  // __DRIVER_H__