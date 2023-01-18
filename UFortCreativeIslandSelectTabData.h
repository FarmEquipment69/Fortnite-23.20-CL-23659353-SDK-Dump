// Class /Script/FortniteUI.FortCreativeIslandSelectTabData
// Size: 0x80
class UFortCreativeIslandSelectTabData : public UPrimaryDataAsset
{
	enum EFortCreativeIslandSelectTabType TabType; // 0x30 (0x1)
	unsigned char unreflected_31[0x7]; // 0x31 (0x7) 
	struct FText Title; // 0x38 (0x18)
	struct FText EmptyTabDescription; // 0x50 (0x18)
	int IndexOverride; // 0x68 (0x4)
	unsigned char unreflected_6c[0x4]; // 0x6c (0x4) 
	class UClass* WidgetClass; // 0x70 (0x8)
	class UClass* DataProvider; // 0x78 (0x8)
};

