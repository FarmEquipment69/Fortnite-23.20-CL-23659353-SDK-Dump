// Class /Script/FortniteUI.FortNamedServerActionTile
// Size: 0x14a0
class UFortNamedServerActionTile : public UFortServerActionTile
{
	class UCommonTextBlock* TextActionTitle; // 0x1480 (0x8)
	class UCommonTextBlock* TextActionDescription; // 0x1488 (0x8)
	class UImage* ImageBackground; // 0x1490 (0x8)
	unsigned char padding_1498[0x8]; // 0x1498 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortNamedServerActionTile.UpdateButtonText (Has no native function)
	void UpdateButtonText(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortNamedServerActionTile.IsActionIslandSelectType (Underlying native function: IsActionIslandSelectType 0xa4706c8)
	bool IsActionIslandSelectType(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)
};

