// Class /Script/VGameplayRst.VerseLevelStreamingComponentBase
// Size: 0x138
class UVerseLevelStreamingComponentBase : public UEntityActorComponent
{
	struct FVerseLevelStreamingLevelIdentifier NewLevel; // 0x90 (0x28)
	struct FVerseLevelStreamingLevelStatus LevelStatus; // 0xb8 (0x28)
	unsigned char padding_e0[0x58]; // 0xe0 (0x58)

	/* Functions */

	// Function /Script/VGameplayRst.VerseLevelStreamingComponentBase.OnRep_NewLevel (Underlying native function: OnRep_NewLevel 0x709e198)
	void OnRepNewLevel(); // (Final | Native | Public)

	// Function /Script/VGameplayRst.VerseLevelStreamingComponentBase.OnLevelUnloaded_Server (Underlying native function: OnLevelUnloaded_Server 0x709dfac)
	void OnLevelUnloadedServer(); // (Final | Native | Public)

	// Function /Script/VGameplayRst.VerseLevelStreamingComponentBase.OnLevelUnloaded_Client (Underlying native function: OnLevelUnloaded_Client 0x709df98)
	void OnLevelUnloadedClient(); // (Final | Native | Public)

	// Function /Script/VGameplayRst.VerseLevelStreamingComponentBase.OnLevelShown_Server (Underlying native function: OnLevelShown_Server 0x709df84)
	void OnLevelShownServer(); // (Final | Native | Public)

	// Function /Script/VGameplayRst.VerseLevelStreamingComponentBase.OnLevelShown_Client (Underlying native function: OnLevelShown_Client 0x709df70)
	void OnLevelShownClient(); // (Final | Native | Public)
};

