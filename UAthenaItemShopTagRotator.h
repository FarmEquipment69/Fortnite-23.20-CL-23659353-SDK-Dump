// Class /Script/FortniteUI.AthenaItemShopTagRotator
// Size: 0x2c0
class UAthenaItemShopTagRotator : public UCommonUserWidget
{
	float TimeBetweenTitleChanges; // 0x290 (0x4)
	unsigned char unreflected_294[0x24]; // 0x294 (0x24) 
	class UCommonTextBlock* TextTagCallout; // 0x2b8 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.AthenaItemShopTagRotator.UpdateTagText (Underlying native function: UpdateTagText 0xa5807a0)
	void UpdateTagText(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaItemShopTagRotator.OnTagExit (Has no native function)
	void OnTagExit(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaItemShopTagRotator.OnTagEnter (Has no native function)
	void OnTagEnter(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaItemShopTagRotator.OnActiveStatusChanged (Has no native function)
	void OnActiveStatusChanged(bool& bIsActive); // (Event | Protected | BlueprintEvent)
};

