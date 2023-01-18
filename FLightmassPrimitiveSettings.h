// ScriptStruct /Script/Engine.LightmassPrimitiveSettings
// Size: 0x18
struct FLightmassPrimitiveSettings
{
	unsigned char bUseTwoSidedLighting; // 0x0 (0x1)
	unsigned char bShadowIndirectOnly; // 0x0 (0x1)
	unsigned char bUseEmissiveForStaticLighting; // 0x0 (0x1)
	unsigned char bUseVertexNormalForHemisphereGather; // 0x0 (0x1)
	unsigned char unreflected_1[0x3]; // 0x1 (0x3) 
	float EmissiveLightFalloffExponent; // 0x4 (0x4)
	float EmissiveLightExplicitInfluenceRadius; // 0x8 (0x4)
	float EmissiveBoost; // 0xc (0x4)
	float DiffuseBoost; // 0x10 (0x4)
	float FullyOccludedSamplesFraction; // 0x14 (0x4)
};

