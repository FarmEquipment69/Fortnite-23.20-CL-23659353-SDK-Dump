// Class /Script/SaveTheWorldUI.FortHeroLoadoutPerkTileBase
// Size: 0x318
class UFortHeroLoadoutPerkTileBase : public UCommonUserWidget
{
	struct TEnumAsByte<EFortBrushSize> BrushSize; // 0x290 (0x1)
	bool bShowSummaryDescription; // 0x291 (0x1)
	unsigned char unreflected_292[0x6]; // 0x292 (0x6) 
	class UCommonTextBlock* TextPerkName; // 0x298 (0x8)
	class URichTextBlock* TextDescription; // 0x2a0 (0x8)
	class UFortLazyImage* ImagePerkIcon; // 0x2a8 (0x8)
	class UHorizontalBox* HboxPerkDetails; // 0x2b0 (0x8)
	struct FText ActiveText; // 0x2b8 (0x18)
	struct FText InactiveText; // 0x2d0 (0x18)
	float InactiveOpacity; // 0x2e8 (0x4)
	float ActiveOpacity; // 0x2ec (0x4)
	class UFortAbilityKit* AbilityKit; // 0x2f0 (0x8)
	unsigned char padding_2f8[0x20]; // 0x2f8 (0x20)

	/* Functions */

	// Function /Script/SaveTheWorldUI.FortHeroLoadoutPerkTileBase.OnPerkInitialized (Has no native function)
	void OnPerkInitialized(enum EFortHeroPerkDisplayType& InPerkType, bool& bActive, bool& bShowWarning); // (Event | Protected | BlueprintEvent)
};

