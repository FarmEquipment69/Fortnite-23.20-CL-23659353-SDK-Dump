// Class /Script/FortniteUI.AthenaMapNavigableIcon
// Size: 0x320
class UAthenaMapNavigableIcon : public UCommonUserWidget
{
	unsigned char unreflected_290[0x28]; // 0x290 (0x28) 
	class UImage* ImageIcon; // 0x2b8 (0x8)
	unsigned char padding_2c0[0x60]; // 0x2c0 (0x60)

	/* Functions */

	// Function /Script/FortniteUI.AthenaMapNavigableIcon.OnUnselected (Has no native function)
	void OnUnselected(bool& bUserInteraction); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaMapNavigableIcon.OnUnhovered (Has no native function)
	void OnUnhovered(bool& bUserInteraction); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaMapNavigableIcon.OnSetIsInGame (Has no native function)
	void OnSetIsInGame(bool& bIsInGame); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaMapNavigableIcon.OnSetHasLocation (Has no native function)
	void OnSetHasLocation(bool& bHasLocation); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaMapNavigableIcon.OnSelected (Has no native function)
	void OnSelected(bool& bUserInteraction); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaMapNavigableIcon.OnHovered (Has no native function)
	void OnHovered(bool& bUserInteraction); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaMapNavigableIcon.OnChangeBangVisibility (Has no native function)
	void OnChangeBangVisibility(bool& bShouldShow); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaMapNavigableIcon.OnChallengeSet (Has no native function)
	void OnChallengeSet(bool& bIsComplete, bool& bIsLocked, bool& bHasIconOverride, float& Progress, bool& bShouldShowBang, bool& bIsPinned, bool& bChallengeSelected); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaMapNavigableIcon.OnChallengeReset (Has no native function)
	void OnChallengeReset(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaMapNavigableIcon.OnChallengeIconOverriden (Has no native function)
	void OnChallengeIconOverriden(class UTexture2D*& Icon); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaMapNavigableIcon.OnBeginIntroAnimation (Has no native function)
	void OnBeginIntroAnimation(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaMapNavigableIcon.IsIconSelected (Underlying native function: IsIconSelected 0xa5a3a04)
	bool IsIconSelected(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaMapNavigableIcon.IsIconHovered (Underlying native function: IsIconHovered 0xa5a39ec)
	bool IsIconHovered(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

