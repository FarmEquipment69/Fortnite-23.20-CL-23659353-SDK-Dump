// Class /Script/FortniteUI.FortCreativeMiniGameInfo
// Size: 0x2e8
class UFortCreativeMiniGameInfo : public UUserWidget
{
	struct FMulticastInlineDelegate OnSupportCreator; // 0x268 (0x10)
	struct FMulticastInlineDelegate OnToggleDetails; // 0x278 (0x10)
	class UCommonTextBlock* TextName; // 0x288 (0x8)
	class UCommonTextBlock* TextCreatorName; // 0x290 (0x8)
	class UCommonTextBlock* TextSupportCode; // 0x298 (0x8)
	class UCommonTextBlock* TextBullet1; // 0x2a0 (0x8)
	class UCommonTextBlock* TextBullet2; // 0x2a8 (0x8)
	class UCommonTextBlock* TextBullet3; // 0x2b0 (0x8)
	class UDynamicEntryBox* EntryBoxMiniGameTags; // 0x2b8 (0x8)
	int SizeFontBulletMobile; // 0x2c0 (0x4)
	unsigned char unreflected_2c4[0x4]; // 0x2c4 (0x4) 
	class UInputComponent* PanelInputComponent; // 0x2c8 (0x8)
	unsigned char padding_2d0[0x18]; // 0x2d0 (0x18)

	/* Functions */

	// Function /Script/FortniteUI.FortCreativeMiniGameInfo.PushPanelInputComponent (Underlying native function: PushPanelInputComponent 0xa6da910)
	void PushPanelInputComponent(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortCreativeMiniGameInfo.PopPanelInputComponent (Underlying native function: PopPanelInputComponent 0xa6da874)
	void PopPanelInputComponent(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortCreativeMiniGameInfo.OnVisible (Underlying native function: OnVisible 0xa6da348)
	void OnVisible(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortCreativeMiniGameInfo.OnTextSet (Has no native function)
	void OnTextSet(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortCreativeMiniGameInfo.OnSupportCodeChanged (Underlying native function: OnSupportCodeChanged 0xa6da1e8)
	void OnSupportCodeChanged(struct FText& SupportCode); // (Native | Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.FortCreativeMiniGameInfo.OnMiniGameStartedFromInputComponent (Has no native function)
	void OnMiniGameStartedFromInputComponent(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortCreativeMiniGameInfo.OnIslandTitleChanged (Underlying native function: OnIslandTitleChanged 0xa6d9fc0)
	void OnIslandTitleChanged(struct FText& IslandName); // (Native | Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.FortCreativeMiniGameInfo.OnIslandCodeChanged (Has no native function)
	void OnIslandCodeChanged(struct FText& SupportCode); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.FortCreativeMiniGameInfo.OnGameInfoBulletsChanged (Underlying native function: OnGameInfoBulletsChanged 0xa6d9f24)
	void OnGameInfoBulletsChanged(struct TArray<struct FString>& GameInfoBullets); // (Native | Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.FortCreativeMiniGameInfo.OnCreatorNameChanged (Underlying native function: OnCreatorNameChanged 0xa6d9d58)
	void OnCreatorNameChanged(struct FText& CreatorName); // (Native | Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.FortCreativeMiniGameInfo.IsStartGameEnabled (Underlying native function: IsStartGameEnabled 0xa6d9ca4)
	bool IsStartGameEnabled(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortCreativeMiniGameInfo.GetIslandDescriptionTags (Underlying native function: GetIslandDescriptionTags 0xa6d88dc)
	struct TArray<struct FCreativeIslandDescriptionTag> GetIslandDescriptionTags(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortCreativeMiniGameInfo.GetIslandDescriptionLocationData (Underlying native function: GetIslandDescriptionLocationData 0xa6d87e0)
	void GetIslandDescriptionLocationData(struct FMargin& Margin, struct TEnumAsByte<EHorizontalAlignment>& Alignment); // (Final | Native | Protected | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteUI.FortCreativeMiniGameInfo.GetCreatorInformation (Underlying native function: GetCreatorInformation 0xa6d80c8)
	void GetCreatorInformation(struct FString& OutCreatorName, struct FString& OutSupportCode); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortCreativeMiniGameInfo.ForceRefresh (Underlying native function: ForceRefresh 0xa6d7cb8)
	bool ForceRefresh(bool& bSetupInputComponent); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortCreativeMiniGameInfo.AreDetailsToggleable (Underlying native function: AreDetailsToggleable 0xa6d70b4)
	bool AreDetailsToggleable(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)
};

