// ScriptStruct /Script/FortniteGame.SafeZoneRoute
// Size: 0x118
struct FSafeZoneRoute
{
	struct FScalableFloat bIsEnabled; // 0x0 (0x28)
	struct FScalableFloat bUsePOIStartLocation; // 0x28 (0x28)
	struct FScalableFloat bUsePOINameOverride; // 0x50 (0x28)
	struct FText POINameOverride; // 0x78 (0x18)
	struct FScalableFloat StartRadius; // 0x90 (0x28)
	struct FScalableFloat EndRadius; // 0xb8 (0x28)
	struct FGameplayTag StartPOITag; // 0xe0 (0x4)
	struct FGameplayTag EndPOITag; // 0xe4 (0x4)
	struct FVector StartLocation; // 0xe8 (0x18)
	struct FVector EndLocation; // 0x100 (0x18)
};

