// Class /Script/FortniteGame.FortPlacementActorTagTest
// Size: 0x68
class UFortPlacementActorTagTest : public UObject
{
	struct FGameplayTagContainer TagsToApplyOnSuccess; // 0x28 (0x20)
	struct FGameplayTagContainer TagsToApplyOnFailure; // 0x48 (0x20)

	/* Functions */

	// Function /Script/FortniteGame.FortPlacementActorTagTest.ShouldApplyTagsToPlacementActor (Underlying native function: ShouldApplyTagsToPlacementActor 0x8b6737c)
	bool ShouldApplyTagsToPlacementActor(class AFortPlacementActor*& FocusPlacementActor, struct FVector& AveragePlacementActorLocation); // (Native | Event | Public | HasOutParms | HasDefaults | BlueprintEvent | Const)

	// Function /Script/FortniteGame.FortPlacementActorTagTest.LineTraceByChannel (Underlying native function: LineTraceByChannel 0x8b667ec)
	bool LineTraceByChannel(class AFortPlacementActor*& PlacementActor, struct FVector& Start, struct FVector& End, struct TEnumAsByte<ETraceTypeQuery>& TraceChannel, bool& bTraceComplex, struct TArray<class AActor*>& ActorsToIgnore, struct FHitResult& OutHit, bool& bIgnoreSelf); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)
};

