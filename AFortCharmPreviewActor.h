// Class /Script/FortniteGame.FortCharmPreviewActor
// Size: 0x2b0
class AFortCharmPreviewActor : public AActor
{
	unsigned char unreflected_288[0x10]; // 0x288 (0x10) 
	class UAthenaCharmItemDefinition* MyCosmeticItem; // 0x298 (0x8)
	struct TEnumAsByte<EFortCustomCharmType> CharmSlot; // 0x2a0 (0x1)
	unsigned char unreflected_2a1[0x3]; // 0x2a1 (0x3) 
	struct FDelegate OnSettingsChangedDelegate; // 0x2a4 (0xc)

	/* Functions */

	// Function /Script/FortniteGame.FortCharmPreviewActor.SetActiveCharmSlot (Underlying native function: SetActiveCharmSlot 0x88454ac)
	void SetActiveCharmSlot(int& CharmSlotIn); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortCharmPreviewActor.OnPreviewCosmeticItem (Has no native function)
	void OnPreviewCosmeticItem(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortCharmPreviewActor.ApplyMyCosmeticItemToHero (Underlying native function: ApplyMyCosmeticItemToHero 0x8841bf8)
	void ApplyMyCosmeticItemToHero(class AFortPlayerPawn*& PawnToModify, class AFortPlayerController*& FortPC); // (Final | Native | Protected | BlueprintCallable)
};

