// Class /Script/VKEditUI.VKConnectionIndicator
// Size: 0x538
class UVKConnectionIndicator : public UCommonActivatableWidget
{
	bool bHasActiveConnection; // 0x3a8 (0x1)
	enum EVkEditStatus VkEditStatus; // 0x3a9 (0x1)
	unsigned char unreflected_3aa[0x6]; // 0x3aa (0x6) 
	struct TMap<enum EVkEditStatus, struct FText> EditStatusLocalizedText; // 0x3b0 (0x50)
	class UWidgetSwitcher* ConnectedSwitcher; // 0x400 (0x8)
	class UImage* IndicatorImageNotConnected; // 0x408 (0x8)
	class UImage* IndicatorImageConnected; // 0x410 (0x8)
	class UOverlay* IndicatorPreparing; // 0x418 (0x8)
	class UImage* IndicatorImageDownloading; // 0x420 (0x8)
	class UImage* IndicatorImageStarting; // 0x428 (0x8)
	class UImage* IndicatorImageUpToDate; // 0x430 (0x8)
	class UImage* IndicatorImageRefreshRequired; // 0x438 (0x8)
	class UImage* IndicatorImageError; // 0x440 (0x8)
	class UWidget* MessageContainer; // 0x448 (0x8)
	class UCommonTextBlock* MessageText; // 0x450 (0x8)
	class UWidgetSwitcher* AdditionalInfoSwitcher; // 0x458 (0x8)
	class UWidget* DownloadContainer; // 0x460 (0x8)
	class UFortSimpleMaterialProgressBar* DownloadProgressBar; // 0x468 (0x8)
	class UCommonTextBlock* DownloadProgressText; // 0x470 (0x8)
	class UWidget* OpenLogContainer; // 0x478 (0x8)
	class UWidget* SubMessageTextContainer; // 0x480 (0x8)
	class UCommonTextBlock* SubMessageText; // 0x488 (0x8)
	class UCommonActionWidget* OpenLogActionWidget; // 0x490 (0x8)
	struct FDataTableRowHandle OpenLogInputAction; // 0x498 (0x10)
	class UWidget* SquadListContainer; // 0x4a8 (0x8)
	class UAthenaSquadListBase* AthenaSquadList; // 0x4b0 (0x8)
	unsigned char unreflected_4b8[0x4]; // 0x4b8 (0x4) 
	enum EMemorySamplerState MemorySamplerState; // 0x4bc (0x1)
	unsigned char unreflected_4bd[0x3]; // 0x4bd (0x3) 
	struct FText MemorySamplerInProgressText; // 0x4c0 (0x18)
	struct FText MemorySamplerCompletedText; // 0x4d8 (0x18)
	struct FText MemorySamplerSuccessText; // 0x4f0 (0x18)
	struct FText MemorySamplerFailureText; // 0x508 (0x18)
	unsigned char padding_520[0x18]; // 0x520 (0x18)

	/* Functions */

	// Function /Script/VKEditUI.VKConnectionIndicator.OnMemorySamplerProgressUpdated (Underlying native function: OnMemorySamplerProgressUpdated 0x5b61430)
	void OnMemorySamplerProgressUpdated(float& Progress); // (Final | Native | Private)
};

