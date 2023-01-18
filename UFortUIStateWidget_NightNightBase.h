// Class /Script/FortniteUI.FortUIStateWidget_NightNightBase
// Size: 0x408
class UFortUIStateWidget_NightNightBase : public UFortUIStateWidgetBase
{
	bool bEnableNightNightPatchCheck; // 0x3c0 (0x1)
	unsigned char unreflected_3c1[0x3]; // 0x3c1 (0x3) 
	float PatchCheckIntervalSeconds; // 0x3c4 (0x4)
	float PatchCheckIntervalJitterSeconds; // 0x3c8 (0x4)
	unsigned char unreflected_3cc[0x14]; // 0x3cc (0x14) 
	struct FDateTime* GameShutdownTime; // 0x3e0 (0x8)
	float GameShutdownTimeJitterSeconds; // 0x3e8 (0x4)
	unsigned char padding_3ec[0x1c]; // 0x3ec (0x1c)

	/* Functions */

	// Function /Script/FortniteUI.FortUIStateWidget_NightNightBase.OnToggleUIChanged (Has no native function)
	void OnToggleUIChanged(bool& bHideUI); // (Event | Protected | BlueprintEvent)
};

