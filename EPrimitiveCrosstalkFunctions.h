// Enum /Script/FortniteGame.EPrimitiveCrosstalkFunctions
enum class EPrimitiveCrosstalkFunctions : uint8_t
{
  SendTagAsPayload = 0,
  SendTaggedObjectPayload = 1,
  SendTaggedStringPayload = 2,
  SendTaggedIntPayload = 3,
  GetTaggedObjectPayload = 4,
  GetTaggedStringPayload = 5,
  GetTaggedIntPayload = 6,
  BindNoParamEventToTaggedDelegate = 7,
  UnbindNoParamEventFromTaggedDelegate = 8,
  UnbindObjectCallbacksFromAllTaggedDelegates = 9,
  EPrimitiveCrosstalkFunctions_MAX = 10
};