// ScriptStruct /Script/FortniteGame.DeltaVelocityDamageHandlerData
// Size: 0xb0
struct FDeltaVelocityDamageHandlerData : FCollisionResponseBaseData
{
	struct FScalableFloat MaxDamage; // 0x8 (0x28)
	struct FScalableFloat VelocityDeltaForMaxDamage; // 0x30 (0x28)
	struct FScalableFloat MiddleMass; // 0x58 (0x28)
	struct FScalableFloat MinRelativeVelocityToDamage; // 0x80 (0x28)
	bool bHitStaticObject; // 0xa8 (0x1)
	unsigned char padding_a9[0x7]; // 0xa9 (0x7)
};

