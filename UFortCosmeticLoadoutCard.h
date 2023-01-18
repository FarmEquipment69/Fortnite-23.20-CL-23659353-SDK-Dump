// Class /Script/FortniteUI.FortCosmeticLoadoutCard
// Size: 0x458
class UFortCosmeticLoadoutCard : public UCommonUserWidget
{
	struct FFortAthenaLoadout RepresentedLoadout; // 0x290 (0x178)
	enum EFortLoadoutCardType CardType; // 0x408 (0x1)
	unsigned char unreflected_409[0x7]; // 0x409 (0x7) 
	struct FString LoadoutName; // 0x410 (0x10)
	bool bSaved; // 0x420 (0x1)
	unsigned char unreflected_421[0x3]; // 0x421 (0x3) 
	float WidthToHeightRatio; // 0x424 (0x4)
	float CardWidth; // 0x428 (0x4)
	unsigned char unreflected_42c[0x4]; // 0x42c (0x4) 
	class UWidgetAnimation* WipedownAnimation; // 0x430 (0x8)
	unsigned char unreflected_438[0x8]; // 0x438 (0x8) 
	class USizeBox* SizeBoxCard; // 0x440 (0x8)
	unsigned char padding_448[0x10]; // 0x448 (0x10)

	/* Functions */

	// Function /Script/FortniteUI.FortCosmeticLoadoutCard.OnUpdateCard (Has no native function)
	void OnUpdateCard(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortCosmeticLoadoutCard.HandleDifferentHeroLoadoutActivated (Underlying native function: HandleDifferentHeroLoadoutActivated 0xa825d14)
	void HandleDifferentHeroLoadoutActivated(class UFortMcpProfileCampaign*& Profile); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortCosmeticLoadoutCard.GetCharacterPreviewImage (Underlying native function: GetCharacterPreviewImage 0xa825b6c)
	struct TWeakObjectPtr<class UTexture2D> GetCharacterPreviewImage(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure)
};

