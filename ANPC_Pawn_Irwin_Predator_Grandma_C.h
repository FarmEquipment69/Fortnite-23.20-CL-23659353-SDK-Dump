// BlueprintGeneratedClass /Irwin/AI/Predators/Grandma/Pawns/NPC_Pawn_Irwin_Predator_Grandma.NPC_Pawn_Irwin_Predator_Grandma_C
// Size: 0x3c71
class ANPC_Pawn_Irwin_Predator_Grandma_C : public ANPC_Pawn_Wildlife_Predator_Parent_C
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x3c08 (0x8)
	class UFortCharacterPartsComponent* FortCharacterParts; // 0x3c10 (0x8)
	class UFTP_NPC_Assignment_Loot_Carnivore_C* FTPNPCAssignmentLootCarnivore; // 0x3c18 (0x8)
	class UNiagaraComponent* NSIrwinGrandmaIdleEye; // 0x3c20 (0x8)
	struct FGameplayTagContainer InteractionPreventingTags; // 0x3c28 (0x20)
	struct FGameplayTagContainer InteractingPawnPreventingTags; // 0x3c48 (0x20)
	class UNiagaraSystem* LandingFX; // 0x3c68 (0x8)
	bool playLandingFX; // 0x3c70 (0x1)

	/* Functions */

	// Function /Irwin/AI/Predators/Grandma/Pawns/NPC_Pawn_Irwin_Predator_Grandma.NPC_Pawn_Irwin_Predator_Grandma_C.SetColorVariation (Has no native function)
	void SetColorVariation(bool& CallFuncGreaterDoubleDoubleReturnValue, class USkeletalMeshComponent*& CallFuncGetSkeletalMeshForPartTypeReturnValue, float& CallFuncSetCustomPrimitiveDataFloatValueImplicitCast); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Irwin/AI/Predators/Grandma/Pawns/NPC_Pawn_Irwin_Predator_Grandma.NPC_Pawn_Irwin_Predator_Grandma_C.PlayAdditiveHitReacts (Has no native function)
	void PlayAdditiveHitReacts(struct FVector& HitDirection, class UAnimMontage*& AnimMontage, struct FVector& CallFuncRandomUnitVectorReturnValue); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Irwin/AI/Predators/Grandma/Pawns/NPC_Pawn_Irwin_Predator_Grandma.NPC_Pawn_Irwin_Predator_Grandma_C.BlueprintCanInteract (Has no native function)
	bool BlueprintCanInteract(class AFortPawn*& InteractingPawn, struct TEnumAsByte<EInteractionBeingAttempted>& InteractionBeingAttempted); // (Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Irwin/AI/Predators/Grandma/Pawns/NPC_Pawn_Irwin_Predator_Grandma.NPC_Pawn_Irwin_Predator_Grandma_C.UserConstructionScript (Has no native function)
	void UserConstructionScript(struct TArray<struct FName>& ExistingTags, struct FName& CallFuncMakeLiteralNameReturnValue); // (Event | Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Irwin/AI/Predators/Grandma/Pawns/NPC_Pawn_Irwin_Predator_Grandma.NPC_Pawn_Irwin_Predator_Grandma_C.OnCustomizationsLoaded_BP (Has no native function)
	void OnCustomizationsLoadedBP(); // (Event | Protected | BlueprintEvent)

	// Function /Irwin/AI/Predators/Grandma/Pawns/NPC_Pawn_Irwin_Predator_Grandma.NPC_Pawn_Irwin_Predator_Grandma_C.OnLanded (Has no native function)
	void OnLanded(struct FHitResult& Hit); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Irwin/AI/Predators/Grandma/Pawns/NPC_Pawn_Irwin_Predator_Grandma.NPC_Pawn_Irwin_Predator_Grandma_C.OnEnteredWaterBody (Has no native function)
	void OnEnteredWaterBody(class AFortWaterBodyActor*& WaterBody, bool& bIsFirstBody); // (Event | Public | BlueprintEvent)

	// Function /Irwin/AI/Predators/Grandma/Pawns/NPC_Pawn_Irwin_Predator_Grandma.NPC_Pawn_Irwin_Predator_Grandma_C.OnExitedWaterBody (Has no native function)
	void OnExitedWaterBody(class AFortWaterBodyActor*& WaterBody, bool& bIsLastBody); // (Event | Public | BlueprintEvent)

	// Function /Irwin/AI/Predators/Grandma/Pawns/NPC_Pawn_Irwin_Predator_Grandma.NPC_Pawn_Irwin_Predator_Grandma_C.ExecuteUbergraph_NPC_Pawn_Irwin_Predator_Grandma (Has no native function)
	void ExecuteUbergraphNPCPawnIrwinPredatorGrandma(int& EntryPoint, class USceneComponent*& CallFuncK2GetRootComponentReturnValue, bool& CallFuncK2AttachToComponentReturnValue, struct FHitResult& K2NodeEventHit, class AFortWaterBodyActor*& K2NodeEventWaterBody1, bool& K2NodeEventbIsFirstBody, class UNiagaraComponent*& CallFuncSpawnSystemAttachedReturnValue, class AFortWaterBodyActor*& K2NodeEventWaterBody, bool& K2NodeEventbIsLastBody); // (Final | 0x00008000 | HasDefaults)
};

