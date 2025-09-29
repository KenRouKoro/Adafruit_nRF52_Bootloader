/*
 * The MIT License (MIT)
 *
 * Copyright (c) 2020 Pierre Constantineau
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

#ifndef _FOX_SMOL_52833
#define _FOX_SMOL_52833

#define _PINNUM(port, pin)    ((port)*32 + (pin))

/*------------------------------------------------------------------*/
/* LED
 *------------------------------------------------------------------*/
#define LEDS_NUMBER           1
#define LED_PRIMARY_PIN       _PINNUM(0, 31)
#define LED_STATE_ON          0

#define NEOPIXELS_NUMBER      0

/*------------------------------------------------------------------*/
/* BUTTON
 *------------------------------------------------------------------*/
#define BUTTONS_NUMBER    2                 // none connected at all
#define BUTTON_1          _PINNUM(0, 18)    // unusable: RESET
#define BUTTON_2          _PINNUM(0, 17)     // SW1 ON Board
#define BUTTON_PULL       NRF_GPIO_PIN_PULLUP

//--------------------------------------------------------------------+
// BLE OTA
//--------------------------------------------------------------------+
#define BLEDIS_MANUFACTURER  "FoxApplication"
#define BLEDIS_MODEL         "Fox Smol 52833"

//--------------------------------------------------------------------+
// USB PID from openmoko:
// PR https://github.com/openmoko/openmoko-usb-oui/pull/34
//--------------------------------------------------------------------+
#define USB_DESC_VID           0x2fe3
#define USB_DESC_UF2_PID       0x0033
#define USB_DESC_CDC_ONLY_PID  0x0033

#define UF2_PRODUCT_NAME  "FoxApplication FoxSmol 52833 V1"
#define UF2_VOLUME_LABEL  "FOX-BOOT"
#define UF2_BOARD_ID      "Fox-Smol-52833-v1"
#define UF2_INDEX_URL     "https://www.foxapplication.com/"

#endif // _FOX_SMOL_52833
