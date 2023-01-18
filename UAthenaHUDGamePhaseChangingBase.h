// Class /Script/FortniteUI.AthenaHUDGamePhaseChangingBase
// Size: 0x320
class UAthenaHUDGamePhaseChangingBase : public UFortHUDElementWidget
{
	unsigned char unreflected_2d0[0x40]; // 0x2d0 (0x40) 
	struct FFortPrioritizedWidgetData PrioritizationData; // 0x310 (0x2)
	unsigned char padding_312[0xe]; // 0x312 (0xe)

	/* Functions */

	// Function /Script/FortniteUI.AthenaHUDGamePhaseChangingBase.HandleGamePhaseStepChanged (Underlying native function: HandleGamePhaseStepChanged 0x15907ec)
	void HandleGamePhaseStepChanged(struct TScriptInterface<class IFortSafeZoneInterface>& SafeZoneInterface, enum EAthenaGamePhaseStep& GamePhaseStep); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteUI.AthenaHUDGamePhaseChangingBase.BP_UpdateMessaging (Has no native function)
	void BPUpdateMessaging(enum EAthenaGamePhaseStep& Step, struct FText& message, struct FText& TimeText); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaHUDGamePhaseChangingBase.BP_HandleGamePhaseStepChanged (Has no native function)
	void BPHandleGamePhaseStepChanged(enum EAthenaGamePhaseStep& Step); // (Event | Protected | BlueprintEvent)
};

