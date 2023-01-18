// Class /Script/FortniteGame.FortAnimNotify_PlayReloadFX
// Size: 0x40
class UFortAnimNotify_PlayReloadFX : public UAnimNotify
{
	struct TEnumAsByte<EFortReloadFXState> ReloadStage; // 0x38 (0x1)
	unsigned char padding_39[0x7]; // 0x39 (0x7)

	/* Functions */

	// Function /Script/FortniteGame.FortAnimNotify_PlayReloadFX.SetReloadStage (Underlying native function: SetReloadStage 0x8094980)
	void SetReloadStage(struct TEnumAsByte<EFortReloadFXState>& InReloadStage); // (Final | Native | Private | BlueprintCallable | Const)
};

