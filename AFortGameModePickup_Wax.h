// Class /Script/FortniteGame.FortGameModePickup_Wax
// Size: 0xa50
class AFortGameModePickup_Wax : public AFortGameModePickup
{
	bool bIsFirstGeneration; // 0x7a0 (0x1)
	unsigned char unreflected_7a1[0x3]; // 0x7a1 (0x3) 
	int AmountOfTokens; // 0x7a4 (0x4)
	unsigned char unreflected_7a8[0x8]; // 0x7a8 (0x8) 
	struct FScalableFloat HeightAboveTerrianDropPickupAt; // 0x7b0 (0x28)
	struct FScalableFloat HeightAboveTerrainPickupLandAt; // 0x7d8 (0x28)
	struct FScalableFloat RandomTossAngleTowardsCenter; // 0x800 (0x28)
	struct FScalableFloat TimeUntilDespawnOutsideStorm; // 0x828 (0x28)
	struct FScalableFloat TimeUntilDespawnInsideStorm; // 0x850 (0x28)
	struct FScalableFloat DrawOnCompassDistance; // 0x878 (0x28)
	struct FSlateBrush DrawOnCompassBrush; // 0x8a0 (0xc0)
	struct FSlateBrush DrawOnMapBrush; // 0x960 (0xc0)
	struct FText UseInteractTextSingleCoin; // 0xa20 (0x18)
	struct FText UseInteractTextMultipleCoins; // 0xa38 (0x18)

	/* Functions */

	// Function /Script/FortniteGame.FortGameModePickup_Wax.OnLocalPickedUp (Has no native function)
	void OnLocalPickedUp(); // (Event | Public | BlueprintEvent)
};

