// Class /Script/FortniteGame.FortSoundIndicatorInterface
// Size: 0x28
class IFortSoundIndicatorInterface : public IInterface
{

	/* Functions */

	// Function /Script/FortniteGame.FortSoundIndicatorInterface.ShouldShowSoundIndicator (Underlying native function: ShouldShowSoundIndicator 0x888b678)
	bool ShouldShowSoundIndicator(class AFortPlayerController*& PlayerController); // (0x00000002 | Native | Event | Public | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortSoundIndicatorInterface.GetAffiliationsToShowFor (Underlying native function: GetAffiliationsToShowFor 0x89b8970)
	struct TArray<struct TEnumAsByte<EFortTeamAffiliation>> GetAffiliationsToShowFor(); // (0x00000002 | Native | Event | Public | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)
};

