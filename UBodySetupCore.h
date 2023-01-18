// Class /Script/PhysicsCore.BodySetupCore
// Size: 0x30
class UBodySetupCore : public UObject
{
	struct FName BoneName; // 0x28 (0x4)
	struct TEnumAsByte<EPhysicsType> PhysicsType; // 0x2c (0x1)
	struct TEnumAsByte<ECollisionTraceFlag> CollisionTraceFlag; // 0x2d (0x1)
	struct TEnumAsByte<EBodyCollisionResponse> CollisionReponse; // 0x2e (0x1)
	unsigned char padding_2f[0x1]; // 0x2f (0x1)
};

