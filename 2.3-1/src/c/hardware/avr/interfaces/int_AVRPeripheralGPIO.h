//This file defines constants corresponding to gpios.
//
// Authors
//     Siddhesh Wani
//

#ifndef __INT_AVRPERIPHERALGPIO_H__
#define __INT_AVRPERIPHERALGPIO_H__

#include <avr/io.h>
#include "AVRPeripheralGPIO.h"

#ifdef  __cplusplus
extern "C" {
#endif

#define d0d0d0AVRDigitalSetupu80(in1,in2,in3) u8AVRDigitalSetups((uint8) in1,\
                                                  (uint8) in2, (uint8) in3);

#define d0d0AVRDigitalOutu80(in1,in2) u8AVRDigitalIns((uint8) in1,\
                                                  (uint8) in2);

#define d0d0d0AVRDigitalOutu80(in1,in2,in3) u8AVRDigitalOuts((uint8) in1,\
                                                  (uint8) in2, (uint8) in3);

#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif /* !__AVRPERIPHERALGPIO_H__ */
