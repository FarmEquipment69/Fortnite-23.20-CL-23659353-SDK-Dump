// Class /Script/FortniteGame.FortAthena_WaxToken
// Size: 0x368
class AFortAthena_WaxToken : public AActor
{
	class UStaticMeshComponent* TokenMesh; // 0x288 (0x8)
	class USplineComponent* EntrySpline; // 0x290 (0x8)
	class USplineComponent* ExitSpline; // 0x298 (0x8)
	class USplineComponent* ReusedSpline; // 0x2a0 (0x8)
	struct TMap<enum EWaxTokenState, struct FScalableFloat> TravelTimeAtState; // 0x2a8 (0x50)
	struct FScalableFloat TotalTravelTime; // 0x2f8 (0x28)
	struct FScalableFloat DistanceStopInterpolationAt; // 0x320 (0x28)
	class AActor* Target; // 0x348 (0x8)
	int PayloadCount; // 0x350 (0x4)
	enum EWaxTokenState CurrentState; // 0x354 (0x1)
	unsigned char unreflected_355[0x3]; // 0x355 (0x3) 
	float TimeInState; // 0x358 (0x4)
	float InterpolationSpeed; // 0x35c (0x4)
	unsigned char padding_360[0x8]; // 0x360 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortAthena_WaxToken.OnUpdateToNewState (Has no native function)
	void OnUpdateToNewState(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthena_WaxToken.OnStart (Has no native function)
	void OnStart(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthena_WaxToken.OnReachedTarget (Has no native function)
	void OnReachedTarget(); // (Event | Protected | BlueprintEvent)
};

