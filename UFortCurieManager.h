// Class /Script/FortniteGame.FortCurieManager
// Size: 0x898
class UFortCurieManager : public UCurieManager
{
	unsigned char unreflected_630[0x140]; // 0x630 (0x140) 
	struct TMap<struct FGameplayTag, struct FCurieToggleComponentGroup> ToggleComponentGroups; // 0x770 (0x50)
	class UFortCurieFXManager* FXManager; // 0x7c0 (0x8)
	struct TArray<struct FGameplayTag> ValidStateIdentifiers; // 0x7c8 (0x10)
	struct TMap<struct FGameplayTag, int> StateIdentifierToIdxMap; // 0x7d8 (0x50)
	class UFortCurieSettings* CurieSettings; // 0x828 (0x8)
	struct TArray<class UCurieManagerComponentConfig*> ConfigOverrides; // 0x830 (0x10)
	unsigned char unreflected_840[0x48]; // 0x840 (0x48) 
	int CurrentlyUpdatingOverlapHandle; // 0x888 (0x4)
	int ElementOverlapMaximumTestActorsPerFrame; // 0x88c (0x4)
	float ElementOverlapMaximumDelayBetweenChecks; // 0x890 (0x4)
	bool bAllowCurieApplicationViaDamageFormulaTags; // 0x894 (0x1)
	bool bCurieElementsBlockBuildingEdit; // 0x895 (0x1)
	bool bCurieElementsBlockBuildingRepair; // 0x896 (0x1)
	unsigned char padding_897[0x1]; // 0x897 (0x1)

	/* Functions */

	// Function /Script/FortniteGame.FortCurieManager.UnbindDelegateOnToggleGroupMemberActiveStateChange (Underlying native function: UnbindDelegateOnToggleGroupMemberActiveStateChange 0x87f5c0c)
	void UnbindDelegateOnToggleGroupMemberActiveStateChange(struct FGameplayTag& ToggleGroup, struct FDelegate& Delegate); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCurieManager.UnbindDelegateOnToggleGroupFullyInactive (Underlying native function: UnbindDelegateOnToggleGroupFullyInactive 0x87f5b30)
	void UnbindDelegateOnToggleGroupFullyInactive(struct FGameplayTag& ToggleGroup, struct FDelegate& Delegate); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCurieManager.UnbindDelegateOnToggleGroupFullyActive (Underlying native function: UnbindDelegateOnToggleGroupFullyActive 0x87f5a54)
	void UnbindDelegateOnToggleGroupFullyActive(struct FGameplayTag& ToggleGroup, struct FDelegate& Delegate); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCurieManager.OnToggleGroupComponentDeactivated (Underlying native function: OnToggleGroupComponentDeactivated 0x87f530c)
	void OnToggleGroupComponentDeactivated(class UActorComponent*& InComponent); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortCurieManager.OnToggleGroupComponentActivated (Underlying native function: OnToggleGroupComponentActivated 0x87f5240)
	void OnToggleGroupComponentActivated(class UActorComponent*& InComponent, bool& bReset); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortCurieManager.OnRep_ValidStateIdentifiers (Underlying native function: OnRep_ValidStateIdentifiers 0xed0df8)
	void OnRepValidStateIdentifiers(); // (Native | Protected)

	// Function /Script/FortniteGame.FortCurieManager.InternalPhysicsComponentAwakeChanged (Underlying native function: InternalPhysicsComponentAwakeChanged 0x87f4bfc)
	void InternalPhysicsComponentAwakeChanged(class UPrimitiveComponent*& SimulatingComponent, bool& bIsAwake); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortCurieManager.BindDelegateOnToggleGroupMemberActiveStateChange (Underlying native function: BindDelegateOnToggleGroupMemberActiveStateChange 0x87f4680)
	void BindDelegateOnToggleGroupMemberActiveStateChange(struct FGameplayTag& ToggleGroup, struct FDelegate& Delegate); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCurieManager.BindDelegateOnToggleGroupFullyInactive (Underlying native function: BindDelegateOnToggleGroupFullyInactive 0x87f45a4)
	void BindDelegateOnToggleGroupFullyInactive(struct FGameplayTag& ToggleGroup, struct FDelegate& Delegate); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCurieManager.BindDelegateOnToggleGroupFullyActive (Underlying native function: BindDelegateOnToggleGroupFullyActive 0x87f44c8)
	void BindDelegateOnToggleGroupFullyActive(struct FGameplayTag& ToggleGroup, struct FDelegate& Delegate); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)
};

