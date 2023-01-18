// ScriptStruct /Script/VerseMovement.NetPhysicsMoveConfigEntry
// Size: 0x30
struct FNetPhysicsMoveConfigEntry
{
	struct FString Name; // 0x0 (0x10)
	struct TArray<struct FNetPhysicsMoveTrigger> Triggers; // 0x10 (0x10)
	struct TArray<struct FNetPhysicsMoveResponse> Responses; // 0x20 (0x10)
};

