// Class /Script/PhysicsCore.ChaosPhysicalMaterial
// Size: 0x48
class UChaosPhysicalMaterial : public UObject
{
	float Friction; // 0x28 (0x4)
	float StaticFriction; // 0x2c (0x4)
	float Restitution; // 0x30 (0x4)
	float LinearEtherDrag; // 0x34 (0x4)
	float AngularEtherDrag; // 0x38 (0x4)
	float SleepingLinearVelocityThreshold; // 0x3c (0x4)
	float SleepingAngularVelocityThreshold; // 0x40 (0x4)
	unsigned char padding_44[0x4]; // 0x44 (0x4)
};

