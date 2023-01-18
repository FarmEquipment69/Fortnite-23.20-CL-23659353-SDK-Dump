// ScriptStruct /Script/Engine.CollisionImpactData
// Size: 0x48
struct FCollisionImpactData
{
	struct TArray<struct FRigidBodyContactInfo> ContactInfos; // 0x0 (0x10)
	struct FVector TotalNormalImpulse; // 0x10 (0x18)
	struct FVector TotalFrictionImpulse; // 0x28 (0x18)
	bool bIsVelocityDeltaUnderThreshold; // 0x40 (0x1)
	unsigned char padding_41[0x7]; // 0x41 (0x7)
};

