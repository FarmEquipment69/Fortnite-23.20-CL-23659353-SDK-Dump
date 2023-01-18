// ScriptStruct /Script/FortniteGame.FortCosmeticLockerSlotInformation
// Size: 0xc
struct FFortCosmeticLockerSlotInformation
{
	enum EAthenaCustomizationCategory CustomizationCategory; // 0x0 (0x1)
	unsigned char unreflected_1[0x3]; // 0x1 (0x3) 
	int NumSlotsOfCategory; // 0x4 (0x4)
	bool bCanBeBlank; // 0x8 (0x1)
	bool bMustBeUniqueInArray; // 0x9 (0x1)
	bool bHasDynamicSlotCount; // 0xa (0x1)
	unsigned char padding_b[0x1]; // 0xb (0x1)
};

