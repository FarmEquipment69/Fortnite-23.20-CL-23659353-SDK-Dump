// ScriptStruct /Script/FortniteGame.TaggedPOI
// Size: 0x98
struct FTaggedPOI
{
	struct FGameplayTag POITag; // 0x0 (0x4)
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	struct FScalableFloat Enabled; // 0x8 (0x28)
	struct FVector SpawnOffset; // 0x30 (0x18)
	struct FScalableFloat SelectFromAvailableShrinkLocation; // 0x48 (0x28)
	struct TArray<struct FVector2D> AvailableShrinkLocations; // 0x70 (0x10)
	struct FText POIOverrideName; // 0x80 (0x18)
};

