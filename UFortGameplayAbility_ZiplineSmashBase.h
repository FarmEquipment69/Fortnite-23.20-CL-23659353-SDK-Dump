// Class /Script/FortniteGame.FortGameplayAbility_ZiplineSmashBase
// Size: 0xb38
class UFortGameplayAbility_ZiplineSmashBase : public UFortGameplayAbility
{
	unsigned char unreflected_b38[0xb38]; 

	/* Functions */

	// Function /Script/FortniteGame.FortGameplayAbility_ZiplineSmashBase.EndAsyncBreakNearbyStructuresOverlap (Has no native function)
	void EndAsyncBreakNearbyStructuresOverlap(struct TArray<class AActor*>& OverlapActors); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteGame.FortGameplayAbility_ZiplineSmashBase.BeginAsyncBreakNearbyStructuresOverlap (Underlying native function: BeginAsyncBreakNearbyStructuresOverlap 0x813ecb4)
	void BeginAsyncBreakNearbyStructuresOverlap(struct FVector& BoxPos, struct FVector& BoxExtent, struct TArray<struct TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, class UClass*& ActorClassFilter, struct TArray<class AActor*>& ActorsToIgnore); // (Final | Native | Protected | HasOutParms | HasDefaults | BlueprintCallable)
};

