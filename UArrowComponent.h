// Class /Script/Engine.ArrowComponent
// Size: 0x560
class UArrowComponent : public UPrimitiveComponent
{
	struct FColor ArrowColor; // 0x540 (0x4)
	float ArrowSize; // 0x544 (0x4)
	float ArrowLength; // 0x548 (0x4)
	float ScreenSize; // 0x54c (0x4)
	unsigned char bIsScreenSizeScaled; // 0x550 (0x1)
	unsigned char bTreatAsASprite; // 0x550 (0x1)
	unsigned char padding_551[0xf]; // 0x551 (0xf)

	/* Functions */

	// Function /Script/Engine.ArrowComponent.SetArrowColor (Underlying native function: SetArrowColor 0x9ce17f0)
	void SetArrowColor(struct FLinearColor& NewColor); // (Native | Public | HasDefaults | BlueprintCallable)
};

