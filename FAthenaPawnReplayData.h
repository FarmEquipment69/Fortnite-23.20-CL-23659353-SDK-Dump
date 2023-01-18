// ScriptStruct /Script/FortniteGame.AthenaPawnReplayData
// Size: 0x30
struct FAthenaPawnReplayData
{
	float HealthRatio; // 0x0 (0x4)
	float ShieldRatio; // 0x4 (0x4)
	struct TArray<unsigned char> CipherText; // 0x8 (0x10)
	class UWorld* World; // 0x18 (0x8)
	unsigned char padding_20[0x10]; // 0x20 (0x10)
};

