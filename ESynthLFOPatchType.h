// Enum /Script/Synthesis.ESynthLFOPatchType
enum class ESynthLFOPatchType : uint8_t
{
  PatchToNone = 0,
  PatchToGain = 1,
  PatchToOscFreq = 2,
  PatchToFilterFreq = 3,
  PatchToFilterQ = 4,
  PatchToOscPulseWidth = 5,
  PatchToOscPan = 6,
  PatchLFO1ToLFO2Frequency = 7,
  PatchLFO1ToLFO2Gain = 8,
  Count = 9,
  ESynthLFOPatchType_MAX = 10
};