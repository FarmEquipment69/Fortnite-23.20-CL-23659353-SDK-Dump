// ScriptStruct /Script/Engine.StrataMaterialInfo
// Size: 0x18
struct FStrataMaterialInfo
{
	uint16_t ShadingModelField; // 0x0 (0x2)
	unsigned char bHasShadingModelFromExpression; // 0x2 (0x1)
	unsigned char unreflected_3[0x1]; // 0x3 (0x1) 
	uint32_t ConnectedProperties; // 0x4 (0x4)
	struct TArray<class USubsurfaceProfile*> SubsurfaceProfiles; // 0x8 (0x10)
};

