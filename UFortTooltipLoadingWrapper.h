// Class /Script/FortniteGame.FortTooltipLoadingWrapper
// Size: 0x60
class UFortTooltipLoadingWrapper : public UObject
{
	struct FMulticastInlineDelegate OnTooltipAssetsLoaded; // 0x28 (0x10)
	struct TWeakObjectPtr<class UObject> SourceObject; // 0x38 (0x8)
	class UFortTooltip* TooltipInstance; // 0x40 (0x8)
	unsigned char padding_48[0x18]; // 0x48 (0x18)

	/* Functions */

	// DelegateFunction /Script/FortniteGame.FortTooltipLoadingWrapper.OnTooltipAssetsLoaded__DelegateSignature (Has no native function)
	void OnTooltipAssetsLoadedDelegateSignature(); // (MulticastDelegate | Public | Delegate)

	// Function /Script/FortniteGame.FortTooltipLoadingWrapper.HandleTooltipAssetLoaded (Underlying native function: HandleTooltipAssetLoaded 0x8f9a11c)
	void HandleTooltipAssetLoaded(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortTooltipLoadingWrapper.AreAssetsLoaded (Underlying native function: AreAssetsLoaded 0x8f98e98)
	bool AreAssetsLoaded(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

