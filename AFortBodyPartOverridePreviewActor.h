// Class /Script/FortniteGame.FortBodyPartOverridePreviewActor
// Size: 0x2a8
class AFortBodyPartOverridePreviewActor : public AActor
{
	unsigned char unreflected_288[0x8]; // 0x288 (0x8) 
	class UAthenaCharacterPartItemDefinition* MyCosmeticItem; // 0x290 (0x8)
	struct FDelegate OnSettingsChangedDelegate; // 0x298 (0xc)
	unsigned char padding_2a4[0x4]; // 0x2a4 (0x4)

	/* Functions */

	// Function /Script/FortniteGame.FortBodyPartOverridePreviewActor.OnPreviewCosmeticItem (Has no native function)
	void OnPreviewCosmeticItem(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortBodyPartOverridePreviewActor.ApplyMyCosmeticItemToHero (Underlying native function: ApplyMyCosmeticItemToHero 0x8841964)
	void ApplyMyCosmeticItemToHero(class AFortPlayerPawn*& PawnToModify, class AFortPlayerController*& FortPC); // (Final | Native | Protected | BlueprintCallable)
};

