// Class /Script/FortniteUI.FortQualityModeTile
// Size: 0x1450
class UFortQualityModeTile : public UCommonButtonBase
{
	enum EFortContentQualityLevel QualityModeLevel; // 0x13e0 (0x1)
	unsigned char unreflected_13e1[0x7]; // 0x13e1 (0x7) 
	struct FText QualityLevelName; // 0x13e8 (0x18)
	struct FText QualityLevelDescription; // 0x1400 (0x18)
	class UTexture2D* QualityLevelImage; // 0x1418 (0x8)
	struct FText AdditionalDownloadSize; // 0x1420 (0x18)
	struct FText TotalBuildSize; // 0x1438 (0x18)

	/* Functions */

	// Function /Script/FortniteUI.FortQualityModeTile.OnSizeInfoReceived (Has no native function)
	void OnSizeInfoReceived(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortQualityModeTile.OnSelectedStateChanged (Has no native function)
	void OnSelectedStateChanged(bool& bIsSelected); // (Event | Protected | BlueprintEvent)
};

