// Enum /Script/NetworkPrediction.ENetworkLOD
enum class ENetworkLOD : uint8_t
{
  Interpolated = 1,
  SimExtrapolate = 2,
  ForwardPredict = 4,
  All = 7,
  ENetworkLOD_MAX = 8
};