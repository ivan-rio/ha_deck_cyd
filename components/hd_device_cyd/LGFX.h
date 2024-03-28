#pragma once

#define LGFX_USE_V1
#include <LovyanGFX.h>

#define TFT_WIDTH 320
#define TFT_HEIGHT 240

namespace esphome {
namespace hd_device {

class LGFX : public lgfx::LGFX_Device
{
  lgfx::Panel_ILI9342     _panel_instance;
  lgfx::Bus_SPI        _bus_instance;
  lgfx::Light_PWM     _light_instance;

public:
  LGFX(void);
};

}  // namespace ha_deck
}  // namespace esphome
