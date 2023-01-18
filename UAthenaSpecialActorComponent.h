// Class /Script/FortniteGame.AthenaSpecialActorComponent
// Size: 0x480
class UAthenaSpecialActorComponent : public UActorComponent
{
	struct FGameplayTag SpecialActorTag; // 0xa0 (0x4)
	unsigned char unreflected_a4[0xc]; // 0xa4 (0xc) 
	struct FSlateBrush SpecialActorMinimapIconBrush; // 0xb0 (0xc0)
	struct FVector2D SpecialActorMinimapIconScale; // 0x170 (0x10)
	struct FSlateBrush SpecialActorFullScreenMapIconBrush; // 0x180 (0xc0)
	struct FVector2D SpecialActorFullScreenMapIconScale; // 0x240 (0x10)
	struct FSlateBrush SpecialActorCompassIconBrush; // 0x250 (0xc0)
	struct FVector2D SpecialActorCompassIconScale; // 0x310 (0x10)
	bool bUseCompassIcon; // 0x320 (0x1)
	bool bDrawCompassDistanceText; // 0x321 (0x1)
	unsigned char unreflected_322[0x2]; // 0x322 (0x2) 
	struct FElevationArrowData ElevationArrowData; // 0x324 (0x1c)
	unsigned char RenderOnMapDuringPhases; // 0x340 (0x1)
	unsigned char unreflected_341[0x7]; // 0x341 (0x7) 
	struct FScalableFloat RenderDistance; // 0x348 (0x28)
	struct FGameplayTagContainer RenderTags; // 0x370 (0x20)
	struct FGameplayTag SeasonItemTag; // 0x390 (0x4)
	unsigned char unreflected_394[0xc]; // 0x394 (0xc) 
	struct FSlateBrush SeasonItemInteractedBrush; // 0x3a0 (0xc0)
	struct FString CalendarEventName; // 0x460 (0x10)
	struct FName SpecialActorID; // 0x470 (0x4)
	unsigned char padding_474[0xc]; // 0x474 (0xc)

	/* Functions */

	// Function /Script/FortniteGame.AthenaSpecialActorComponent.SetSeasonItemTag (Underlying native function: SetSeasonItemTag 0x85476e8)
	void SetSeasonItemTag(struct FGameplayTag& InSeasonItemTag); // (Final | Native | Public | HasOutParms | BlueprintCallable)
};

