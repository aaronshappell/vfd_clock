#ifndef TWI_H
#define TWI_H

#include <inttypes.h>

#ifndef F_TWI
#define F_TWI 100000UL
#endif

void twi_init(void);
void twi_start(void);
void twi_stop(void);
void twi_write(uint8_t twi_data);
uint8_t twi_read_ack(void);
uint8_t twi_read_nack(void);
uint8_t twi_get_status(void);

#endif // TWI_H