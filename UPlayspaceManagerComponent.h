// Class /Script/PlayspaceSystem.PlayspaceManagerComponent
// Size: 0x250
class UPlayspaceManagerComponent : public UGameStateComponent
{
	unsigned char unreflected_a0[0x18]; // 0xa0 (0x18) 
	class APlayspace* RootPlayspace; // 0xb8 (0x8)
	enum EPlayspaceRootType PlayspaceRootType; // 0xc0 (0x1)
	unsigned char unreflected_c1[0x11f]; // 0xc1 (0x11f) 
	struct TArray<struct FActorOverlapEvent> UnhandledEnterEvents; // 0x1e0 (0x10)
	struct TArray<struct FActorOverlapEvent> UnhandledExitEvents; // 0x1f0 (0x10)
	struct TSet<class APlayerController*> UnassignedPlayers; // 0x200 (0x50)

	/* Functions */

	// Function /Script/PlayspaceSystem.PlayspaceManagerComponent.ProcessOverlapEvents (Underlying native function: ProcessOverlapEvents 0x70621a0)
	bool ProcessOverlapEvents(float& DeltaTime); // (Final | Native | Private)

	// Function /Script/PlayspaceSystem.PlayspaceManagerComponent.OnRep_RootPlayspace (Underlying native function: OnRep_RootPlayspace 0x2f50024)
	void OnRepRootPlayspace(); // (Final | Native | Private)

	// Function /Script/PlayspaceSystem.PlayspaceManagerComponent.OnPlayerEndOverlapGameplayVolume (Underlying native function: OnPlayerEndOverlapGameplayVolume 0x70620b0)
	void OnPlayerEndOverlapGameplayVolume(class APlayerState*& PlayerState, class AGameplayVolume*& Volume); // (Final | Native | Private)

	// Function /Script/PlayspaceSystem.PlayspaceManagerComponent.OnPlayerBeginOverlapGameplayVolume (Underlying native function: OnPlayerBeginOverlapGameplayVolume 0x7061fec)
	void OnPlayerBeginOverlapGameplayVolume(class APlayerState*& PlayerState, class AGameplayVolume*& Volume); // (Final | Native | Private)
};

