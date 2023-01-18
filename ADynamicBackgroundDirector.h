// Class /Script/FortniteUI.DynamicBackgroundDirector
// Size: 0x350
class ADynamicBackgroundDirector : public AActor
{
	unsigned char unreflected_288[0x18]; // 0x288 (0x18) 
	struct FMulticastInlineDelegate BPOnDonutSequenceInitiated; // 0x2a0 (0x10)
	struct FMulticastInlineDelegate BPOnEnteredItemShop; // 0x2b0 (0x10)
	struct FMulticastInlineDelegate BPOnEnteredStore; // 0x2c0 (0x10)
	struct FMulticastInlineDelegate BPOnDonutSequencePlayDonutDrop; // 0x2d0 (0x10)
	struct FMulticastInlineDelegate BPOnEnvironmentChanged; // 0x2e0 (0x10)
	struct FMulticastInlineDelegate BPOnEnvironmentBackgroundTextureChanged; // 0x2f0 (0x10)
	struct FMulticastInlineDelegate BPOnRequestShowBackground; // 0x300 (0x10)
	struct FMulticastInlineDelegate BPOnRequestHideBackground; // 0x310 (0x10)
	enum EDynamicBackgroudKey DynamicBackgroundKey; // 0x320 (0x1)
	unsigned char padding_321[0x2f]; // 0x321 (0x2f)

	/* Functions */

	// Function /Script/FortniteUI.DynamicBackgroundDirector.TryForceSetupDonutStore (Underlying native function: TryForceSetupDonutStore 0xa580044)
	void TryForceSetupDonutStore(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.DynamicBackgroundDirector.SetIsInDonutSequence (Underlying native function: SetIsInDonutSequence 0x2aab260)
	void SetIsInDonutSequence(bool& bIsInSequence); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.DynamicBackgroundDirector.ResetDonutShopSeen (Underlying native function: ResetDonutShopSeen 0xa73d8bc)
	void ResetDonutShopSeen(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.DynamicBackgroundDirector.RequestDonutUIPlayAnim (Underlying native function: RequestDonutUIPlayAnim 0xa531504)
	void RequestDonutUIPlayAnim(); // (Final | Native | Public | BlueprintCallable)

	// DelegateFunction /Script/FortniteUI.DynamicBackgroundDirector.RequestDelegate__DelegateSignature (Has no native function)
	void RequestDelegateDelegateSignature(); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/FortniteUI.DynamicBackgroundDirector.OnEnvironmentChangedDynamic__DelegateSignature (Has no native function)
	void OnEnvironmentChangedDynamicDelegateSignature(struct FString& PresetEnvironmentName); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/FortniteUI.DynamicBackgroundDirector.OnEnvironmentBackgroundTextureChangedDynamic__DelegateSignature (Has no native function)
	void OnEnvironmentBackgroundTextureChangedDynamicDelegateSignature(class UTexture*& BackgroundImage); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/FortniteUI.DynamicBackgroundDirector.OnEnteredStore__DelegateSignature (Has no native function)
	void OnEnteredStoreDelegateSignature(); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/FortniteUI.DynamicBackgroundDirector.OnEnteredItemShop__DelegateSignature (Has no native function)
	void OnEnteredItemShopDelegateSignature(); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/FortniteUI.DynamicBackgroundDirector.OnDonutSetupLateStore__DelegateSignature (Has no native function)
	void OnDonutSetupLateStoreDelegateSignature(); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/FortniteUI.DynamicBackgroundDirector.OnDonutSequencePlayDonutDrop__DelegateSignature (Has no native function)
	void OnDonutSequencePlayDonutDropDelegateSignature(); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/FortniteUI.DynamicBackgroundDirector.OnDonutSequenceInitiated__DelegateSignature (Has no native function)
	void OnDonutSequenceInitiatedDelegateSignature(); // (MulticastDelegate | Public | Delegate)

	// Function /Script/FortniteUI.DynamicBackgroundDirector.OnDonutSequenceInitiated (Underlying native function: OnDonutSequenceInitiated 0xa73d78c)
	void OnDonutSequenceInitiated(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.DynamicBackgroundDirector.MarkDonutSequenceSeen (Underlying native function: MarkDonutSequenceSeen 0xa73d778)
	void MarkDonutSequenceSeen(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.DynamicBackgroundDirector.GetLoadedTexture (Underlying native function: GetLoadedTexture 0xa73c3bc)
	struct TWeakObjectPtr<class UTexture> GetLoadedTexture(); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteUI.DynamicBackgroundDirector.GetHasDonutShopSequenceBeenSeen (Underlying native function: GetHasDonutShopSequenceBeenSeen 0xa73c22c)
	bool GetHasDonutShopSequenceBeenSeen(); // (Final | Native | Public | BlueprintCallable)
};

