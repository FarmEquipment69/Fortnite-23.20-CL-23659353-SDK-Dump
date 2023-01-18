// ScriptStruct /Script/Engine.BaseAttenuationSettings
// Size: 0xc0
struct FBaseAttenuationSettings
{
	enum EAttenuationDistanceModel DistanceAlgorithm; // 0x8 (0x1)
	struct TEnumAsByte<EAttenuationShape> AttenuationShape; // 0x9 (0x1)
	enum ENaturalSoundFalloffMode FalloffMode; // 0xa (0x1)
	unsigned char unreflected_b[0x1]; // 0xb (0x1) 
	float dBAttenuationAtMax; // 0xc (0x4)
	struct FVector AttenuationShapeExtents; // 0x10 (0x18)
	float ConeOffset; // 0x28 (0x4)
	float FalloffDistance; // 0x2c (0x4)
	float ConeSphereRadius; // 0x30 (0x4)
	float ConeSphereFalloffDistance; // 0x34 (0x4)
	struct FRuntimeFloatCurve CustomAttenuationCurve; // 0x38 (0x88)
};

