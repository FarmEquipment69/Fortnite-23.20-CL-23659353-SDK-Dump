// Class /Script/CommonUI.CommonLoadGuard
// Size: 0x2b0
class UCommonLoadGuard : public UContentWidget
{
	struct FSlateBrush LoadingBackgroundBrush; // 0x160 (0xc0)
	struct TEnumAsByte<EHorizontalAlignment> ThrobberAlignment; // 0x220 (0x1)
	unsigned char unreflected_221[0x3]; // 0x221 (0x3) 
	struct FMargin ThrobberPadding; // 0x224 (0x10)
	unsigned char unreflected_234[0x4]; // 0x234 (0x4) 
	struct FText LoadingText; // 0x238 (0x18)
	class UClass* TextStyle; // 0x250 (0x8)
	struct FMulticastInlineDelegate BPOnLoadingStateChanged; // 0x258 (0x10)
	struct FSoftObjectPath SpinnerMaterialPath; // 0x268 (0x18)
	unsigned char padding_280[0x30]; // 0x280 (0x30)

	/* Functions */

	// Function /Script/CommonUI.CommonLoadGuard.SetLoadingText (Underlying native function: SetLoadingText 0x6a4df50)
	void SetLoadingText(struct FText& InLoadingText); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/CommonUI.CommonLoadGuard.SetIsLoading (Underlying native function: SetIsLoading 0x6a4d998)
	void SetIsLoading(bool& bInIsLoading); // (Final | Native | Public | BlueprintCallable)

	// DelegateFunction /Script/CommonUI.CommonLoadGuard.OnAssetLoaded__DelegateSignature (Has no native function)
	void OnAssetLoadedDelegateSignature(class UObject*& Object); // (Public | Delegate)

	// Function /Script/CommonUI.CommonLoadGuard.IsLoading (Underlying native function: IsLoading 0x6a4c55c)
	bool IsLoading(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CommonUI.CommonLoadGuard.BP_GuardAndLoadAsset (Underlying native function: BP_GuardAndLoadAsset 0x6a4a360)
	void BPGuardAndLoadAsset(struct TWeakObjectPtr<class UObject>& InLazyAsset, struct FDelegate& OnAssetLoaded); // (Final | Native | Private | HasOutParms | BlueprintCallable)
};

