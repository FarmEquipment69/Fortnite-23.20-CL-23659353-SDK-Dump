// Enum /Script/HmxAudio.ESyncEmitterFindMethod
enum class ESyncEmitterFindMethod : uint8_t
{
  kDefault = 0,
  kSearch = 1,
  kSpecificEmitter = 2,
  kTaggedEmitterOnThisActor = 3,
  kTaggedEmitterOnSpecifiedActor = 4,
  kTaggedEmitterOnAnyActor = 5,
  kSpecificEmittorOnTaggedActor = 6,
  kAsPlay = 7,
  ESyncEmitterFindMethod_MAX = 8
};