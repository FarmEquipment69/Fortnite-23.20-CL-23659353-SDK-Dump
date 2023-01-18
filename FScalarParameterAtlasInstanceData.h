// ScriptStruct /Script/Engine.ScalarParameterAtlasInstanceData
// Size: 0x58
struct FScalarParameterAtlasInstanceData
{
	bool bIsUsedAsAtlasPosition; // 0x0 (0x1)
	unsigned char unreflected_1[0x7]; // 0x1 (0x7) 
	struct TWeakObjectPtr<class UCurveLinearColor> Curve; // 0x8 (0x28)
	struct TWeakObjectPtr<class UCurveLinearColorAtlas> Atlas; // 0x30 (0x28)
};

