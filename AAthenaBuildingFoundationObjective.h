// Class /Script/FortniteGame.AthenaBuildingFoundationObjective
// Size: 0x13e0
class AAthenaBuildingFoundationObjective : public ABuildingFoundation
{
	unsigned char unreflected_12a0[0x20]; // 0x12a0 (0x20) 
	struct FSlateBrush MiniMapBrush; // 0x12c0 (0xc0)
	struct FGameplayTag FoundationTag; // 0x1380 (0x4)
	unsigned char unreflected_1384[0x4]; // 0x1384 (0x4) 
	struct FScalableFloat LowHealthPercent; // 0x1388 (0x28)
	struct TArray<class ABuildingActor*> SpawnedBuildingActors; // 0x13b0 (0x10)
	float CurrentHealth; // 0x13c0 (0x4)
	float MaxHealth; // 0x13c4 (0x4)
	unsigned char padding_13c8[0x18]; // 0x13c8 (0x18)

	/* Functions */

	// Function /Script/FortniteGame.AthenaBuildingFoundationObjective.OnLowHealthPercentReached (Has no native function)
	void OnLowHealthPercentReached(); // (Event | Protected | BlueprintEvent)
};

