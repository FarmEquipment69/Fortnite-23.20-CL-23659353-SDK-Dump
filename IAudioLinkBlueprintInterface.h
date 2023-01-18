// Class /Script/AudioLinkEngine.AudioLinkBlueprintInterface
// Size: 0x28
class IAudioLinkBlueprintInterface : public IInterface
{

	/* Functions */

	// Function /Script/AudioLinkEngine.AudioLinkBlueprintInterface.StopLink (Underlying native function: StopLink 0x2640c6c)
	void StopLink(); // (Native | Public | BlueprintCallable)

	// Function /Script/AudioLinkEngine.AudioLinkBlueprintInterface.SetLinkSound (Underlying native function: SetLinkSound 0x83913f0)
	void SetLinkSound(class USoundBase*& NewSound); // (Native | Public | BlueprintCallable)

	// Function /Script/AudioLinkEngine.AudioLinkBlueprintInterface.PlayLink (Underlying native function: PlayLink 0x9b3659c)
	void PlayLink(float& StartTime); // (Native | Public | BlueprintCallable)

	// Function /Script/AudioLinkEngine.AudioLinkBlueprintInterface.IsLinkPlaying (Underlying native function: IsLinkPlaying 0x8266ca0)
	bool IsLinkPlaying(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)
};

