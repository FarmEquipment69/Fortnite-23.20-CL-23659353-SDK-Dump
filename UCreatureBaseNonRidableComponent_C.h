// BlueprintGeneratedClass /RidingContent/Components/CreatureBaseNonRidableComponent.CreatureBaseNonRidableComponent_C
// Size: 0xba
class UCreatureBaseNonRidableComponent_C : public UActorComponent
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0xa0 (0x8)
	double JumpAttachGroundHeightMin; // 0xa8 (0x8)
	double JumpAttachGroundHeightBuffer; // 0xb0 (0x8)
	bool UsesAltRidingMessage; // 0xb8 (0x1)
	bool KillOnRideAttempt; // 0xb9 (0x1)

	/* Functions */

	// Function /RidingContent/Components/CreatureBaseNonRidableComponent.CreatureBaseNonRidableComponent_C.GetRidingInfoFromTarget (Has no native function)
	void GetRidingInfoFromTarget(double& JumpAttachGroundHeightMin, double& JumpAttachGroundHeightBuffer, bool& UsesAltRidingMessage); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /RidingContent/Components/CreatureBaseNonRidableComponent.CreatureBaseNonRidableComponent_C.ToggleRidingAlternative (Has no native function)
	void ToggleRidingAlternative(); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /RidingContent/Components/CreatureBaseNonRidableComponent.CreatureBaseNonRidableComponent_C.AlternateRidingEvent (Has no native function)
	void AlternateRidingEvent(); // (BlueprintCallable | BlueprintEvent)

	// Function /RidingContent/Components/CreatureBaseNonRidableComponent.CreatureBaseNonRidableComponent_C.ExecuteUbergraph_CreatureBaseNonRidableComponent (Has no native function)
	void ExecuteUbergraphCreatureBaseNonRidableComponent(int& EntryPoint, class AActor*& CallFuncGetOwnerReturnValue, class AFortPawn*& K2NodeDynamicCastAsFortPawn, bool& K2NodeDynamicCastbSuccess); // (Final | 0x00008000)
};

