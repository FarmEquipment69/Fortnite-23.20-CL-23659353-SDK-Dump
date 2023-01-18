// Class /Script/FortniteGame.FortAthenaMutatorUtilities
// Size: 0x28
class UFortAthenaMutatorUtilities : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/FortniteGame.FortAthenaMutatorUtilities.SphereTraceForParachuteLandingGeometry (Underlying native function: SphereTraceForParachuteLandingGeometry 0x8460fdc)
	static bool SphereTraceForParachuteLandingGeometry(struct FHitResult& OutHit, class UObject*& WorldContextObject, struct FVector& InLocation, float& TraceStartZ, float& TraceEndZ, float& TraceSphereRadius); // (Final | 0x00000002 | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaMutatorUtilities.SetPlayerPortraitInMaterial (Underlying native function: SetPlayerPortraitInMaterial 0x8460c64)
	static void SetPlayerPortraitInMaterial(class AFortPlayerStateAthena*& Player, class UMaterialInstanceDynamic*& Material, struct FName& MaterialParam); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaMutatorUtilities.RemoveDataRegistryOptionsForContextObject (Underlying native function: RemoveDataRegistryOptionsForContextObject 0x846043c)
	static void RemoveDataRegistryOptionsForContextObject(class UObject*& WorldContextObject); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaMutatorUtilities.ApplyActorOptionsComponentToDataRegistry (Underlying native function: ApplyActorOptionsComponentToDataRegistry 0x845cddc)
	static void ApplyActorOptionsComponentToDataRegistry(class UObject*& WorldContextObject, class UFortActorOptionsComponent*& FortActorOptionsComponent); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaMutatorUtilities.AdjustRespawnLocationForGroundHeight (Underlying native function: AdjustRespawnLocationForGroundHeight 0x845cccc)
	static void AdjustRespawnLocationForGroundHeight(struct FVector& InOutRespawnLocation, float& MinRespawnHeightAboveGround, class AActor*& WorldContextActor); // (Final | 0x00000002 | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)
};

