// Class /Script/HmxAudio.FusionSynthComponent
// Size: 0x280
class UFusionSynthComponent : public USynthesizerComponentBase
{
	struct TWeakObjectPtr<class UFusionPatchAsset> FusionPatch; // 0x248 (0x28)
	class UFusionPatchAsset* LoadedFusionAsset; // 0x270 (0x8)
	unsigned char padding_278[0x8]; // 0x278 (0x8)

	/* Functions */

	// Function /Script/HmxAudio.FusionSynthComponent.SetFusionPatch (Underlying native function: SetFusionPatch 0x5452cc0)
	void SetFusionPatch(struct TWeakObjectPtr<class UFusionPatchAsset>& Patch); // (Final | Native | Protected | BlueprintCallable)
};

