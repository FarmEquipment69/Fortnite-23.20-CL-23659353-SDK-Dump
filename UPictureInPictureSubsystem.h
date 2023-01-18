// Class /Script/PictureInPictureCore.PictureInPictureSubsystem
// Size: 0x120
class UPictureInPictureSubsystem : public UEngineSubsystem
{
	struct TArray<class UPictureInPicturePartnerDataAsset*> AvailableClientsList; // 0x30 (0x10)
	struct FMulticastInlineDelegate OnPartnerUpdateComplete; // 0x40 (0x10)
	struct FMulticastInlineDelegate OnPartnerChanged; // 0x50 (0x10)
	bool bPartnerListUpdated; // 0x60 (0x1)
	bool bIsSuspended; // 0x61 (0x1)
	bool bCMSInitialized; // 0x62 (0x1)
	unsigned char unreflected_63[0x5]; // 0x63 (0x5) 
	struct FString CurrentPlatform; // 0x68 (0x10)
	unsigned char unreflected_78[0x10]; // 0x78 (0x10) 
	struct TMap<struct FString, class UPictureInPicturePartnerControls*> SupportedPartnerControls; // 0x88 (0x50)
	struct FString CurrentPartnerName; // 0xd8 (0x10)
	struct FString CurrentContinent; // 0xe8 (0x10)
	struct FString CurrentCountry; // 0xf8 (0x10)
	struct TArray<struct FString> CurrentSubdivisions; // 0x108 (0x10)
	class UFortMediaCMSEventsComponent* CMSEventsComponent; // 0x118 (0x8)

	/* Functions */

	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.UpdatePartnerItemList (Underlying native function: UpdatePartnerItemList 0x751c1d8)
	void UpdatePartnerItemList(class UObject*& InWorldContext, bool& bForce); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.ToggleFullScreenPiP (Underlying native function: ToggleFullScreenPiP 0x751c1c4)
	void ToggleFullScreenPiP(); // (Final | Native | Public)

	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.SuspendCurrentMediaController (Underlying native function: SuspendCurrentMediaController 0x751c19c)
	void SuspendCurrentMediaController(); // (Final | Native | Public)

	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.StoreLastUsedSource (Underlying native function: StoreLastUsedSource 0x751bd8c)
	void StoreLastUsedSource(struct FString& InPartnerSourceName); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.StoreLastUsedPartner (Underlying native function: StoreLastUsedPartner 0x751bc3c)
	void StoreLastUsedPartner(struct FString& InPartnerName); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.StoreAutoEnableSetting (Underlying native function: StoreAutoEnableSetting 0x751bbcc)
	void StoreAutoEnableSetting(bool& InUserEnabled); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.ShutdownAllPartners (Underlying native function: ShutdownAllPartners 0x751bbb8)
	void ShutdownAllPartners(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.ResumeCurrentMediaController (Underlying native function: ResumeCurrentMediaController 0x2cf4404)
	void ResumeCurrentMediaController(); // (Final | Native | Public)

	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.OnCurrentPartnerSourceSelected (Underlying native function: OnCurrentPartnerSourceSelected 0x751b710)
	void OnCurrentPartnerSourceSelected(struct FPiPPartnerSource& SelectedSource); // (Final | Native | Private | HasOutParms)

	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.OnCMSEventValid (Underlying native function: OnCMSEventValid 0x1d9aea0)
	void OnCMSEventValid(class UMediaCMSEvent*& ValidEvent); // (Final | Native | Private)

	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.OnCMSEventInvalid (Underlying native function: OnCMSEventInvalid 0x751b690)
	void OnCMSEventInvalid(class UMediaCMSEvent*& InvalidEvent); // (Final | Native | Private)

	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.IsPartnerListUpdated (Underlying native function: IsPartnerListUpdated 0x751b634)
	bool IsPartnerListUpdated(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.HandleMediaSourceRequest (Underlying native function: HandleMediaSourceRequest 0x751b418)
	void HandleMediaSourceRequest(); // (Final | Native | Private)

	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.HandleFNEventsSetCurrentMediaControllerEnabled (Underlying native function: HandleFNEventsSetCurrentMediaControllerEnabled 0x751b398)
	void HandleFNEventsSetCurrentMediaControllerEnabled(bool& InEnabled); // (Final | Native | Private)

	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.GetPartnerItemList (Underlying native function: GetPartnerItemList 0x751b258)
	struct TArray<class UPictureInPicturePartnerDataAsset*> GetPartnerItemList(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.GetPartnerItem (Underlying native function: GetPartnerItem 0x751b0f4)
	class UPictureInPicturePartnerDataAsset* GetPartnerItem(struct FString& PartnerName); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.GetPartnerControls (Underlying native function: GetPartnerControls 0x2dc7fc0)
	class UPictureInPicturePartnerControls* GetPartnerControls(struct FString& PartnerName); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.GetPartnerController (Underlying native function: GetPartnerController 0x751af90)
	class UPictureInPictureMediaController* GetPartnerController(struct FString& PartnerName); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.GetPartnerClient (Underlying native function: GetPartnerClient 0x751ae2c)
	class UPictureInPictureClient* GetPartnerClient(struct FString& PartnerName); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.GetLastUsedSource (Underlying native function: GetLastUsedSource 0x751acbc)
	void GetLastUsedSource(struct FString& OutPartnerSourceName); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.GetLastUsedPartner (Underlying native function: GetLastUsedPartner 0x751ab64)
	void GetLastUsedPartner(struct FString& OutPartnerName); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.GetCurrentPartnerItem (Underlying native function: GetCurrentPartnerItem 0x751aaa0)
	class UPictureInPicturePartnerDataAsset* GetCurrentPartnerItem(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.GetCurrentPartnerControls (Underlying native function: GetCurrentPartnerControls 0x751aa24)
	class UPictureInPicturePartnerControls* GetCurrentPartnerControls(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.GetCurrentPartnerController (Underlying native function: GetCurrentPartnerController 0x751a9a0)
	class UPictureInPictureMediaController* GetCurrentPartnerController(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.GetCurrentPartnerClient (Underlying native function: GetCurrentPartnerClient 0x751a91c)
	class UPictureInPictureClient* GetCurrentPartnerClient(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.GetAutoEnableSetting (Underlying native function: GetAutoEnableSetting 0x751a8e0)
	bool GetAutoEnableSetting(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.EnableFullScreenPiPOption (Underlying native function: EnableFullScreenPiPOption 0x751a754)
	void EnableFullScreenPiPOption(bool& bEnable); // (Final | Native | Public)
};

