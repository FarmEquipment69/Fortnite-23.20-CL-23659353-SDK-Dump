// Class /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem
// Size: 0x520
class UFortControllerComponent_AugmentGrantingSystem : public UFortControllerComponent
{
	struct FMulticastInlineDelegate OnCanSelectAugmentChanged; // 0xa0 (0x10)
	struct FMulticastInlineDelegate OnSelectedAugmentForGrant; // 0xb0 (0x10)
	struct FMulticastInlineDelegate OnAvailableAugmentsForGrantingUpdated; // 0xc0 (0x10)
	struct FMulticastInlineDelegate OnAuthorityRequestAugmentChoices; // 0xd0 (0x10)
	struct FMulticastInlineDelegate OnLocalReroll; // 0xe0 (0x10)
	unsigned char unreflected_f0[0x10]; // 0xf0 (0x10) 
	struct FMulticastInlineDelegate OnReplicateNumPendingAugmentsToGrant; // 0x100 (0x10)
	class UFortWeaponItemDefinition* AugmentSelectionModeItem; // 0x110 (0x8)
	class UFortWorldItem* SelectionModeWorldItem; // 0x118 (0x8)
	struct FScalableFloat Enabled; // 0x120 (0x28)
	int8_t ReplicatedNumPendingAugmentsToGrant; // 0x148 (0x1)
	unsigned char unreflected_149[0x7]; // 0x149 (0x7) 
	struct TArray<struct FPlayerAugmentChoiceDatum> ReplicatedAugmentChoices; // 0x150 (0x10)
	int8_t NumFreeRerolls; // 0x160 (0x1)
	unsigned char unreflected_161[0x7]; // 0x161 (0x7) 
	class UInputComponent* AugmentSelectInputComponent; // 0x168 (0x8)
	struct FScalableFloat AugmentSelectInputPriority; // 0x170 (0x28)
	struct TArray<struct FFortAugmentRerollCost> RerollCosts; // 0x198 (0x10)
	struct FFortItemEntry SelectorItemEntry; // 0x1a8 (0x1a0)
	struct FFortItemEntry LocalCachedPreviousWeapon; // 0x348 (0x1a0)
	unsigned char padding_4e8[0x38]; // 0x4e8 (0x38)

	/* Functions */

	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.ServerRequestReroll (Underlying native function: ServerRequestReroll 0x6a4bfa4)
	void ServerRequestReroll(); // (Final | Net | NetReliable | Native | Event | Private | NetServer)

	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.ServerGrantAugment (Underlying native function: ServerGrantAugment 0x72923e0)
	void ServerGrantAugment(class UFortPlayerAugmentItemDefinition*& ChosenAugmentDef); // (Final | Net | NetReliable | Native | Event | Private | NetServer)

	// DelegateFunction /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.OnSelectedAugmentForGrantDelegate__DelegateSignature (Has no native function)
	void OnSelectedAugmentForGrantDelegateDelegateSignature(class UFortPlayerAugmentItemDefinition*& SelectedAugment); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.OnReplicateNumPendingAugmentsToGrantDelegate__DelegateSignature (Has no native function)
	void OnReplicateNumPendingAugmentsToGrantDelegateDelegateSignature(int8_t& NumPendingAugmentsToGrant); // (MulticastDelegate | Public | Delegate)

	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.OnRep_SelectorItemEntry (Underlying native function: OnRep_SelectorItemEntry 0x72923cc)
	void OnRepSelectorItemEntry(); // (Final | Native | Private)

	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.OnRep_ReplicatedNumPendingAugmentsToGrant (Underlying native function: OnRep_ReplicatedNumPendingAugmentsToGrant 0x72923b8)
	void OnRepReplicatedNumPendingAugmentsToGrant(); // (Final | Native | Private)

	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.OnRep_ReplicatedAugmentChoices (Underlying native function: OnRep_ReplicatedAugmentChoices 0x72923a4)
	void OnRepReplicatedAugmentChoices(); // (Final | Native | Private)

	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.OnRep_FreeRerolls (Underlying native function: OnRep_FreeRerolls 0x1457f0c)
	void OnRepFreeRerolls(); // (Final | Native | Private)

	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.OnLocalUnequipAugmentSelectionPressed (Has no native function)
	void OnLocalUnequipAugmentSelectionPressed(); // (Event | Protected | BlueprintEvent)

	// DelegateFunction /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.OnLocalRerollDelegate__DelegateSignature (Has no native function)
	void OnLocalRerollDelegateDelegateSignature(); // (MulticastDelegate | Public | Delegate)

	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.OnLocalEquipAugmentSelectionPressed (Has no native function)
	void OnLocalEquipAugmentSelectionPressed(); // (Event | Protected | BlueprintEvent)

	// DelegateFunction /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.OnFreeRerollsUpdatedDelegate__DelegateSignature (Has no native function)
	void OnFreeRerollsUpdatedDelegateDelegateSignature(int& NewNumFreeRerolls); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.OnAvailableAugmentsForGrantingUpdatedDelegate__DelegateSignature (Has no native function)
	void OnAvailableAugmentsForGrantingUpdatedDelegateDelegateSignature(class UFortControllerComponent_AugmentGrantingSystem*& GrantingComponent); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.OnAuthorityRequestAugmentChoicesDelegate__DelegateSignature (Has no native function)
	void OnAuthorityRequestAugmentChoicesDelegateDelegateSignature(struct TArray<class UFortPlayerAugmentItemDefinition*>& IgnoreInRoll); // (MulticastDelegate | Public | Delegate | HasOutParms)

	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.HandleToggleFullscreenMap (Underlying native function: HandleToggleFullscreenMap 0x532e5c0)
	void HandleToggleFullscreenMap(bool& bVisible); // (Final | Native | Private)

	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.HandleGamePhaseChanged (Underlying native function: HandleGamePhaseChanged 0x22c9da0)
	void HandleGamePhaseChanged(enum EAthenaGamePhase& GamePhase); // (Final | Native | Protected)

	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.GetPendingAugmentsToGrant (Underlying native function: GetPendingAugmentsToGrant 0x7291e2c)
	int GetPendingAugmentsToGrant(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.GetNumFreeRerolls (Underlying native function: GetNumFreeRerolls 0x532e2f0)
	int GetNumFreeRerolls(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.GetAvailableAugmentsToGrant (Underlying native function: GetAvailableAugmentsToGrant 0x7291990)
	struct TArray<struct FPlayerAugmentChoiceDatum> GetAvailableAugmentsToGrant(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.GetAugmentGrantingComponentFromController (Underlying native function: GetAugmentGrantingComponentFromController 0x25962cc)
	static class UFortControllerComponent_AugmentGrantingSystem* GetAugmentGrantingComponentFromController(class AController*& Controller); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable)

	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.ClientSelectAvailableAugmentToGrant (Underlying native function: ClientSelectAvailableAugmentToGrant 0x7291208)
	void ClientSelectAvailableAugmentToGrant(class UFortPlayerAugmentItemDefinition*& ChosenAugmentDef); // (Final | Native | Public | BlueprintCallable)

	// DelegateFunction /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.CanSelectAugmentChangedDelegate__DelegateSignature (Has no native function)
	void CanSelectAugmentChangedDelegateDelegateSignature(bool& bCanSelectAugment); // (MulticastDelegate | Public | Delegate)

	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.CanReroll (Underlying native function: CanReroll 0x729106c)
	bool CanReroll(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.AuthoritySetAvailableAugmentChoices (Underlying native function: AuthoritySetAvailableAugmentChoices 0x7290a40)
	void AuthoritySetAvailableAugmentChoices(struct TArray<struct FPlayerAugmentChoiceDatum>& AvailableAugmentsToGrant); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.AuthorityGrantNewAugment (Underlying native function: AuthorityGrantNewAugment 0x7290850)
	void AuthorityGrantNewAugment(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem.AuthorityGrantFreeReroll (Underlying native function: AuthorityGrantFreeReroll 0x729081c)
	void AuthorityGrantFreeReroll(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)
};

