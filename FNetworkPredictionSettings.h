// ScriptStruct /Script/NetworkPrediction.NetworkPredictionSettings
// Size: 0x28
struct FNetworkPredictionSettings
{
	enum ENetworkPredictionTickingPolicy PreferredTickingPolicy; // 0x0 (0x1)
	unsigned char unreflected_1[0x7]; // 0x1 (0x7) 
	class UClass* ReplicatedManagerClassOverride; // 0x8 (0x8)
	int FixedTickFrameRate; // 0x10 (0x4)
	bool bForceEngineFixTickForcePhysics; // 0x14 (0x1)
	enum ENetworkLOD SimulatedProxyNetworkLOD; // 0x15 (0x1)
	unsigned char unreflected_16[0x2]; // 0x16 (0x2) 
	int FixedTickInterpolationBufferedMS; // 0x18 (0x4)
	int IndependentTickInterpolationBufferedMS; // 0x1c (0x4)
	int IndependentTickInterpolationMaxBufferedMS; // 0x20 (0x4)
	unsigned char padding_24[0x4]; // 0x24 (0x4)
};

