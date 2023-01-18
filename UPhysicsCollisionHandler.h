// Class /Script/Engine.PhysicsCollisionHandler
// Size: 0x40
class UPhysicsCollisionHandler : public UObject
{
	float ImpactThreshold; // 0x28 (0x4)
	float ImpactReFireDelay; // 0x2c (0x4)
	class USoundBase* DefaultImpactSound; // 0x30 (0x8)
	float LastImpactSoundTime; // 0x38 (0x4)
	unsigned char padding_3c[0x4]; // 0x3c (0x4)
};

