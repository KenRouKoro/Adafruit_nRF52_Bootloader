/*
 * The MIT License (MIT)
 *
 * Copyright (c) 2018 Ha Thach for Adafruit Industries
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#ifndef _FOX_52840_TINY
#define _FOX_52840_TINY

// Use 3V3
#define UICR_REGOUT0_VALUE UICR_REGOUT0_VOUT_3V3

#define _PINNUM(port, pin)    ((port)*32 + (pin))

/*------------------------------------------------------------------*/
/* LED
 *------------------------------------------------------------------*/
// The board has 2 leds, but changing the number here causes OTA issues.
#define LEDS_NUMBER           1
#define LED_PRIMARY_PIN       _PINNUM(0, 15)
#define LED_STATE_ON          1

#define NEOPIXELS_NUMBER      0

/*------------------------------------------------------------------*/
/* BUTTON
 *------------------------------------------------------------------*/
#define BUTTONS_NUMBER        2
#define BUTTON_1              _PINNUM(0, 18)
// Button 2 is from FoxSmol expansion board.
#define BUTTON_2              _PINNUM(0, 13)
#define BUTTON_PULL           NRF_GPIO_PIN_PULLUP

//--------------------------------------------------------------------+
// BLE OTA
//--------------------------------------------------------------------+
#define BLEDIS_MANUFACTURER   "FoxApplication"
#define BLEDIS_MODEL          "Fox 52840 Tiny"

//--------------------------------------------------------------------+
// USB
//--------------------------------------------------------------------+
#define USB_DESC_VID           0x2fe3
#define USB_DESC_UF2_PID       0x0032
#define USB_DESC_CDC_ONLY_PID  0x0032

//------------- UF2 -------------//
#define UF2_PRODUCT_NAME   "FoxApplication Fox 52840 Tiny V1"
#define UF2_VOLUME_LABEL   "FOX-BOOT"
#define UF2_BOARD_ID       "Fox-52840-Tiny-v1"
#define UF2_INDEX_URL      "https://www.foxapplication.com/"

#endif // _FOX_52840_TINY
