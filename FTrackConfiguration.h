// ScriptStruct /Script/FortniteGame.TrackConfiguration
// Size: 0x50
struct FTrackConfiguration
{
	struct TArray<bool> NeighborsByDirection; // 0x0 (0x10)
	struct TArray<struct FTrackSwitchStateConfig> SwitchStates; // 0x10 (0x10)
	struct FRotator SwitchRotation; // 0x20 (0x18)
	struct FVector SwitchOffset; // 0x38 (0x18)
};

