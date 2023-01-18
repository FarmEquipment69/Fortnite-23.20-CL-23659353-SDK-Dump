// Enum /Script/NeuralNetworkInference.ENeuralTensorType
enum class ENeuralTensorType : uint8_t
{
  Generic = 0,
  Input = 1,
  IntermediateNotInitialized = 2,
  IntermediateInitialized = 3,
  Output = 4,
  Weight = 5,
  ENeuralTensorType_MAX = 6
};