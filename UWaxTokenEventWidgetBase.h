// Class /Script/FortniteUI.WaxTokenEventWidgetBase
// Size: 0x330
class UWaxTokenEventWidgetBase : public ULTMWidgetBase
{
	class AFortAthenaMutator_Wax* WaxMutator; // 0x328 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.WaxTokenEventWidgetBase.OnTokensCollected (Has no native function)
	void OnTokensCollected(class AFortPlayerStateAthena*& Player, int& Amount); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.WaxTokenEventWidgetBase.OnTokensAwarded (Has no native function)
	void OnTokensAwarded(class AFortPlayerStateAthena*& Player, int& Amount); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.WaxTokenEventWidgetBase.OnFlyingTokensApplied (Has no native function)
	void OnFlyingTokensApplied(class AFortPlayerStateAthena*& Player, int& Amount); // (Event | Protected | BlueprintEvent)
};

