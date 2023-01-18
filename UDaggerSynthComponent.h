// Class /Script/HmxAudio.DaggerSynthComponent
// Size: 0x278
class UDaggerSynthComponent : public USynthesizerComponentBase
{
	struct TWeakObjectPtr<class UDaggerPatchAsset> DaggerPatch; // 0x248 (0x28)
	unsigned char padding_270[0x8]; // 0x270 (0x8)

	/* Functions */

	// Function /Script/HmxAudio.DaggerSynthComponent.SetDaggerPatch (Underlying native function: SetDaggerPatch 0x5452cc0)
	void SetDaggerPatch(struct TWeakObjectPtr<class UDaggerPatchAsset>& Patch); // (Final | Native | Protected | BlueprintCallable)
};

