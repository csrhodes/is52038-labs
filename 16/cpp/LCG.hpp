#ifndef LCG_HPP
#define LCG_HPP

#include <cstdint>

class LCG {
public:
  LCG(uint32_t, uint32_t, uint32_t, uint32_t);
  uint32_t next();
  void seed(uint32_t);
};

#endif
