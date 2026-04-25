#pragma once

#include <Arduino.h>
#include <helpers/ESP32Board.h>

class WaveshareESP32C6LCDBoard : public ESP32Board {
public:
  void begin() {
    ESP32Board::begin();
  }

  const char* getManufacturerName() const override {
    return "Waveshare ESP32-C6-LCD-1.47";
  }
};


