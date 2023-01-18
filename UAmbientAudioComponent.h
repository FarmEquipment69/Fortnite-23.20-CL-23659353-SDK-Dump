// Class /Script/AmbientAudio.AmbientAudioComponent
// Size: 0xd8
class UAmbientAudioComponent : public UAudioGameplayComponent
{
	unsigned char unreflected_a8[0x8]; // 0xa8 (0x8) 
	class UAmbientAudioDataAsset* AmbientAsset; // 0xb0 (0x8)
	int Priority; // 0xb8 (0x4)
	float CrossfadeTime; // 0xbc (0x4)
	struct FGuid AmbientGuid; // 0xc0 (0x10)
	struct FName DisplayName; // 0xd0 (0x4)
	unsigned char padding_d4[0x4]; // 0xd4 (0x4)

	/* Functions */

	// Function /Script/AmbientAudio.AmbientAudioComponent.SetPriority (Underlying native function: SetPriority 0x7477a28)
	void SetPriority(int& InPriority); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/AmbientAudio.AmbientAudioComponent.SetCrossfadeTime (Underlying native function: SetCrossfadeTime 0x74779a4)
	void SetCrossfadeTime(float& InCrossfadeTime); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/AmbientAudio.AmbientAudioComponent.SetAmbientAsset (Underlying native function: SetAmbientAsset 0x7477914)
	void SetAmbientAsset(class UAmbientAudioDataAsset*& InAmbientAsset); // (Final | Native | Public | BlueprintCallable)
};

