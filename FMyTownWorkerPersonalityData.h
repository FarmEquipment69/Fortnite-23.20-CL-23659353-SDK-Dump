// ScriptStruct /Script/FortniteGame.MyTownWorkerPersonalityData
// Size: 0x50
struct FMyTownWorkerPersonalityData
{
	struct FGameplayTagContainer PersonalityTypeTag; // 0x0 (0x20)
	struct FText PersonalityName; // 0x20 (0x18)
	int SelectionWeight; // 0x38 (0x4)
	unsigned char unreflected_3c[0x4]; // 0x3c (0x4) 
	struct TArray<struct FMyTownWorkerGenderData> GenderData; // 0x40 (0x10)
};

