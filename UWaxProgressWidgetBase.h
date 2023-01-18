// Class /Script/FortniteUI.WaxProgressWidgetBase
// Size: 0x330
class UWaxProgressWidgetBase : public ULTMWidgetBase
{
	class AFortAthenaMutator_Wax* WaxMutator; // 0x328 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.WaxProgressWidgetBase.ShowPlayerCloseToVictory (Has no native function)
	void ShowPlayerCloseToVictory(int& CoinsAwayFromVictory); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.WaxProgressWidgetBase.ShowEnemyCloseToVictory (Has no native function)
	void ShowEnemyCloseToVictory(int& CoinsAwayFromVictory); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.WaxProgressWidgetBase.OnPendingFlashes (Underlying native function: OnPendingFlashes 0xa5a4018)
	void OnPendingFlashes(struct TArray<int>& Flashes); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteUI.WaxProgressWidgetBase.OnAnyTokenChange (Underlying native function: OnAnyTokenChange 0xa5a3a94)
	void OnAnyTokenChange(); // (Final | Native | Private)

	// Function /Script/FortniteUI.WaxProgressWidgetBase.K2_OnPodiumChange (Has no native function)
	void K2OnPodiumChange(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.WaxProgressWidgetBase.K2_OnAnyTokenChange (Has no native function)
	void K2OnAnyTokenChange(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.WaxProgressWidgetBase.HideCloseToVictoryIfShown (Has no native function)
	void HideCloseToVictoryIfShown(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.WaxProgressWidgetBase.DoCoinPulseFor (Has no native function)
	void DoCoinPulseFor(int& BarIndex); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.WaxProgressWidgetBase.AdjustForSpectate (Has no native function)
	void AdjustForSpectate(bool& bIsSpectating); // (Event | Protected | BlueprintEvent)
};

