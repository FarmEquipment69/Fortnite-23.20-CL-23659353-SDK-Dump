// Class /Script/FortniteGame.AthenaShoutItemDefinition
// Size: 0xb60
class UAthenaShoutItemDefinition : public UAthenaEmojiItemDefinition
{
	struct TWeakObjectPtr<class USoundBase> ShoutSound; // 0xae8 (0x28)
	struct TSet<class UAudioComponent*> TemporarilyHeldAudioComponents; // 0xb10 (0x50)

	/* Functions */

	// Function /Script/FortniteGame.AthenaShoutItemDefinition.SpawnSoundComponent (Underlying native function: SpawnSoundComponent 0x87635e0)
	void SpawnSoundComponent(struct TWeakObjectPtr<class USoundBase>& OverrideSound, class USceneComponent*& Component, struct FVector& LocationAt, class UAudioComponent*& SpawnedComponent, class UObject*& WorldContext); // (Final | Native | Protected | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.AthenaShoutItemDefinition.ConfigureSoundComponent (Underlying native function: ConfigureSoundComponent 0x875f95c)
	void ConfigureSoundComponent(struct TWeakObjectPtr<class USoundBase>& OverrideSound, class UAudioComponent*& ComponentToConfigure); // (Final | Native | Public | BlueprintCallable | Const)
};

