// Class /Script/FortniteGame.ValetRaisinComponent
// Size: 0xf8
class UValetRaisinComponent : public UActorComponent
{
	unsigned char unreflected_a0[0x30]; // 0xa0 (0x30) 
	class USoundAttenuation* AttenuationSettings; // 0xd0 (0x8)
	class USoundEffectSourcePresetChain* PresetChain; // 0xd8 (0x8)
	bool bShouldManageOwnAudio; // 0xe0 (0x1)
	unsigned char unreflected_e1[0x7]; // 0xe1 (0x7) 
	class UAudioComponent* DynamicAudioComponent; // 0xe8 (0x8)
	class UFortItemDefinition* ReplicatedSource; // 0xf0 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.ValetRaisinComponent.ServerSelectOption (Underlying native function: ServerSelectOption 0x871b854)
	void ServerSelectOption(class AFortPlayerController*& PlayerChoosing, class UFortItemDefinition*& MusicSource); // (Final | Net | NetReliable | Native | Event | Private | NetServer | 0x80000000)

	// Function /Script/FortniteGame.ValetRaisinComponent.OnRep_Source (Underlying native function: OnRep_Source 0x871b578)
	void OnRepSource(); // (Final | Native | Private)

	// Function /Script/FortniteGame.ValetRaisinComponent.GetSource (Underlying native function: GetSource 0x871a794)
	class UFortItemDefinition* GetSource(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.ValetRaisinComponent.ClientPickOption (Underlying native function: ClientPickOption 0x8719c00)
	void ClientPickOption(); // (Final | BlueprintCosmetic | Native | Public | BlueprintCallable)
};

