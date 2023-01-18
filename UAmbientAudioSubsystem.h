// Class /Script/AmbientAudio.AmbientAudioSubsystem
// Size: 0x258
class UAmbientAudioSubsystem : public UWorldSubsystem
{
	unsigned char unreflected_30[0x8]; // 0x30 (0x8) 
	struct FMulticastInlineDelegate OnTagChanged; // 0x38 (0x10)
	struct FMulticastInlineDelegate OnEntryChanged; // 0x48 (0x10)
	struct TArray<class UAmbientAudioComponent*> AmbientComponents; // 0x58 (0x10)
	class AAmbientAudioParameterActor* ParameterActor; // 0x68 (0x8)
	unsigned char padding_70[0x1e8]; // 0x70 (0x1e8)

	/* Functions */

	// Function /Script/AmbientAudio.AmbientAudioSubsystem.RemoveGameplayTag (Underlying native function: RemoveGameplayTag 0x113d23c)
	void RemoveGameplayTag(struct FGameplayTag& GameplayTag); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/AmbientAudio.AmbientAudioSubsystem.RemoveAmbientEntry (Underlying native function: RemoveAmbientEntry 0x2685d68)
	void RemoveAmbientEntry(struct FName& AmbientName, float& CrossfadeOverride); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/AmbientAudio.AmbientAudioSubsystem.GetAudioParameterComponent (Underlying native function: GetAudioParameterComponent 0x74778ec)
	class UAudioParameterComponent* GetAudioParameterComponent(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/AmbientAudio.AmbientAudioSubsystem.AddGameplayTag (Underlying native function: AddGameplayTag 0x747786c)
	void AddGameplayTag(struct FGameplayTag& GameplayTag); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/AmbientAudio.AmbientAudioSubsystem.AddAmbientEntry (Underlying native function: AddAmbientEntry 0x2441dbc)
	void AddAmbientEntry(struct FName& AmbientName, class UAmbientAudioDataAsset*& Asset, int& Priority, float& CrossfadeTime); // (Final | Native | Public | BlueprintCallable)
};

