// Class /Script/FortniteGame.FortPossessedPropInputComponent
// Size: 0xd8
class UFortPossessedPropInputComponent : public UActorComponent
{
	struct FMulticastInlineDelegate OnPossessedPropCancel; // 0xa0 (0x10)
	struct FMulticastInlineDelegate OnPossessedPropPlace; // 0xb0 (0x10)
	struct FMulticastInlineDelegate OnPossessedPropMakeNoise; // 0xc0 (0x10)
	class UInputComponent* FortPossessedPropInputComponent; // 0xd0 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortPossessedPropInputComponent.PushPossessedPropInputMode (Underlying native function: PushPossessedPropInputMode 0x709e37c)
	void PushPossessedPropInputMode(class APlayerController*& PlayerController); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPossessedPropInputComponent.PopPossessedPropInputMode (Underlying native function: PopPossessedPropInputMode 0x709e2f8)
	void PopPossessedPropInputMode(class APlayerController*& PlayerController); // (Native | Public | BlueprintCallable)
};

