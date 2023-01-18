// ScriptStruct /Script/FortniteGame.MyTownWorkerSetBonusData
// Size: 0x50
struct FMyTownWorkerSetBonusData
{
	struct FGameplayTagContainer SetBonusTypeTag; // 0x0 (0x20)
	struct FText DisplayName; // 0x20 (0x18)
	int RequiredWorkersCount; // 0x38 (0x4)
	unsigned char unreflected_3c[0x4]; // 0x3c (0x4) 
	class UClass* SetBonusEffect; // 0x40 (0x8)
	int SelectionWeight; // 0x48 (0x4)
	unsigned char padding_4c[0x4]; // 0x4c (0x4)
};

