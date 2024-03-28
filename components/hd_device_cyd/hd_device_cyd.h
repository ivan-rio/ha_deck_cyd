#pragma once

#include "esphome/core/component.h"
#include "esphome/core/helpers.h"
#include "esphome/core/log.h"
#include "LGFX.h"
#include "lvgl.h"
#include <XPT2046_Touchscreen.h>

// CYD Touch SPI pins
#define XPT2046_IRQ -1
#define XPT2046_MOSI 32
#define XPT2046_MISO 39
#define XPT2046_CLK 25
#define XPT2046_CS 33


namespace esphome {
namespace hd_device {

class HaDeckDevice : public Component
{
public:
    void setup() override;
    void loop() override;
    float get_setup_priority() const override;
    uint8_t get_brightness();
    void set_brightness(uint8_t value);
private:
    unsigned long time_ = 0;
    uint8_t brightness_ = 0;
};

}  // namespace hd_device
}  // namespace esphome