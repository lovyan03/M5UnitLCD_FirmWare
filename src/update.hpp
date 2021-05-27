
#include <cstdint>

namespace update
{
  void initCRCtable(void);
  bool begin(std::size_t totalsize);
  bool writeBuffer(std::size_t sector);
  bool addData(std::uint8_t data);
  void setBlockCRC32(std::uint32_t crc32);
  bool checkCRC32(void);
  bool end(void);
};