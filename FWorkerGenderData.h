// ScriptStruct /Script/FortniteGame.WorkerGenderData
// Size: 0x18
struct FWorkerGenderData
{
	struct TEnumAsByte<EFortCustomGender> Gender; // 0x0 (0x1)
	unsigned char unreflected_1[0x7]; // 0x1 (0x7) 
	struct TArray<struct FWorkerPortraitData> PotraitData; // 0x8 (0x10)
};

