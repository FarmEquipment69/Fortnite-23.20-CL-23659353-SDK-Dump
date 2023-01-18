// Class /Script/FortniteGame.TeleportationFxLibrary
// Size: 0x28
class UTeleportationFxLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/FortniteGame.TeleportationFxLibrary.UpdateDissolveFx (Underlying native function: UpdateDissolveFx 0x12c1f60)
	static void UpdateDissolveFx(float& TRANSITION, float& ZHeight, float& LightIntensity, float& MaxLightIntensity, struct FName& SocketMeshTop, struct FName& SocketMeshBottom, class USkeletalMeshComponent*& SkeletalMeshComponent, class UPointLightComponent*& TeleportationPointLight, struct TArray<class UMaterialInstanceDynamic*>& DissolveMIDs, class AFortPlayerPawn*& Pawn, struct FGuid& MaterialOverrideId); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.TeleportationFxLibrary.SetupDissolveFx (Underlying native function: SetupDissolveFx 0x89d2f20)
	static bool SetupDissolveFx(class UMaterialInterface*& MatCharacterDissolve, struct TArray<class USkeletalMeshComponent*>& SkeletalMeshes, struct TArray<class UMaterialInstanceDynamic*>& DissolveMIDs); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.TeleportationFxLibrary.PreDissolveGlowUpdate (Underlying native function: PreDissolveGlowUpdate 0x23f5330)
	static void PreDissolveGlowUpdate(struct TArray<class UMaterialInstanceDynamic*>& Materials, float& Glow); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.TeleportationFxLibrary.CleanupResOutFX (Underlying native function: CleanupResOutFX 0x2445808)
	static void CleanupResOutFX(class AFortPlayerPawnAthena*& Pawn, float& PawnLifespan, class UPointLightComponent*& TeleportationPointLight, class UMaterialInterface*& DissolveMat, struct TArray<class UMaterialInstanceDynamic*>& DissolveMIDs); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.TeleportationFxLibrary.CleanupDissolveFX (Underlying native function: CleanupDissolveFX 0x89d15c8)
	static void CleanupDissolveFX(class UObject*& WorldContextObject, class UMaterialInterface*& DissolveMat, struct TArray<class UMaterialInstanceDynamic*>& DissolveMIDs); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)
};

