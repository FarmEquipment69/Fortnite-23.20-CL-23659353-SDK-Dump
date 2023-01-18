// ScriptStruct /Script/VerseMovement.NetPhysicsMoveTraceTriggerParams
// Size: 0x50
struct FNetPhysicsMoveTraceTriggerParams
{
	struct FVector Direction; // 0x0 (0x18)
	enum ENetPhysicsMoveResponseFrame Frame; // 0x18 (0x1)
	unsigned char unreflected_19[0x3]; // 0x19 (0x3) 
	float Length; // 0x1c (0x4)
	struct TEnumAsByte<ECollisionChannel> CollisionChannel; // 0x20 (0x1)
	struct FCollisionResponseContainer ResponseParams; // 0x21 (0x20)
	bool bProportionalToHitDistance; // 0x41 (0x1)
	unsigned char unreflected_42[0x6]; // 0x42 (0x6) 
	class UCurveFloat* HitDistanceToMagnitudeCurve; // 0x48 (0x8)
};

