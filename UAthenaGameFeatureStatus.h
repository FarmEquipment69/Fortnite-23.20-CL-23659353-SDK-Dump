// Class /Script/FortniteUI.AthenaGameFeatureStatus
// Size: 0x350
class UAthenaGameFeatureStatus : public UCommonUserWidget
{
	struct FText ProgressStatusToastTitle; // 0x290 (0x18)
	enum EFortGameFeature GameFeature; // 0x2a8 (0x1)
	bool bExtendedDisplay; // 0x2a9 (0x1)
	unsigned char unreflected_2aa[0x6]; // 0x2aa (0x6) 
	struct FText ExtendedDisplayText; // 0x2b0 (0x18)
	struct TWeakObjectPtr<class UObject> DownloadingIconAsset; // 0x2c8 (0x28)
	struct TWeakObjectPtr<class UObject> InitialToastNotificationIcon; // 0x2f0 (0x28)
	struct FName DownloadingIconMaterialParam; // 0x318 (0x4)
	unsigned char unreflected_31c[0x4]; // 0x31c (0x4) 
	class UFortLazyImage* ImageDownloadingIcon; // 0x320 (0x8)
	class UCommonNumericTextBlock* TextProgressPercent; // 0x328 (0x8)
	class UCommonTextBlock* TextExtendedDisplayText; // 0x330 (0x8)
	unsigned char padding_338[0x18]; // 0x338 (0x18)

	/* Functions */

	// Function /Script/FortniteUI.AthenaGameFeatureStatus.OnStatusChanged (Has no native function)
	void OnStatusChanged(enum EAthenaGameFeatureStatus& NewStatus); // (Event | Protected | BlueprintEvent)
};

