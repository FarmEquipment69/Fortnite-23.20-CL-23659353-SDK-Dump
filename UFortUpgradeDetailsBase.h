// Class /Script/SaveTheWorldUI.FortUpgradeDetailsBase
// Size: 0x2d0
class UFortUpgradeDetailsBase : public UCommonUserWidget
{
	class UMediaPlayer* VideoPlayer; // 0x290 (0x8)
	class UFortUpgradeInfo* UpgradeInfo; // 0x298 (0x8)
	unsigned char padding_2a0[0x30]; // 0x2a0 (0x30)

	/* Functions */

	// Function /Script/SaveTheWorldUI.FortUpgradeDetailsBase.RequestPurchaseNode (Underlying native function: RequestPurchaseNode 0x75cd6c4)
	void RequestPurchaseNode(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortUpgradeDetailsBase.OnUpgradeToDetailChanged (Has no native function)
	void OnUpgradeToDetailChanged(); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortUpgradeDetailsBase.OnShowIcon (Has no native function)
	void OnShowIcon(class UTexture2D*& Icon); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortUpgradeDetailsBase.OnScreenActive (Has no native function)
	void OnScreenActive(); // (Event | Public | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortUpgradeDetailsBase.OnPurchaseComplete (Has no native function)
	void OnPurchaseComplete(); // (Event | Public | BlueprintEvent)
};

