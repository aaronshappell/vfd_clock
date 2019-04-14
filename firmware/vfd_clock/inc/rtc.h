#ifndef RTC_H
#define RTC_H

#include <inttypes.h>

// DS1307 RTC Register Addresses
#define RTC_READ	0xD1
#define RTC_WRITE	0xD0
#define RTC_SEC		0x00
#define RTC_MIN		0x01
#define RTC_HOUR	0x02
#define RTC_DAY		0x03
#define RTC_DATE	0x04
#define RTC_MONTH	0x05
#define RTC_YEAR	0x06
#define RTC_CONTROL	0x07

typedef struct{
	uint8_t sec;
	uint8_t min;
	uint8_t hour;
	uint8_t day;
	uint8_t date;
	uint8_t month;
	uint8_t year;
} rtc_t;

void rtc_init(rtc_t* rtc);
void rtc_set(rtc_t* rtc);
void rtc_get(rtc_t* rtc);

#endif // RTC_H