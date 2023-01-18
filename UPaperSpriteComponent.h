// Class /Script/Paper2D.PaperSpriteComponent
// Size: 0x5a0
class UPaperSpriteComponent : public UMeshComponent
{
	class UPaperSprite* SourceSprite; // 0x580 (0x8)
	class UMaterialInterface* MaterialOverride; // 0x588 (0x8)
	struct FLinearColor SpriteColor; // 0x590 (0x10)

	/* Functions */

	// Function /Script/Paper2D.PaperSpriteComponent.SetSpriteColor (Underlying native function: SetSpriteColor 0x6d2e330)
	void SetSpriteColor(struct FLinearColor& NewColor); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Paper2D.PaperSpriteComponent.SetSprite (Underlying native function: SetSprite 0x6d2db94)
	bool SetSprite(class UPaperSprite*& NewSprite); // (Native | Public | BlueprintCallable)

	// Function /Script/Paper2D.PaperSpriteComponent.GetSprite (Underlying native function: GetSprite 0x1a3f330)
	class UPaperSprite* GetSprite(); // (Native | Public | BlueprintCallable | BlueprintPure)
};

