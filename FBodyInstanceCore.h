// ScriptStruct /Script/PhysicsCore.BodyInstanceCore
// Size: 0x18
struct FBodyInstanceCore
{
	unsigned char bSimulatePhysics; // 0x10 (0x1)
	unsigned char bOverrideMass; // 0x10 (0x1)
	unsigned char bEnableGravity; // 0x10 (0x1)
	unsigned char bAutoWeld; // 0x10 (0x1)
	unsigned char bStartAwake; // 0x10 (0x1)
	unsigned char bGenerateWakeEvents; // 0x10 (0x1)
	unsigned char bUpdateMassWhenScaleChanges; // 0x10 (0x1)
	unsigned char padding_11[0x7]; // 0x11 (0x7)
};

