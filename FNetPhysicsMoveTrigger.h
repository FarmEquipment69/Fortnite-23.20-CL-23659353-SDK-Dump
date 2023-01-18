// ScriptStruct /Script/VerseMovement.NetPhysicsMoveTrigger
// Size: 0x98
struct FNetPhysicsMoveTrigger
{
	enum ENetPhysicsMoveTriggerType Type; // 0x0 (0x1)
	unsigned char unreflected_1[0x7]; // 0x1 (0x7) 
	struct FNetPhysicsMoveInputTriggerParams InputParams; // 0x8 (0x28)
	struct FNetPhysicsMovePhysicsTriggerParams PhysicsParams; // 0x30 (0x18)
	struct FNetPhysicsMoveTraceTriggerParams TraceParams; // 0x48 (0x50)
};

