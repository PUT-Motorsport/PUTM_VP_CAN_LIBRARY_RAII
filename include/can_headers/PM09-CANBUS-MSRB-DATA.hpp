#pragma once

#include <cstdint>

namespace PUTM_CAN {

struct __attribute__((packed)) MSRBData {
  uint16_t damper_position_f;
  uint16_t damper_position_r;
  int16_t tensometer_force_f;
  int16_t tensometer_force_r;
};

}  // namespace PUTM_CAN