// Enum /Script/HmxAudio.EPlayEmitterFindMethod
enum class EPlayEmitterFindMethod : uint8_t
{
  kDefault = 0,
  kSearch = 1,
  kSpecificEmitter = 2,
  kTaggedEmitterOnThisActor = 3,
  kTaggedEmitterOnSpecifiedActor = 4,
  kTaggedEmitterOnAnyActor = 5,
  kSpecificEmitterOnTaggedActor = 6,
  EPlayEmitterFindMethod_MAX = 7
};