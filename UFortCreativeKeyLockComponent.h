// Class /Script/FortniteGame.FortCreativeKeyLockComponent
// Size: 0x2a8
class UFortCreativeKeyLockComponent : public UFortMinigameItemContainerComponent
{
	enum ECreativeKeyLockState InitialState; // 0x128 (0x1)
	unsigned char unreflected_129[0x7]; // 0x129 (0x7) 
	struct FMulticastInlineDelegate OnKeyDefinitionUpdated; // 0x130 (0x10)
	struct FMulticastInlineDelegate OnUnLocked; // 0x140 (0x10)
	struct FMulticastInlineDelegate OnLocked; // 0x150 (0x10)
	struct FMulticastInlineDelegate OnLockStateChanged; // 0x160 (0x10)
	struct FMulticastInlineDelegate OnRemainingKeysUpdated; // 0x170 (0x10)
	struct FMulticastInlineDelegate OnKeysConsumed; // 0x180 (0x10)
	struct FText EditorDisplayName; // 0x190 (0x18)
	struct FText EditorDescription; // 0x1a8 (0x18)
	struct FGameplayTagContainer FilterTags; // 0x1c0 (0x20)
	struct FGameplayTagQuery RequiredFilterTagQuery; // 0x1e0 (0x48)
	enum ECreativeKeyLockState CurrentState; // 0x228 (0x1)
	unsigned char unreflected_229[0x3]; // 0x229 (0x3) 
	int RequiredKeysToUnlockAmount; // 0x22c (0x4)
	int RemainingKeysToUnlockAmount; // 0x230 (0x4)
	bool bRequireAllKeysAtOnce; // 0x234 (0x1)
	unsigned char unreflected_235[0x13]; // 0x235 (0x13) 
	struct TWeakObjectPtr<class UFortItemDefinition> UnlockKeyDefinitionSoftPointer; // 0x248 (0x28)
	struct FCreativeKeyLockItemData UnlockKeyItem; // 0x270 (0x38)

	/* Functions */

	// Function /Script/FortniteGame.FortCreativeKeyLockComponent.Unlock (Underlying native function: Unlock 0x87b7640)
	bool Unlock(class APawn*& Pawn); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCreativeKeyLockComponent.SetShouldConsumeKey (Underlying native function: SetShouldConsumeKey 0x87b7020)
	void SetShouldConsumeKey(bool& ShouldConsume); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCreativeKeyLockComponent.SetRequiredKeys (Underlying native function: SetRequiredKeys 0x87b6df4)
	void SetRequiredKeys(int& Amount); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCreativeKeyLockComponent.SetRequiredAllKeysAtOne (Underlying native function: SetRequiredAllKeysAtOne 0x87b6d6c)
	void SetRequiredAllKeysAtOne(bool& Required); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCreativeKeyLockComponent.SetKeyItemDefinition (Underlying native function: SetKeyItemDefinition 0x87b6b84)
	void SetKeyItemDefinition(struct FItemVariantHandle& ItemHandle); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortCreativeKeyLockComponent.Reset (Underlying native function: Reset 0x87b604c)
	void Reset(bool& DeferredReset); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCreativeKeyLockComponent.OnRep_UnlockKeyItem (Underlying native function: OnRep_UnlockKeyItem 0x87b5c84)
	void OnRepUnlockKeyItem(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortCreativeKeyLockComponent.OnRep_RemainingKeysToUnlock (Underlying native function: OnRep_RemainingKeysToUnlock 0x87b5c50)
	void OnRepRemainingKeysToUnlock(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortCreativeKeyLockComponent.OnRep_CurrentState (Underlying native function: OnRep_CurrentState 0x87b5ba8)
	void OnRepCurrentState(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortCreativeKeyLockComponent.Lock (Underlying native function: Lock 0x87b5640)
	bool Lock(class APawn*& Pawn); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCreativeKeyLockComponent.IsLocked (Underlying native function: IsLocked 0x87b4a04)
	bool IsLocked(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCreativeKeyLockComponent.GetCurrentState (Underlying native function: GetCurrentState 0x87b2424)
	enum ECreativeKeyLockState GetCurrentState(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCreativeKeyLockComponent.BlueprintHasKeysToInteract (Underlying native function: BlueprintHasKeysToInteract 0x87b0a04)
	bool BlueprintHasKeysToInteract(class APawn*& Pawn); // (Final | Native | Public | BlueprintCallable)
};

