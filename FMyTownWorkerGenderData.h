// ScriptStruct /Script/FortniteGame.MyTownWorkerGenderData
// Size: 0x18
struct FMyTownWorkerGenderData
{
	struct TEnumAsByte<EFortCustomGender> Gender; // 0x0 (0x1)
	unsigned char unreflected_1[0x3]; // 0x1 (0x3) 
	int SelectionWeight; // 0x4 (0x4)
	struct TArray<struct FMyTownWorkerPortraitData> PotraitData; // 0x8 (0x10)
};

