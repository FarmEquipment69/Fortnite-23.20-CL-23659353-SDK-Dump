// Class /Script/FortniteGame.FortClientAnnouncement_Keybinding
// Size: 0x430
class AFortClientAnnouncement_Keybinding : public AFortClientAnnouncement
{
	unsigned char unreflected_2f8[0x8]; // 0x2f8 (0x8) 
	struct FFortClientAnnouncementData_Keybinding KeybindingData; // 0x300 (0x130)

	/* Functions */

	// Function /Script/FortniteGame.FortClientAnnouncement_Keybinding.SetTitleText (Underlying native function: SetTitleText 0x82674f0)
	void SetTitleText(struct FText& TitleText); // (BlueprintAuthorityOnly | Native | Public)

	// Function /Script/FortniteGame.FortClientAnnouncement_Keybinding.SetIcon (Underlying native function: SetIcon 0x8267170)
	void SetIcon(struct FSlateBrush& Icon); // (BlueprintAuthorityOnly | Native | Public | HasOutParms)

	// Function /Script/FortniteGame.FortClientAnnouncement_Keybinding.SetDisplayTime (Underlying native function: SetDisplayTime 0x8267068)
	void SetDisplayTime(float& DisplayTime); // (BlueprintAuthorityOnly | Native | Public)

	// Function /Script/FortniteGame.FortClientAnnouncement_Keybinding.SetDetailText (Underlying native function: SetDetailText 0x8266f24)
	void SetDetailText(struct FText& DetailText); // (BlueprintAuthorityOnly | Native | Public)

	// Function /Script/FortniteGame.FortClientAnnouncement_Keybinding.ResetGamepadActionTextPairList (Underlying native function: ResetGamepadActionTextPairList 0x8266e08)
	void ResetGamepadActionTextPairList(); // (BlueprintAuthorityOnly | Native | Public)

	// Function /Script/FortniteGame.FortClientAnnouncement_Keybinding.OnRep_KeybindingData (Underlying native function: OnRep_KeybindingData 0x82668a8)
	void OnRepKeybindingData(struct FFortClientAnnouncementData_Keybinding& PreviousKeybindingData); // (Final | Native | Protected | HasOutParms)

	// Function /Script/FortniteGame.FortClientAnnouncement_Keybinding.AddGamepadActionTextPair (Underlying native function: AddGamepadActionTextPair 0x826488c)
	void AddGamepadActionTextPair(struct FActionTextPair& Pair); // (BlueprintAuthorityOnly | Native | Public)
};

