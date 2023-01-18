// Class /Script/XpEverywhereUI.XpEverywhereBar
// Size: 0x488
class UXpEverywhereBar : public UCommonActivatableWidget
{
	bool bXpBarAlwaysActive; // 0x3a8 (0x1)
	unsigned char unreflected_3a9[0x7]; // 0x3a9 (0x7) 
	class UFortSocialAvatarIcon* SocialAvatarIcon; // 0x3b0 (0x8)
	unsigned char padding_3b8[0xd0]; // 0x3b8 (0xd0)

	/* Functions */

	// Function /Script/XpEverywhereUI.XpEverywhereBar.OnXpBarUpdated (Has no native function)
	void OnXpBarUpdated(int& ShownXP, int& ShownLevel, int& NewDesiredXP, int& NewDesiredLevel, int& NewRemainingRestXP); // (Event | Protected | BlueprintEvent)

	// Function /Script/XpEverywhereUI.XpEverywhereBar.OnXpBarInitialized (Has no native function)
	void OnXpBarInitialized(int& CurrentXP, int& CurrentLevel, int& CurrentRemainingRestXP); // (Event | Protected | BlueprintEvent)

	// Function /Script/XpEverywhereUI.XpEverywhereBar.GetTotalXpRequiredForLevel (Underlying native function: GetTotalXpRequiredForLevel 0x77ec1bc)
	int GetTotalXpRequiredForLevel(int& InLevel); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/XpEverywhereUI.XpEverywhereBar.DoneUpdatingXpBar (Underlying native function: DoneUpdatingXpBar 0x77ec13c)
	void DoneUpdatingXpBar(); // (Final | Native | Protected | BlueprintCallable)
};

