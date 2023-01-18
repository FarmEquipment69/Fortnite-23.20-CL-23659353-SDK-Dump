// ScriptStruct /Script/FortniteGame.FortWindResponder
// Size: 0xb0
struct FFortWindResponder
{
	class ABuildingSMActor* WindUpdatingBuildingSMActor; // 0x0 (0x8)
	class UCurveLinearColor* WindSpeedCurve; // 0x8 (0x8)
	class UCurveLinearColor* WindPannerSpeedCurve; // 0x10 (0x8)
	class USoundBase* WindAudio; // 0x18 (0x8)
	struct TArray<class UMaterialInterface*> MildWindMaterialInstances; // 0x20 (0x10)
	struct TArray<class UMaterialInterface*> IntenseWindMaterialInstances; // 0x30 (0x10)
	struct TArray<struct FFortWindMaterialData> MaterialsData; // 0x40 (0x10)
	int MaterialParameterPairIndices; // 0x50 (0x4)
	unsigned char unreflected_54[0x4]; // 0x54 (0x4) 
	struct TArray<struct FFortWindResponderMaterialVariablePairData> PairedVariablesData; // 0x58 (0x10)
	unsigned char unreflected_68[0x38]; // 0x68 (0x38) 
	float WindSpeed; // 0xa0 (0x4)
	unsigned char unreflected_a4[0x4]; // 0xa4 (0x4) 
	bool bHasSetupAnimatingMaterials; // 0xa8 (0x1)
	unsigned char padding_a9[0x7]; // 0xa9 (0x7)
};

