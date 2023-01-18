// Class /Script/SpecialEventGameplayRuntime.SpecialEventRewindComponent_PlayerPawn
// Size: 0x388
class USpecialEventRewindComponent_PlayerPawn : public USpecialEventRewindComponent
{
	bool bStartServerRecordingOnLastGroundFrame; // 0xc8 (0x1)
	unsigned char unreflected_c9[0x27]; // 0xc9 (0x27) 
	struct FSpecialEventRewindComponentRecording_PlayerPawn ReplicatedRecording; // 0xf0 (0x20)
	unsigned char unreflected_110[0x118]; // 0x110 (0x118) 
	struct FSpecialEventRewindComponentRecordingFastArray_PlayerPawn ReplicatedRecordingFastArray; // 0x228 (0x118)
	unsigned char padding_340[0x48]; // 0x340 (0x48)

	/* Functions */

	// Function /Script/SpecialEventGameplayRuntime.SpecialEventRewindComponent_PlayerPawn.OnServerLanded (Underlying native function: OnServerLanded 0x76c59fc)
	void OnServerLanded(struct FHitResult& Hit); // (Final | Native | Private | HasOutParms)
};

