#pragma once

// #define DEBUG 1
#pragma GCC optimize ("O3")

#include <cstdint>

namespace command_processor
{
  void setup(void);
  void loop(void);

  bool addData(std::uint8_t value);
  void closeData(void);
  void prepareTxData(void);
};
