// ScriptStruct /Script/FortniteGame.WorkerPersonalityData
// Size: 0x38
struct FWorkerPersonalityData
{
	struct FGameplayTag PersonalityTypeTag; // 0x0 (0x4)
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	struct FText PersonalityName; // 0x8 (0x18)
	int SelectionWeight; // 0x20 (0x4)
	unsigned char unreflected_24[0x4]; // 0x24 (0x4) 
	struct TArray<struct FWorkerGenderData> GenderData; // 0x28 (0x10)
};

