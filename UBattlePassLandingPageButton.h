// Class /Script/BattlePassBase.BattlePassLandingPageButton
// Size: 0x1660
class UBattlePassLandingPageButton : public UCommonButtonBase
{
	enum EBattlePassView SubPageType; // 0x13e0 (0x1)
	enum EBattlePassFeatures FeatureType; // 0x13e1 (0x1)
	unsigned char unreflected_13e2[0x6]; // 0x13e2 (0x6) 
	struct FBattlePassLandingPageEntryPreviewInfo PreviewInfo; // 0x13e8 (0x88)
	bool bNeedsBattlePass; // 0x1470 (0x1)
	unsigned char unreflected_1471[0x7]; // 0x1471 (0x7) 
	class UFortChallengeBundleScheduleDefinition* DelayQuestSchedule; // 0x1478 (0x8)
	int DelayDaysSinceSeasonStart; // 0x1480 (0x4)
	unsigned char unreflected_1484[0x4]; // 0x1484 (0x4) 
	class UFortItemDefinition* RequiredItem; // 0x1488 (0x8)
	class UFortBangWrapper_NUI* BangWrapper; // 0x1490 (0x8)
	bool bUsesTelemetry; // 0x1498 (0x1)
	unsigned char unreflected_1499[0x3]; // 0x1499 (0x3) 
	struct FIntPoint* TelemetrySize; // 0x149c (0x8)
	struct FIntPoint* TelemetryPosition; // 0x14a4 (0x8)
	unsigned char unreflected_14ac[0x4]; // 0x14ac (0x4) 
	struct FBattlePassLandingPageButtonTexts DefaultTexts; // 0x14b0 (0x48)
	struct FBattlePassLandingPageButtonTexts DelayedTexts; // 0x14f8 (0x48)
	struct FBattlePassLandingPageButtonTexts SubscribedTexts; // 0x1540 (0x48)
	struct FBattlePassLandingPageButtonDisplayBehaviorData DisplayBehaviorData; // 0x1588 (0x18)
	unsigned char padding_15a0[0xc0]; // 0x15a0 (0xc0)

	/* Functions */

	// Function /Script/BattlePassBase.BattlePassLandingPageButton.OnSubscriptionTextureLoaded (Has no native function)
	void OnSubscriptionTextureLoaded(class UTexture2D*& Texture); // (Event | Protected | BlueprintEvent)

	// Function /Script/BattlePassBase.BattlePassLandingPageButton.OnSubscriptionOwnershipUpdated (Has no native function)
	void OnSubscriptionOwnershipUpdated(bool& bOwnsSubsciption); // (0x00000002 | Event | Public | BlueprintEvent)

	// Function /Script/BattlePassBase.BattlePassLandingPageButton.OnShowDisplayDetails (Has no native function)
	void OnShowDisplayDetails(); // (0x00000002 | Event | Public | BlueprintEvent)

	// Function /Script/BattlePassBase.BattlePassLandingPageButton.OnSetTileImageMaterial (Has no native function)
	void OnSetTileImageMaterial(class UMaterialInstance*& Material); // (Event | Protected | BlueprintEvent)

	// Function /Script/BattlePassBase.BattlePassLandingPageButton.OnDisplayDetailsUpdated (Has no native function)
	void OnDisplayDetailsUpdated(struct FBattlePassLandingPageButtonDisplayDetails& NewDisplayDetails); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/BattlePassBase.BattlePassLandingPageButton.GetBattlePassDisplayDetails (Underlying native function: GetBattlePassDisplayDetails 0x14afac4)
	struct FBattlePassLandingPageButtonDisplayDetails GetBattlePassDisplayDetails(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

