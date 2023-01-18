// Class /Script/FortniteUI.AthenaStormSurgeWarningBase
// Size: 0x318
class UAthenaStormSurgeWarningBase : public UFortHUDElementWidget
{
	unsigned char unreflected_2d0[0x40]; // 0x2d0 (0x40) 
	struct FFortPrioritizedWidgetData PrioritizationData; // 0x310 (0x2)
	unsigned char padding_312[0x6]; // 0x312 (0x6)

	/* Functions */

	// Function /Script/FortniteUI.AthenaStormSurgeWarningBase.OnStormCapStateChanged (Underlying native function: OnStormCapStateChanged 0xa4b03c4)
	void OnStormCapStateChanged(enum EAthenaStormCapState& StormCapState); // (Final | Native | Protected)

	// Function /Script/FortniteUI.AthenaStormSurgeWarningBase.OnStopDisplaying (Has no native function)
	void OnStopDisplaying(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaStormSurgeWarningBase.OnStartDisplaying (Has no native function)
	void OnStartDisplaying(struct FText& TitleText, struct FText& SubTitleText, bool& bDisplaySubtitle, bool& bPlayDamageActiveSound); // (Event | Protected | HasOutParms | BlueprintEvent)
};

