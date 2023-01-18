// Class /Script/FortniteUI.CobaltRoundStartWidgetBase
// Size: 0x3c0
class UCobaltRoundStartWidgetBase : public UCobaltWidgetBase
{
	unsigned char unreflected_360[0x20]; // 0x360 (0x20) 
	struct TArray<struct FCobaltPlayerPortraitIndexInfo> UpperBannerPortraitIndexInfos; // 0x380 (0x10)
	struct TArray<struct FCobaltPlayerPortraitIndexInfo> LowerBannerPortraitIndexInfos; // 0x390 (0x10)
	struct TArray<class UCobaltPlayerPortraitWidget*> PlayerPortraitsTeam1; // 0x3a0 (0x10)
	struct TArray<class UCobaltPlayerPortraitWidget*> PlayerPortraitsTeam2; // 0x3b0 (0x10)

	/* Functions */

	// Function /Script/FortniteUI.CobaltRoundStartWidgetBase.HandleUpdateVsInfo_BP (Has no native function)
	void HandleUpdateVsInfoBP(int& CurrentActiveRound, struct FText& RoundName, struct FText& POIName); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.CobaltRoundStartWidgetBase.HandleUpdateRoundStartWidgetVisibility_BP (Has no native function)
	void HandleUpdateRoundStartWidgetVisibilityBP(bool& bNewVisibility); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.CobaltRoundStartWidgetBase.HandleUpdateIntelInfo_BP (Has no native function)
	void HandleUpdateIntelInfoBP(int& CurrentRound, unsigned char& LastRoundWinningTeam); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.CobaltRoundStartWidgetBase.HandleShowRoundStartWidget (Underlying native function: HandleShowRoundStartWidget 0xa57e2a8)
	void HandleShowRoundStartWidget(struct FCobaltWidgetRoundData& RoundData); // (Final | Native | Protected | HasOutParms)

	// Function /Script/FortniteUI.CobaltRoundStartWidgetBase.HandleHideRoundStartWidget (Underlying native function: HandleHideRoundStartWidget 0xa57dc24)
	void HandleHideRoundStartWidget(); // (Final | Native | Protected)
};

