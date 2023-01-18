// ScriptStruct /Script/FortniteGame.FortAthenaLoadoutData
// Size: 0x30
struct FFortAthenaLoadoutData
{
	enum EAthenaCustomizationCategory category; // 0x0 (0x1)
	unsigned char unreflected_1[0x7]; // 0x1 (0x7) 
	struct FString ItemToSlot; // 0x8 (0x10)
	int SlotIndex; // 0x18 (0x4)
	unsigned char unreflected_1c[0x4]; // 0x1c (0x4) 
	struct TArray<struct FMcpVariantReader> VariantUpdates; // 0x20 (0x10)
};

