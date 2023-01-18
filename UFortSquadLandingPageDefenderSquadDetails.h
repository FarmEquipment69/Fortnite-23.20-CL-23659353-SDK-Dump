// Class /Script/SaveTheWorldUI.FortSquadLandingPageDefenderSquadDetails
// Size: 0x2a0
class UFortSquadLandingPageDefenderSquadDetails : public UCommonUserWidget
{
	class UCommonTextBlock* OutpostName; // 0x290 (0x8)
	class UCommonNumericTextBlock* PowerRating; // 0x298 (0x8)

	/* Functions */

	// Function /Script/SaveTheWorldUI.FortSquadLandingPageDefenderSquadDetails.SetDefenderSquadInfo (Underlying native function: SetDefenderSquadInfo 0x75c18c0)
	void SetDefenderSquadInfo(struct FFortLandingPageDefenderSummaryInfo& DefenderSummaryInfo); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortSquadLandingPageDefenderSquadDetails.HandleDefenderSquadInfoSetBP (Has no native function)
	void HandleDefenderSquadInfoSetBP(struct FFortLandingPageDefenderSummaryInfo& DefenderSummaryInfo); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortSquadLandingPageDefenderSquadDetails.HandleAddDefenderSquadMemberBP (Has no native function)
	void HandleAddDefenderSquadMemberBP(struct FName& SquadId, int& Index); // (Event | Public | HasOutParms | BlueprintEvent)
};

