// Class /Script/FortniteUI.FortPartyStatusIcon
// Size: 0x290
class UFortPartyStatusIcon : public UWidget
{
	unsigned char unreflected_148[0x30]; // 0x148 (0x30) 
	struct FVector2D DesiredSize; // 0x178 (0x10)
	struct FSlateColor ImageColorAndOpacity; // 0x188 (0x14)
	unsigned char unreflected_19c[0x4]; // 0x19c (0x4) 
	class UMaterialInterface* PartyStatusMaterial; // 0x1a0 (0x8)
	unsigned char unreflected_1a8[0x8]; // 0x1a8 (0x8) 
	struct FSlateBrush StatusBrush; // 0x1b0 (0xc0)
	unsigned char padding_270[0x20]; // 0x270 (0x20)

	/* Functions */

	// Function /Script/FortniteUI.FortPartyStatusIcon.SetImageColorAndOpacity (Underlying native function: SetImageColorAndOpacity 0xa93a3c8)
	void SetImageColorAndOpacity(struct FSlateColor& InColorAndOpacity); // (Final | Native | Public | HasOutParms | BlueprintCallable)
};

