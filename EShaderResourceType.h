// Enum /Script/ComputeFramework.EShaderResourceType
enum class EShaderResourceType : uint8_t
{
  None = 0,
  Texture1D = 1,
  Texture2D = 2,
  Texture3D = 3,
  TextureCube = 4,
  Buffer = 5,
  StructuredBuffer = 6,
  ByteAddressBuffer = 7,
  EShaderResourceType_MAX = 8
};