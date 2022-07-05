#include <am.h>
#include <nemu.h>
#include <stdio.h>

void __am_timer_init() {
}

void __am_timer_uptime(AM_TIMER_UPTIME_T *uptime) {
  printf("__am_timer_uptime\n");
  uptime->us = inl(RTC_ADDR + 4);
  printf("us:%d\n", uptime->us);
  
  // uptime->us = paddr_read(RTC_ADDR, 4);
}

void __am_timer_rtc(AM_TIMER_RTC_T *rtc) {
  rtc->second = 0;
  rtc->minute = 0;
  rtc->hour   = 0;
  rtc->day    = 0;
  rtc->month  = 0;
  rtc->year   = 1900;
}
