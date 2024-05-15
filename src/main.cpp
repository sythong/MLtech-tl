#include <Arduino.h>
#include "main.hpp"
#include "qpn.h"
#include "lcd.h"
#include "rotary.h"

#include "Controller.h"

Q_DEFINE_THIS_FILE;
/*Main application object */

static uint16_t process_event_value(uint8_t rotary_value, uint8_t back_sig);

static rotary_t rotary;


static uint8_t button = 0;;

void setup() {
  // put your setup code here, to run once:
  // timer_isr_init();
  // Serial.begin(9600);
  // GPIO_init();
  // lcd_init();
  // rotary_init_esp32();
  // proobject_init(&A0s);
}

void loop() {
//delay(100);
// uint16_t proevent;

// uint8_t rotarysig = 0;

// static uint32_t current_time = millis();
// static proobject_tick_event_t te;
//   // put your main code here, to run repeatedly:
// proobject_user_event_t ue;

// reset_rotary(&rotary);
// rotarysig = rotary_loop(&rotary);
// reset_rotary(&rotary);

// button = digitalRead(BUTTON_BACK_SIG);
// proevent = process_event_value(rotarysig,button);
// Serial.print(rotarysig);
// /*Make Event*/
// switch(proevent){
//   case START_SIGNAL_DEFINE:
//   {
//     ue.super.sig = START_SIG;
//   }
//     break;
//   case AUTO_MENU_BACK_SIGNAL_DEFINE:
//   {
//     ue.super.sig = TIMER_BACK_SIG;
//   }
//     break;
//   case CAUTION_SET_DEFINE:
//   {
//     ue.super.sig = CAUTION_SIG;
//   }
//     break;
//   case BACK_SIGNAL_DEFINE:
//   {
//     ue.super.sig = BACK_SIG;
//   } 
//     break;
//   case SETTING_SIGNAL_DEFINE:
//   {
//     //ue.super.sig = SETTING_SIG;
//     dispatch_temp_humi_state_sig(&ue);
//   }
//     break;
//   case CW_SIGNAL_DEFINE:
//   {
//     ue.super.sig = CW_SIG;
//   }
//     break;
//   case CCW_SIGNAL_DEFINE:
//   {
//     ue.super.sig = CCW_SIG;
//   }  
//     break;                                
// }

// proobject_event_dispatcher(&A0s,&ue.super);

// //4. dispatch the time tick event for every 200ms
//   if(millis() - current_time  >= TIME_TICK_CYCLE_DEFINE){
//     //100ms has passed
//     current_time = millis();
//     te.super.sig = TIME_TICK_SIG;
//     if(++te.ss > 10) te.ss = 1;
//     proobject_event_dispatcher(&A0s,&te.super);
//   }
//   rotarysig = 0;
//   button = 0;
}

Q_NORETURN Q_onAssert(char_t const Q_ROM *const module, int_t const location)
{
  Serial.println("Assertion failure!!");
  Serial.println((String)module);
  Serial.println(location);
  while (1);
}