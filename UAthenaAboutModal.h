// Class /Script/FortniteUI.AthenaAboutModal
// Size: 0x4d0
class UAthenaAboutModal : public UCommonActivatableWidget
{
	struct FMulticastInlineDelegate BPOnAboutModalClosed; // 0x3a8 (0x10)
	bool bForceShowPage; // 0x3b8 (0x1)
	unsigned char unreflected_3b9[0x7]; // 0x3b9 (0x7) 
	struct FText Title; // 0x3c0 (0x18)
	struct TArray<struct FText> Entries; // 0x3d8 (0x10)
	struct TWeakObjectPtr<class UObject> HeroImage; // 0x3e8 (0x28)
	struct TWeakObjectPtr<class UClass> SeasonMovieWidgetClass; // 0x410 (0x28)
	class UFortStreamMediaSource* VideoStreamSource; // 0x438 (0x8)
	class UScrollBox* ScrollBoxContent; // 0x440 (0x8)
	class UFortLazyImage* ImageItem; // 0x448 (0x8)
	class UCommonButtonLegacy* ButtonClose; // 0x450 (0x8)
	class UCommonButtonLegacy* ButtonCloseMobile; // 0x458 (0x8)
	class UCommonButtonLegacy* ButtonBPSTrailer; // 0x460 (0x8)
	class UCommonButtonLegacy* ButtonBPSTrailerMobile; // 0x468 (0x8)
	class UCommonButtonLegacy* ButtonBPSHowTo; // 0x470 (0x8)
	class UCommonButtonLegacy* ButtonBPSHowToMobile; // 0x478 (0x8)
	unsigned char padding_480[0x50]; // 0x480 (0x50)

	/* Functions */

	// Function /Script/FortniteUI.AthenaAboutModal.OnSetContent (Has no native function)
	void OnSetContent(struct FText& InTitle, struct TArray<struct FText>& InEntries); // (Event | Protected | HasOutParms | BlueprintEvent)

	// DelegateFunction /Script/FortniteUI.AthenaAboutModal.OnAboutModalClosedDynamic__DelegateSignature (Has no native function)
	void OnAboutModalClosedDynamicDelegateSignature(); // (MulticastDelegate | Public | Delegate)

	// Function /Script/FortniteUI.AthenaAboutModal.CloseModal (Underlying native function: CloseModal 0xa5b7a4c)
	void CloseModal(); // (Final | Native | Protected | BlueprintCallable)
};

