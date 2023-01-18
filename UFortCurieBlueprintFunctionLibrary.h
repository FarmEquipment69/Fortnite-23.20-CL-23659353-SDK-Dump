// Class /Script/FortniteGame.FortCurieBlueprintFunctionLibrary
// Size: 0x28
class UFortCurieBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/FortniteGame.FortCurieBlueprintFunctionLibrary.RemoveActorFromCurieIgnoreTransformChanges (Underlying native function: RemoveActorFromCurieIgnoreTransformChanges 0x71a663c)
	static void RemoveActorFromCurieIgnoreTransformChanges(class AActor*& Actor); // (Final | 0x00000002 | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCurieBlueprintFunctionLibrary.IsCurieEnabled (Underlying native function: IsCurieEnabled 0x87d1640)
	static bool IsCurieEnabled(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortCurieBlueprintFunctionLibrary.IsCurieActiveForActor (Underlying native function: IsCurieActiveForActor 0x87d1580)
	static bool IsCurieActiveForActor(class AActor*& Actor); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortCurieBlueprintFunctionLibrary.IsCurieActive (Underlying native function: IsCurieActive 0x87d14fc)
	static bool IsCurieActive(class UObject*& WorldContextObject); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortCurieBlueprintFunctionLibrary.IgniteGrassInBounds (Underlying native function: IgniteGrassInBounds 0x87d126c)
	static void IgniteGrassInBounds(class UObject*& WorldContextObject, class AActor*& Instigator, class AActor*& EffectCauser, struct FBox& IgnitionBounds, int& PropagationFuel); // (Final | BlueprintAuthorityOnly | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortCurieBlueprintFunctionLibrary.HasCurieStateAttached (Underlying native function: HasCurieStateAttached 0x87d1128)
	static bool HasCurieStateAttached(class AActor*& Actor, struct FGameplayTag& StateIdentifier); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortCurieBlueprintFunctionLibrary.HasCurieElementAttached (Underlying native function: HasCurieElementAttached 0x87d102c)
	static bool HasCurieElementAttached(class AActor*& Actor, struct FGameplayTag& ElementIdentifier); // (Final | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortCurieBlueprintFunctionLibrary.GetLastElectricityPropagationParent (Underlying native function: GetLastElectricityPropagationParent 0x87d0678)
	static class AActor* GetLastElectricityPropagationParent(class AActor*& TargetActor); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCurieBlueprintFunctionLibrary.GetInstigatorInfoFromInteractParams (Underlying native function: GetInstigatorInfoFromInteractParams 0x87d0524)
	static void GetInstigatorInfoFromInteractParams(struct FCurieInteractParamsHandle& InteractParamsHandle, class AActor*& Instigator, class AActor*& EffectCauser); // (Final | BlueprintAuthorityOnly | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortCurieBlueprintFunctionLibrary.GetInstigatorInfoForAttachedElement (Underlying native function: GetInstigatorInfoForAttachedElement 0x87d034c)
	static void GetInstigatorInfoForAttachedElement(class UObject*& WorldContextObject, struct FCurieContainerHandle& CurieContainerHandle, struct FGameplayTag& ElementTag, class AActor*& Instigator, class AActor*& EffectCauser); // (Final | BlueprintAuthorityOnly | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortCurieBlueprintFunctionLibrary.GetCurieManager (Underlying native function: GetCurieManager 0x87d01fc)
	static class UFortCurieManager* GetCurieManager(class UObject*& WorldContextObject); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortCurieBlueprintFunctionLibrary.GetAttachedCurieStates (Underlying native function: GetAttachedCurieStates 0x87cf9bc)
	static struct FGameplayTagContainer GetAttachedCurieStates(class AActor*& Actor); // (Final | 0x00000002 | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortCurieBlueprintFunctionLibrary.GetAttachedCurieElements (Underlying native function: GetAttachedCurieElements 0x87cf8c0)
	static struct FGameplayTagContainer GetAttachedCurieElements(class AActor*& Actor); // (Final | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortCurieBlueprintFunctionLibrary.ExtinguishGrassInBounds (Underlying native function: ExtinguishGrassInBounds 0x87cf71c)
	static void ExtinguishGrassInBounds(class UObject*& WorldContextObject, struct FBox& IgnitionBounds); // (Final | BlueprintAuthorityOnly | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortCurieBlueprintFunctionLibrary.ExecuteWaterApplication (Underlying native function: ExecuteWaterApplication 0x87cf4ec)
	static void ExecuteWaterApplication(class UObject*& WorldContextObject, class AActor*& Instigator, class AActor*& EffectCauser, class AActor*& Target, float& Magnitude, struct FHitResult& HitResult, float& LandscapeExtinguishRadius); // (Final | BlueprintAuthorityOnly | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortCurieBlueprintFunctionLibrary.ExecuteIceApplication (Underlying native function: ExecuteIceApplication 0x87cf2c4)
	static void ExecuteIceApplication(class UObject*& WorldContextObject, class AActor*& Instigator, class AActor*& EffectCauser, class AActor*& Target, float& Magnitude, struct FHitResult& HitResult, int& PropagationDepthLimit); // (Final | BlueprintAuthorityOnly | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortCurieBlueprintFunctionLibrary.ExecuteFireApplication (Underlying native function: ExecuteFireApplication 0x87cf044)
	static void ExecuteFireApplication(class UObject*& WorldContextObject, class AActor*& Instigator, class AActor*& EffectCauser, class AActor*& Target, float& Magnitude, struct FHitResult& HitResult, int& PropagationFuel, float& LandscapeIgnitionRadius); // (Final | BlueprintAuthorityOnly | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortCurieBlueprintFunctionLibrary.ExecuteEndWaterInteract (Underlying native function: ExecuteEndWaterInteract 0x87cef24)
	static bool ExecuteEndWaterInteract(class UObject*& WorldContextObject, class AActor*& Target, struct FCurieInteractHandle& InteractHandle); // (Final | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCurieBlueprintFunctionLibrary.ExecuteEndFireInteract (Underlying native function: ExecuteEndFireInteract 0x87cef24)
	static bool ExecuteEndFireInteract(class UObject*& WorldContextObject, class AActor*& Target, struct FCurieInteractHandle& InteractHandle); // (Final | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCurieBlueprintFunctionLibrary.ExecuteBeginWaterInteract (Underlying native function: ExecuteBeginWaterInteract 0x87cecdc)
	static struct FCurieInteractHandle ExecuteBeginWaterInteract(class UObject*& WorldContextObject, class AActor*& Instigator, class AActor*& EffectCauser, class AActor*& Target, float& Magnitude, struct FHitResult& HitResult, float& LandscapeExtinguishRadius); // (Final | BlueprintAuthorityOnly | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortCurieBlueprintFunctionLibrary.ExecuteBeginFireInteract (Underlying native function: ExecuteBeginFireInteract 0x87cea40)
	static struct FCurieInteractHandle ExecuteBeginFireInteract(class UObject*& WorldContextObject, class AActor*& Instigator, class AActor*& EffectCauser, class AActor*& Target, float& Magnitude, struct FHitResult& HitResult, int& PropagationFuel, float& LandscapeIgnitionRadius); // (Final | BlueprintAuthorityOnly | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortCurieBlueprintFunctionLibrary.EnableStateAttachmentOnActor (Underlying native function: EnableStateAttachmentOnActor 0x87ce858)
	static void EnableStateAttachmentOnActor(class AActor*& TargetActor, struct FGameplayTag& StateTag); // (Final | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCurieBlueprintFunctionLibrary.EnableElementInteractionOnActor (Underlying native function: EnableElementInteractionOnActor 0x87ce760)
	static void EnableElementInteractionOnActor(class AActor*& TargetActor, struct FGameplayTag& ElementTag); // (Final | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCurieBlueprintFunctionLibrary.EnableElementDecayOnActor (Underlying native function: EnableElementDecayOnActor 0x87ce654)
	static void EnableElementDecayOnActor(class AActor*& TargetActor, struct FGameplayTag& ElementTag); // (Final | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCurieBlueprintFunctionLibrary.EnableElementAttachmentOnActor (Underlying native function: EnableElementAttachmentOnActor 0x87ce548)
	static void EnableElementAttachmentOnActor(class AActor*& TargetActor, struct FGameplayTag& ElementTag); // (Final | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCurieBlueprintFunctionLibrary.DisableStateAttachmentOnActor (Underlying native function: DisableStateAttachmentOnActor 0x87ce2e8)
	static void DisableStateAttachmentOnActor(class AActor*& TargetActor, struct FGameplayTag& StateTag); // (Final | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCurieBlueprintFunctionLibrary.DisableElementInteractionOnActor (Underlying native function: DisableElementInteractionOnActor 0x87ce1f0)
	static void DisableElementInteractionOnActor(class AActor*& TargetActor, struct FGameplayTag& ElementTag); // (Final | 0x00000002 | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCurieBlueprintFunctionLibrary.DisableElementDecayOnActor (Underlying native function: DisableElementDecayOnActor 0x87ce0f8)
	static void DisableElementDecayOnActor(class AActor*& TargetActor, struct FGameplayTag& ElementTag); // (Final | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCurieBlueprintFunctionLibrary.DisableElementAttachmentOnActor (Underlying native function: DisableElementAttachmentOnActor 0x87ce000)
	static void DisableElementAttachmentOnActor(class AActor*& TargetActor, struct FGameplayTag& ElementTag); // (Final | 0x00000002 | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCurieBlueprintFunctionLibrary.CurieProtoMeshExtraction (Underlying native function: CurieProtoMeshExtraction 0x87cdd14)
	static void CurieProtoMeshExtraction(struct TArray<struct FVector>& LocalVertLocs, class UStaticMeshComponent*& MeshComponent, int& LOD, int& VertDivisor); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortCurieBlueprintFunctionLibrary.ChangeCurieContainerOwnership (Underlying native function: ChangeCurieContainerOwnership 0x87cda60)
	static void ChangeCurieContainerOwnership(class AActor*& SourceActor, class AActor*& TargetActor); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCurieBlueprintFunctionLibrary.AddActorToCurieIgnoreTransformChanges (Underlying native function: AddActorToCurieIgnoreTransformChanges 0x71a663c)
	static void AddActorToCurieIgnoreTransformChanges(class AActor*& Actor); // (Final | 0x00000002 | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable)
};

