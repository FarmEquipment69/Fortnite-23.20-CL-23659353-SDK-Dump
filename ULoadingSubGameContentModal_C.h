// WidgetBlueprintGeneratedClass /Game/UI/Login/SubGameSelect/LoadingSubGameContentModal.LoadingSubGameContentModal_C
// Size: 0x439
class ULoadingSubGameContentModal_C : public UFortLoadingOnDemandContentModal
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x3f0 (0x8)
	class UWidgetAnimation* Outro; // 0x3f8 (0x8)
	class UWidgetAnimation* Intro; // 0x400 (0x8)
	class UCommonTextBlock* CommonTextBlockTitle; // 0x408 (0x8)
	class UProgressBar* DownloadingProgressBar; // 0x410 (0x8)
	class ULightbox_C* Lightbox; // 0x418 (0x8)
	class UVerticalBox* ModalVertBox; // 0x420 (0x8)
	class UCommonTextBlock* TextContent; // 0x428 (0x8)
	class UCommonTextBlock* TextProgress; // 0x430 (0x8)
	bool HasPlayedAnim; // 0x438 (0x1)

	/* Functions */

	// Function /Game/UI/Login/SubGameSelect/LoadingSubGameContentModal.LoadingSubGameContentModal_C.OnUpdatedProgress (Has no native function)
	void OnUpdatedProgress(float& Percent); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/Login/SubGameSelect/LoadingSubGameContentModal.LoadingSubGameContentModal_C.OnInitialized (Has no native function)
	void OnInitialized(); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Game/UI/Login/SubGameSelect/LoadingSubGameContentModal.LoadingSubGameContentModal_C.SetCancelButtonText (Has no native function)
	void SetCancelButtonText(struct FText& InText); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/UI/Login/SubGameSelect/LoadingSubGameContentModal.LoadingSubGameContentModal_C.BP_OnActivated (Has no native function)
	void BPOnActivated(); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/Login/SubGameSelect/LoadingSubGameContentModal.LoadingSubGameContentModal_C.OnAnimationFinished (Has no native function)
	void OnAnimationFinished(class UWidgetAnimation*& Animation); // (BlueprintCosmetic | Event | Protected | BlueprintEvent)

	// Function /Game/UI/Login/SubGameSelect/LoadingSubGameContentModal.LoadingSubGameContentModal_C.ExecuteUbergraph_LoadingSubGameContentModal (Has no native function)
	void ExecuteUbergraphLoadingSubGameContentModal(int& EntryPoint, struct FText& K2NodeEventInText, class UIconTextButton_C*& K2NodeDynamicCastAsIconTextButton, bool& K2NodeDynamicCastbSuccess, class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue, float& K2NodeEventPercent, class UWidgetAnimation*& K2NodeEventAnimation, struct FText& CallFuncAsPercentFloatReturnValue, bool& CallFuncLessEqualDoubleDoubleReturnValue, bool& CallFuncGreaterEqualDoubleDoubleReturnValue, bool& CallFuncBooleanANDReturnValue, bool& CallFuncEqualEqualObjectObjectReturnValue, double& CallFuncGreaterEqualDoubleDoubleAImplicitCast, double& CallFuncLessEqualDoubleDoubleAImplicitCast); // (Final | 0x00008000 | HasDefaults)
};

