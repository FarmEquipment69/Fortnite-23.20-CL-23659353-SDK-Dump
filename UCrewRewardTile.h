// Class /Script/CrewUI.CrewRewardTile
// Size: 0x1440
class UCrewRewardTile : public UCommonButtonBase
{
	unsigned char unreflected_13e0[0x40]; // 0x13e0 (0x40) 
	float TileImageStreamoutSeconds; // 0x1420 (0x4)
	unsigned char unreflected_1424[0x4]; // 0x1424 (0x4) 
	class UImage* ImageTileImage; // 0x1428 (0x8)
	class UCommonTextBlock* TextTileLabel; // 0x1430 (0x8)
	unsigned char padding_1438[0x8]; // 0x1438 (0x8)

	/* Functions */

	// Function /Script/CrewUI.CrewRewardTile.OnUpdateOwnedState (Has no native function)
	void OnUpdateOwnedState(bool& bOwned); // (Event | Protected | BlueprintEvent)

	// Function /Script/CrewUI.CrewRewardTile.OnStartingDownloadTileImage (Has no native function)
	void OnStartingDownloadTileImage(); // (Event | Protected | BlueprintEvent)

	// Function /Script/CrewUI.CrewRewardTile.OnDownloadTileImageComplete (Has no native function)
	void OnDownloadTileImageComplete(class UTexture2D*& Texture); // (Event | Protected | BlueprintEvent)

	// Function /Script/CrewUI.CrewRewardTile.IsMonthlyBenefit (Underlying native function: IsMonthlyBenefit 0x73d3618)
	bool IsMonthlyBenefit(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)
};

