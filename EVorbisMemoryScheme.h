// Enum /Script/HmxAudio.EVorbisMemoryScheme
enum class EVorbisMemoryScheme : uint8_t
{
  None = 0,
  Platform = 1,
  PrivateAllocator = 2,
  PerStreamStack = 3,
  EVorbisMemoryScheme_MAX = 4
};