// Class /Script/LiveLink.LiveLinkPreset
// Size: 0x50
class ULiveLinkPreset : public UObject
{
	struct TArray<struct FLiveLinkSourcePreset> Sources; // 0x28 (0x10)
	struct TArray<struct FLiveLinkSubjectPreset> Subjects; // 0x38 (0x10)
	unsigned char padding_48[0x8]; // 0x48 (0x8)

	/* Functions */

	// Function /Script/LiveLink.LiveLinkPreset.BuildFromClient (Underlying native function: BuildFromClient 0x7cd6e24)
	void BuildFromClient(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/LiveLink.LiveLinkPreset.ApplyToClientLatent (Underlying native function: ApplyToClientLatent 0x7cd6d3c)
	void ApplyToClientLatent(class UObject*& WorldContextObject, struct FLatentActionInfo& LatentInfo); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/LiveLink.LiveLinkPreset.ApplyToClient (Underlying native function: ApplyToClient 0x7cd6d18)
	bool ApplyToClient(); // (Final | Native | Public | BlueprintCallable | Const)

	// Function /Script/LiveLink.LiveLinkPreset.AddToClient (Underlying native function: AddToClient 0x7cd6c88)
	bool AddToClient(bool& bRecreatePresets); // (Final | Native | Public | BlueprintCallable | Const)
};

