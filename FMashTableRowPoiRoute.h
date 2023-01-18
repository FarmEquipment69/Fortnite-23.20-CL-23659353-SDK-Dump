// ScriptStruct /Script/FortniteGame.MashTableRowPoiRoute
// Size: 0x48
struct FMashTableRowPoiRoute : FTableRowBase
{
	struct FName Name; // 0x8 (0x4)
	unsigned char unreflected_c[0x4]; // 0xc (0x4) 
	struct FScalableFloat Weight; // 0x10 (0x28)
	struct TArray<struct FGameplayTag> PoiTags; // 0x38 (0x10)
};

