// ScriptStruct /Script/SuperstormRuntime.TornadoSimulationData
// Size: 0x40
struct FTornadoSimulationData : FFastArraySerializerItem
{
	struct TWeakObjectPtr<class AActor> Actor; // 0xc (0x8)
	enum EFortPhysicsObjectType ObjectType; // 0x14 (0x1)
	unsigned char unreflected_15[0x3]; // 0x15 (0x3) 
	float TangentVelocity; // 0x18 (0x4)
	float TangentAccel; // 0x1c (0x4)
	float HeightVelocity; // 0x20 (0x4)
	float HeightAccel; // 0x24 (0x4)
	struct FVector Torque; // 0x28 (0x18)
};

