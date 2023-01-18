// ScriptStruct /Script/FortniteGame.MassDeltaVelocityDamageHandlerData
// Size: 0x60
struct FMassDeltaVelocityDamageHandlerData : FCollisionResponseBaseData
{
	struct FScalableFloat VelocityDeltaForMaxDamage; // 0x8 (0x28)
	struct FScalableFloat MinRelativeVelocityToDamage; // 0x30 (0x28)
	class UCurveFloat* MassDamageCurve; // 0x58 (0x8)
};

