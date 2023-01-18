// Class /Script/FortniteGame.FortGameplayCueNotifyLoop_PhysicsObjectRolling
// Size: 0xac0
class AFortGameplayCueNotifyLoop_PhysicsObjectRolling : public AFortGameplayCueNotify_Loop
{
	class UFortLayeredAudioComponent* LayeredAudioComp; // 0x960 (0x8)
	float MaxRollSpeed; // 0x968 (0x4)
	unsigned char unreflected_96c[0x4]; // 0x96c (0x4) 
	class UFortPhysicsObjectComponent* PhysicsObject; // 0x970 (0x8)
	struct FHitResult CachedHitResult; // 0x978 (0xe0)
	struct TArray<struct FWaterFXData> WaterFX; // 0xa58 (0x10)
	unsigned char padding_a68[0x58]; // 0xa68 (0x58)

	/* Functions */

	// Function /Script/FortniteGame.FortGameplayCueNotifyLoop_PhysicsObjectRolling.HandlePontoonExitedWaterBody (Underlying native function: HandlePontoonExitedWaterBody 0x81411c8)
	void HandlePontoonExitedWaterBody(struct FSphericalPontoon& Pontoon); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteGame.FortGameplayCueNotifyLoop_PhysicsObjectRolling.HandlePontoonEnteredWaterBody (Underlying native function: HandlePontoonEnteredWaterBody 0x8141104)
	void HandlePontoonEnteredWaterBody(struct FSphericalPontoon& Pontoon); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteGame.FortGameplayCueNotifyLoop_PhysicsObjectRolling.GetHitLocation (Underlying native function: GetHitLocation 0x8140960)
	struct FVector GetHitLocation(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)
};

