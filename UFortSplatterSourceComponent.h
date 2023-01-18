// Class /Script/FortniteGame.FortSplatterSourceComponent
// Size: 0xb8
class UFortSplatterSourceComponent : public UActorComponent
{
	struct TArray<struct TWeakObjectPtr<class AActor>> PreviousSources; // 0xa0 (0x10)
	struct TWeakObjectPtr<class AFortSplineGroundPath> FortSplineGroundPath; // 0xb0 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortSplatterSourceComponent.AddPreviousSource (Underlying native function: AddPreviousSource 0x8434e98)
	int AddPreviousSource(class AActor*& Actor); // (Final | Native | Public | BlueprintCallable)
};

