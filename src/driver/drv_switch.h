#ifndef __DRV_SWITCH_H__
#define __DRV_SWITCH_H__

/*******************************************************************************
 *** INCLUDES
 ******************************************************************************/
#include "drv.h"

/*******************************************************************************
 *** DEFENITIONS
 ******************************************************************************/
#define  NUM_DRV_SW  (NUM_IOT_SW + NUM_IOT_SW_RELAY)

/*******************************************************************************
 *** EXTERN VARIABLES
 ******************************************************************************/
extern drv_input_t drv_sw[NUM_DRV_SW];

/*******************************************************************************
 *** PROTOTYPES
 ******************************************************************************/
void drv_switch_init(void);
void drv_switch_handler();

#endif  //__DRV_SWITCH_H__
