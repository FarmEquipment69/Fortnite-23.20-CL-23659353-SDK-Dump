// Enum /Script/NetCore.EFastArraySerializerDeltaFlags
enum class EFastArraySerializerDeltaFlags : uint8_t
{
  None = 0,
  HasBeenSerialized = 1,
  HasDeltaBeenRequested = 2,
  IsUsingDeltaSerialization = 4,
  EFastArraySerializerDeltaFlags_MAX = 5
};