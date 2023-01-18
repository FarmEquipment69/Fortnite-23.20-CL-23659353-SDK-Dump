// ScriptStruct /Script/FortniteGame.ReplicatedPhysicsPawnState
// Size: 0x80
struct FReplicatedPhysicsPawnState
{
	struct FVector_NetQuantize100 Translation; // 0x0 (0x18)
	unsigned char unreflected_18[0x8]; // 0x18 (0x8) 
	struct FQuat Rotation; // 0x20 (0x20)
	struct FVector_NetQuantize10 LinearVelocity; // 0x40 (0x18)
	struct FVector_NetQuantize10 AngularVelocity; // 0x58 (0x18)
	uint16_t SyncKey; // 0x70 (0x2)
	unsigned char padding_72[0xe]; // 0x72 (0xe)
};

