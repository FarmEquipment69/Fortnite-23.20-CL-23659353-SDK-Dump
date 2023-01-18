// ScriptStruct /Script/FortniteGame.MassContributionDamageHandlerData
// Size: 0xa8
struct FMassContributionDamageHandlerData : FCollisionResponseBaseData
{
	struct FScalableFloat MaxDamage; // 0x8 (0x28)
	struct FScalableFloat BaselineMassForMomentum; // 0x30 (0x28)
	struct FScalableFloat RelativeVelocityForMaxDamage; // 0x58 (0x28)
	struct FScalableFloat MinRelativeVelocityToDamage; // 0x80 (0x28)
};

