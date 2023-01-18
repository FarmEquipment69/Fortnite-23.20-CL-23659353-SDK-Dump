// BlueprintGeneratedClass /Irwin/AI/Prey/Burt/Pawns/NPC_Pawn_Irwin_Prey_Burt.NPC_Pawn_Irwin_Prey_Burt_C
// Size: 0x3c89
class ANPC_Pawn_Irwin_Prey_Burt_C : public ANPC_Pawn_Wildlife_Prey_Parent_C
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x3c08 (0x8)
	class UFTP_NPC_Assignment_Loot_Omnivore_C* FTPNPCAssignmentLootOmnivore; // 0x3c10 (0x8)
	class UFortAthenaCollisionReactionComponent* FortAthenaCollisionReactionRidingCharge; // 0x3c18 (0x8)
	class UFortCharacterPartsComponent* FortCharacterParts; // 0x3c20 (0x8)
	struct FGameplayTagContainer InteractionPreventingTags; // 0x3c28 (0x20)
	struct FGameplayTag SprintImpactGameplayCueTag; // 0x3c48 (0x4)
	unsigned char unreflected_3c4c[0x4]; // 0x3c4c (0x4) 
	class UClass* GESprintImpactPawn; // 0x3c50 (0x8)
	class UClass* GESprintImpactVehicle; // 0x3c58 (0x8)
	struct FGameplayTagContainer InteractingPawnPreventingTags; // 0x3c60 (0x20)
	class UNiagaraSystem* LandingFX; // 0x3c80 (0x8)
	bool playLandingFX; // 0x3c88 (0x1)

	/* Functions */

	// Function /Irwin/AI/Prey/Burt/Pawns/NPC_Pawn_Irwin_Prey_Burt.NPC_Pawn_Irwin_Prey_Burt_C.SetColorVariation (Has no native function)
	void SetColorVariation(bool& CallFuncGreaterDoubleDoubleReturnValue, class USkeletalMeshComponent*& CallFuncGetSkeletalMeshForPartTypeReturnValue, float& CallFuncSetCustomPrimitiveDataFloatValueImplicitCast); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Irwin/AI/Prey/Burt/Pawns/NPC_Pawn_Irwin_Prey_Burt.NPC_Pawn_Irwin_Prey_Burt_C.BlueprintCanInteract (Has no native function)
	bool BlueprintCanInteract(class AFortPawn*& InteractingPawn, struct TEnumAsByte<EInteractionBeingAttempted>& InteractionBeingAttempted); // (Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Irwin/AI/Prey/Burt/Pawns/NPC_Pawn_Irwin_Prey_Burt.NPC_Pawn_Irwin_Prey_Burt_C.OnEnteredWaterBody (Has no native function)
	void OnEnteredWaterBody(class AFortWaterBodyActor*& WaterBody, bool& bIsFirstBody); // (Event | Public | BlueprintEvent)

	// Function /Irwin/AI/Prey/Burt/Pawns/NPC_Pawn_Irwin_Prey_Burt.NPC_Pawn_Irwin_Prey_Burt_C.OnExitedWaterBody (Has no native function)
	void OnExitedWaterBody(class AFortWaterBodyActor*& WaterBody, bool& bIsLastBody); // (Event | Public | BlueprintEvent)

	// Function /Irwin/AI/Prey/Burt/Pawns/NPC_Pawn_Irwin_Prey_Burt.NPC_Pawn_Irwin_Prey_Burt_C.OnLanded (Has no native function)
	void OnLanded(struct FHitResult& Hit); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Irwin/AI/Prey/Burt/Pawns/NPC_Pawn_Irwin_Prey_Burt.NPC_Pawn_Irwin_Prey_Burt_C.OnCustomizationsLoaded_BP (Has no native function)
	void OnCustomizationsLoadedBP(); // (Event | Protected | BlueprintEvent)

	// Function /Irwin/AI/Prey/Burt/Pawns/NPC_Pawn_Irwin_Prey_Burt.NPC_Pawn_Irwin_Prey_Burt_C.ExecuteUbergraph_NPC_Pawn_Irwin_Prey_Burt (Has no native function)
	void ExecuteUbergraphNPCPawnIrwinPreyBurt(int& EntryPoint, class AFortWaterBodyActor*& K2NodeEventWaterBody1, bool& K2NodeEventbIsFirstBody, class UNiagaraComponent*& CallFuncSpawnSystemAttachedReturnValue, class AFortWaterBodyActor*& K2NodeEventWaterBody, bool& K2NodeEventbIsLastBody, struct FHitResult& K2NodeEventHit); // (Final | 0x00008000 | HasDefaults)
};

