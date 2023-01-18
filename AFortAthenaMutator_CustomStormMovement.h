// Class /Script/FortniteGame.FortAthenaMutator_CustomStormMovement
// Size: 0x378
class AFortAthenaMutator_CustomStormMovement : public AFortAthenaMutator
{
	unsigned char unreflected_330[0x10]; // 0x330 (0x10) 
	struct FMulticastInlineDelegate OnSafeZoneRouteChanged; // 0x340 (0x10)
	struct TArray<struct FSafeZoneRoute> SafeZoneRoutes; // 0x350 (0x10)
	class UCurveFloat* PhaseProgressCurve; // 0x360 (0x8)
	unsigned char unreflected_368[0x4]; // 0x368 (0x4) 
	int SafeZoneRouteIndex; // 0x36c (0x4)
	unsigned char padding_370[0x8]; // 0x370 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortAthenaMutator_CustomStormMovement.OnRep_SafeZoneRouteIndex (Underlying native function: OnRep_SafeZoneRouteIndex 0x84a8e78)
	void OnRepSafeZoneRouteIndex(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortAthenaMutator_CustomStormMovement.GetSafeZoneRoute (Underlying native function: GetSafeZoneRoute 0x84a6574)
	struct FSafeZoneRoute GetSafeZoneRoute(struct FString& ContextString); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

