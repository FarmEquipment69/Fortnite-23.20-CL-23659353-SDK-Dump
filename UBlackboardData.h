// Class /Script/AIModule.BlackboardData
// Size: 0x50
class UBlackboardData : public UDataAsset
{
	class UBlackboardData* Parent; // 0x30 (0x8)
	struct TArray<struct FBlackboardEntry> Keys; // 0x38 (0x10)
	unsigned char bHasSynchronizedKeys; // 0x48 (0x1)
	unsigned char padding_49[0x7]; // 0x49 (0x7)
};

